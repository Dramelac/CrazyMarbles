#include "sfml_extensions.h"
int sf::GetFullscreenModes(int maxnummodes, VideoMode *modes)
{
    std::vector<sf::VideoMode> screenmodes=sf::VideoMode::GetFullscreenModes();

    int nummodes=screenmodes.size();
    if (nummodes>maxnummodes) nummodes=maxnummodes;
    for(int c=0; c<nummodes; ++c)
    {
        modes[c]=screenmodes[c];
    }

    return nummodes;
}
