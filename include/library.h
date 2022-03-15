#ifdef WIN32
#define DLL_ACCESS __declspec(dllexport)
#else
#define DLL_ACCESS
#endif

namespace dynamic_library {

    DLL_ACCESS void hello();

    DLL_ACCESS int mmain(int argc, char *argv[]);

    class LibClassExample {
    public:
        DLL_ACCESS int mmain(int argc, char *argv[]);
    };
}

namespace static_library {
    void hello();

    int mmain(int argc, char *argv[]);

    class LibClassExample {
    public:
        int mmain(int argc, char *argv[]);
    };
}