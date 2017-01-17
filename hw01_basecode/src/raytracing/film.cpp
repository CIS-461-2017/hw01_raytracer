#include <raytracing/film.h>
#include <QImage>
#include <QColor>

Film::Film() : Film(400, 400){}

Film::Film(unsigned int width, unsigned int height)
{
    SetDimensions(width, height);
}

void Film::SetDimensions(unsigned int w, unsigned int h)
{
    this->width = w;
    this->height = h;
    pixels.clear();
    pixels = std::vector<std::vector<glm::vec3>>(width);
    for(unsigned int i = 0; i < width; i++){
        pixels[i] = std::vector<glm::vec3>(height);
    }
}

void Film::WriteImage(QString path)
{
    if(QString::compare(path.right(4), QString(".png"), Qt::CaseInsensitive) != 0)
    {
        path.append(QString(".png"));
    }

    QImage output(width, height, QImage::Format_RGB32);

    for(unsigned int i = 0; i < width; i++)
    {
        for(unsigned int j = 0; j < height; j++)
        {
            glm::vec3 color = (pixels[i][j]) * 255.f;
            output.setPixel(i, j, QColor(color.r, color.g, color.b).rgb());
        }
    }
    output.save(path);
}

