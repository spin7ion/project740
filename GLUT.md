# OpenGL Utility Toolkit #

Основные источники информации по библиотеке GLUT расположены ниже:
  * Документация [сайт OpenGL](http://www.opengl.org/documentation/specs/glut/)
  * Загрузки [сайт OpenGL](http://www.opengl.org/documentation/specs/glut/) или [сайт Нейта Робинса (Nate Robins)](http://user.xmission.com/~nate/glut.html) (преимущественно к Win32)


# Использование GLUT #

## GNU/Linux ##

### Slackware 14.0 x86\_64 : компиляция GLUT ###
```
tar xvf glut-3.7.tar.gz
cd glut-3.7
export IMAKEINCLUDE="-I/usr/lib64/X11/config/"
./mkmkfiles.imake
cd lib/glut
make
```

### Slackware 14.0 x86\_64 : компиляция приложений ###
```
gcc -I../glut/glut-3.7/include/ main.c -lX11 -lGL -lGLU -lXmu -L../glut/glut-3.7/lib/glut/ -lglut
```
Где `../glut/glut-3.7/` путь к каталогу куда были распакованы исходные тексты GLUT на предыдущем шаге.

## MS Windows ##

### MinGW (bin) ###
Возможно использование пакета с сайта Нейта Робинса.

### MinGW (src) ###
Особого труда не составляет и компиляция из исходных текстов.

### MS VS ###
Следует использовать пакет с сайта Нейта Робинса.