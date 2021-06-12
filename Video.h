#ifndef VIDEO_H
#define VIDEO_H
#include <string>

using namespace std;

class Video
{
    public:
        Video();
        Video(int, string, int, string);
        virtual ~Video();

    protected:
        int id;
        string nombre;
        int duracion;
        string genero;

    private:
};

#endif // VIDEO_H
