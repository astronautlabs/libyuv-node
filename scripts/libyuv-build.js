const { spawn } = require('child_process');
const path = require('path');


let script = 'scripts/libyuv-build.sh';
if (process.platform === 'win32')
    script = script.replace(/\.sh$/, '.bat');
console.log(`> ${script}`);
script = path.resolve(path.join(__dirname, '..', script));
spawn(script, { stdio: 'inherit'});