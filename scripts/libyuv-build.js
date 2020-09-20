const { exec } = require('child_process');

if (process.platform === 'win32') {
    exec(require.resolve('./libyuv-build.bat'), (error, stdout, stderr) => {
        if (error) {
            console.error(`failed to build libyuv:`);
            console.error(stderr);
            process.exit(1);
        } else {
            process.exit(0);
        }
    });
}