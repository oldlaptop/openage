#ifndef _CONSOLE_H_
#define _CONSOLE_H_

#include "../util/color.h"

#include <SDL2/SDL.h>
#include <GL/glew.h>
#include <GL/gl.h>

namespace openage {
namespace engine {

class Console {
private:
	util::Color bgcolor, textcolor;
	int lx, ly, rx, ry;

public:
	Console();
	Console(util::Color bg, util::Color fg, int lx=0, int ly=0, int rx=0, int ry=0);
	~Console();

	void set_winsize(int w, int h);
	void set_bgcolor(util::Color newcolor);
	void set_textcolor(util::Color newcolor);
	void draw();

	void input_handler(SDL_Event *e);
};

} //namespace engine
} //namespace openage

#endif //_CONSOLE_H_
