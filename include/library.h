
namespace dynamic_library{
#ifdef WIN32
    __declspec(dllexport)
#endif
    void hello();
}

namespace static_library{
    void hello();
}