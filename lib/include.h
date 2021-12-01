/* Bar functionality */
#include "bar.h"
#include "bar_indicators.h"
#include "flags.h"
#include "func.h"
#include "warp.h"
#include "workspace.h"

#include "bar_alpha.h"
#include "bar_ltsymbol.h"
#include "bar_status2d.h"
#include "winicon.h"
#include "bar_flexwintitle.h"
#include "bar_wintitle_floating.h"
#include "bar_wintitle_hidden.h"
#include "bar_wintitle_sticky.h"
#include "bar_systray.h"
#include "bar_wintitleactions.h"
#include "bar_workspaces.h"
#include "bar_wspreview.h"
#include "bar_powerline.h"

/* Other functionality */
#include "attachx.h"
#include "cfacts.h"
#include "clientopacity.h"
#include "cool_autostart.h"
#include "cyclelayouts.h"
#include "decorationhints.h"
#include "dragcfact.h"
#include "dragmfact.h"
#include "ewmh.h"
#include "group.h"
#include "fakefullscreenclient.h"
#include "floatpos.h"
#include "focusdir.h"
#include "placedir.h"
#include "focusmaster.h"
#include "focusurgent.h"
#include "inplacerotate.h"
#include "ipc.h"
#include "ipc/ipc.h"
#include "ipc/util.h"
#include "killunsel.h"
#include "movemouse.h"
#include "resizemouse.h"
#include "placemouse.h"
#include "mark.h"
#include "nomodbuttons.h"
#include "push.h"
#include "semi_scratchpads.h"
#include "renamed_scratchpads.h"
#include "restartsig.h"
#include "riodraw.h"
#include "rotatestack.h"
#include "savefloats.h"
#include "setborderpx.h"
#ifdef XINERAMA
#include "sortscreens.h"
#endif // XINERAMA
#include "stacker.h"
#include "sticky.h"
#include "swallow.h"
#include "switchcol.h"
#include "togglefullscreen.h"
#include "transfer.h"
#include "transferall.h"
#include "unfloatvisible.h"
#include "vanitygaps.h"
#include "zoomswap.h"
#include "xrdb.h"

/* Layouts */
#include "layout_flextile-deluxe.h"
