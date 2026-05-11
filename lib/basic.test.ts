import { describe } from "razmin";
import { expect } from 'chai';

import * as libyuv from '.';

import crypto from 'crypto';
import stream from 'stream';

describe(`libyuv`, () => {
    describe(`.Version()`, it => {
        it(`should return its version as a number`, () => {
            expect(typeof libyuv.Version() === 'number', 'version must be a number').to.be.true;
        });

        it(`should have a version number that makes sense`, () => {
            expect(libyuv.Version()).to.be.at.least(1763);
        })
    });

    describe('.I420ToABGR()', it => {
        it(`should successfully run a basic conversion`, () => {
            let width = 50;
            let height = 50;
            let src = new Uint8Array(width * height * 1.5);
            src.fill(0, 0, width * height * 1.5);

            let dst = new Uint8Array(width * height * 4);
            let retval = libyuv.I420ToABGR(
                src,
                width,
                src.subarray(width * height),
                width / 2,
                src.subarray(width * height + width * height / 4),
                width / 2,
                dst,
                width * 4,
                width, height
            );

            expect(retval).to.equal(0);
            expect(sha1(dst))
                .to.equal('636d2d59094cc679862855a1c49a7ab87f7c54ae');
        });
    });
})

function sha1(str: string | Uint8Array): string;
function sha1(str: crypto.BinaryLike | stream.Readable, callback: (err: boolean, hash: string) => void): void;
function sha1(str: crypto.BinaryLike | stream.Readable, callback?: (err: boolean, hash: string) => void): string | void {
    let hash = crypto.createHash('sha1');
    if (isReadableStream(str)) {
        if (!callback || typeof callback !== 'function')
            throw new Error('a callback is required to hash a stream');

        str.on('end', () => callback(false, hash.digest('hex')));
        str.on('readable', () => {
            let chunk: any;
            while (null !== (chunk = str.read()))
                hash.update(chunk);
        });
        return;
    }

    hash.update(str);

    let hexHash = hash.digest('hex');

    if (typeof callback === 'function')
        callback(false, hexHash);
    return hexHash;
};

function isReadableStream(value: any): value is stream.Readable {
    return !!value.pipe;
}