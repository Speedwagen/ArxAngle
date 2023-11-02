
#ifndef ARX_PLATFORM_PLATFORMCONFIG_H
#define ARX_PLATFORM_PLATFORMCONFIG_H

/*!
 * Low-level configuration.
 * Please only add config flags that change rarely (such as compiler features)
 * in order to not break incremental builds. Particularly, availability of
 * libraries and their features belongs in src/Configure.h.in
 */

// C++17 features
// wide character support for filenames in fstream
#define ARX_HAVE_CXX17_FSTREAM_WCHAR 1
// std::from_chars(float)
#define ARX_HAVE_CXX17_FROM_CHARS_FLOAT 0
// std::from_chars(int)
#define ARX_HAVE_CXX17_FROM_CHARS_INT 1

// C++20 features
#define ARX_HAVE_CXX20_NOEXCEPT_DEFAULT 1

// GCC extensions
// __attribute__((always_inline))
#define ARX_HAVE_ATTRIBUTE_ALWAYS_INLINE 0
// __attribute__((format(printf, i, j)))
#define ARX_HAVE_ATTRIBUTE_FORMAT_PRINTF 0
// __builtin_trap()
#define ARX_HAVE_BUILTIN_TRAP 0
// __builtin_unreachable()
#define ARX_HAVE_BUILTIN_UNREACHABLE 0
// __builtin_expect(e, v)
#define ARX_HAVE_BUILTIN_EXPECT 0

// Code generation options
#define BUILD_PROFILER_INSTRUMENT 0

#endif // ARX_PLATFORM_PLATFORMCONFIG_H
