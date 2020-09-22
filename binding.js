try {
  module.exports = require('./build/Debug/libyuv.node');
} catch (error) {
  module.exports = require('./build/Release/libyuv.node');
}