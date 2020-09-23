// on macOS node-gyp auto-removes lib prefix (not sure why or how to stop it)
let moduleName = process.platform === 'darwin' ? 'yuv' : 'libyuv';

try {
  module.exports = require(`./build/Debug/${moduleName}.node`);
} catch (error) {
  module.exports = require(`./build/Release/${moduleName}.node`);
}