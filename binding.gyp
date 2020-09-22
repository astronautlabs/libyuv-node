{
    "targets": [
        {
            "target_name" : "libyuv-node",
            'include_dirs': [
                "<!(node -p \"require('node-addon-api').include_dir\")",
                "external/libyuv/include"
            ],
            'sources' : [
                "src/init.cc",
                "src/version.cc",
                "src/convert.cc",
                "src/convert_argb.cc",
                "src/scale.cc",
                "src/scale_argb.cc",
                "src/cpu_id.cc",
                "src/rotate.cc"
            ],
            'cflags!': [ '-fno-exceptions' ],
            'cflags_cc!': [ '-fno-exceptions' ],
            'xcode_settings': {
                'GCC_ENABLE_CPP_RTTI': 'YES',
                'GCC_ENABLE_CPP_EXCEPTIONS': 'YES',
                'MACOSX_DEPLOYMENT_TARGET': '10.7',
                'CLANG_CXX_LIBRARY': 'libc++',
                'OTHER_CPLUSPLUSFLAGS': [
                    '-std=c++11',
                    '-stdlib=libc++'
                ]
            },
            'dependencies': [
                '<!(node -p \"require(\'node-addon-api\').gyp\")'
            ],

            "conditions": [
                [
                    'OS=="mac"', 
                    {
                        "link_settings": {
                            "libraries": [
                            ]
                        }
                    }
                ],
                [
                    'OS=="linux"', 
                    {
                        'link_settings' : {
                            "libraries": [
                                "<(module_root_dir)/external/libyuv.a"
                            ],
                            "ldflags" : [
                                "-lm -ldl -lpthread"
                            ]
                        }
                    }
                ],
                [
                    'OS=="win"', 
                    {
                        "configurations": {
                            "Release": {
                                "msvs_settings": {
                                    "VCCLCompilerTool": {
                                        "RuntimeTypeInfo": "true",
                                        "ExceptionHandling": 1,
                                        'AdditionalOptions': [ ],
                                        'RuntimeLibrary': 3
                                    },
                                    'VCLinkerTool': {
                                        'AdditionalOptions': [ '/NODEFAULTLIB:MSVCRT' ],
                                    },
                                }
                            }
                        },
                        'link_settings' : {
                            "library_dirs": ["<(module_root_dir)/external"],
                            "libraries": [
                                "yuv.lib"
                            ],
                        },
                        "copies": [
                            {
                            "destination": "<(module_root_dir)/build/Release/",
                            "files": [ "<(module_root_dir)/external/libyuv.dll" ]
                            }
                        ]
                    }
                ]
            ]
        }
    ]
}