const fs = require('fs');
const path = require('path');

let content = fs.readFileSync(path.join(__dirname, "..", "external", "libyuv", "CMakeLists.txt")).toString('utf-8');
let patchedContent = content.replace(
    /if \(JPEG_FOUND\)/g,
    "if (0 AND JPEG_FOUND)"
)

fs.writeFileSync(path.join(__dirname, "..", "external", "libyuv", "CMakeLists.txt.orig"), content);
fs.writeFileSync(path.join(__dirname, "..", "external", "libyuv", "CMakeLists.txt"), patchedContent);