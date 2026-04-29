const { spawn, } = require('child_process');
const path = require('path');
const fs = require('fs');
const os = require('os');

process.chdir(path.resolve(__dirname, '..'));
console.log(`) working directory: ${process.cwd()}`);

let script = 'scripts/libyuv-build.sh';
let args = [];


if (process.platform === 'win32') {
    script = script.replace(/\.sh$/, '.bat');
}
script = path.resolve(path.join(__dirname, '..', script));

if (process.platform !== 'win32') {
    args.unshift(script);
    script = 'bash';
}

console.log(`> ${script} ${args.map(x => `"${x}"`).join(' ')}`);
spawn(script, args, { stdio: 'inherit', shell: true });