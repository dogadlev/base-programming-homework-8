#include "bad_fig.h"

BadFig::BadFig(const char* message) : std::domain_error(message) {}