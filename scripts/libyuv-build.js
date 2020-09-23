const { spawn, } = require('child_process');
const path = require('path');
const fs = require('fs');
const os = require('os');

let script = 'scripts/libyuv-build.sh';
let args = [];

if (process.platform === 'win32') {
    script = script.replace(/\.sh$/, '.bat');
}
console.log(`> ${script}`);
script = path.resolve(path.join(__dirname, '..', script));

if (process.platform !== 'win32') {
    args.unshift(script);
    script = 'bash';
}

spawn(script, args, { stdio: 'inherit'});