try {
  module.exports = require(`./build/Debug/yuv.node`);
} catch (error) {
  module.exports = require(`./build/Release/yuv.node`);
}