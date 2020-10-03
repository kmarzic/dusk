/* Bar functionality */
#include "bar_indicators.h"
#include "bar_tagicons.h"
#include "flags.h"
#include "func.h"

#if BAR_ALPHA_PATCH
#include "bar_alpha.h"
#endif
#if BAR_ALTERNATIVE_TAGS_PATCH
#include "bar_alternativetags.h"
#endif
#if BAR_ANYBAR_PATCH
#include "bar_anybar.h"
#endif
#if BAR_DWMBLOCKS_PATCH && BAR_STATUSCMD_PATCH
#include "bar_dwmblocks.h"
#endif
#if BAR_EWMHTAGS_PATCH
#include "bar_ewmhtags.h"
#endif
#if COMBO_PATCH
#include "combo.h"
#endif
#if BAR_LTSYMBOL_PATCH
#include "bar_ltsymbol.h"
#endif
#if BAR_POWERLINE_STATUS_PATCH
#include "bar_powerline_status.h"
#endif
#if BAR_POWERLINE_TAGS_PATCH
#include "bar_powerline_tags.h"
#endif
#if BAR_STATUS_PATCH
#include "bar_status.h"
#endif
#if BAR_STATUS2D_PATCH
#include "bar_status2d.h"
#endif
#if BAR_STATUSBUTTON_PATCH
#include "bar_statusbutton.h"
#endif
#if BAR_STATUSCMD_PATCH
#include "bar_statuscmd.h"
#endif
#if BAR_TAGS_PATCH
#include "bar_tags.h"
#endif
#if BAR_TAGGRID_PATCH
#include "bar_taggrid.h"
#endif
#include "bar_flexwintitle.h"
#if BAR_WINTITLE_FLOATING_PATCH
#include "bar_wintitle_floating.h"
#endif
#if BAR_WINTITLE_HIDDEN_PATCH
#include "bar_wintitle_hidden.h"
#endif
#if BAR_SYSTRAY_PATCH
#include "bar_systray.h"
#endif

#include "bar_wintitleactions.h"


/* Other patches */
#include "attachx.h"
#include "cfacts.h"

#if CMDCUSTOMIZE_PATCH
#include "cmdcustomize.h"
#endif
#if COOL_AUTOSTART_PATCH
#include "cool_autostart.h"
#endif
#if CYCLELAYOUTS_PATCH
#include "cyclelayouts.h"
#endif
#if DECORATION_HINTS_PATCH
#include "decorationhints.h"
#endif

#include "dragcfact.h"
#include "dragmfact.h"
#include "fakefullscreenclient.h"
#include "floatpos.h"

#if FOCUSADJACENTTAG_PATCH
#include "focusadjacenttag.h"
#endif
#if FOCUSMASTER_PATCH
#include "focusmaster.h"
#endif
#if FOCUSURGENT_PATCH
#include "focusurgent.h"
#endif
#if INPLACEROTATE_PATCH
#include "inplacerotate.h"
#endif
#if IPC_PATCH
#include "ipc.h"
#include "ipc/ipc.h"
#include "ipc/util.h"
#endif
#if INSETS_PATCH
#include "insets.h"
#endif
#if KEYMODES_PATCH
#include "keymodes.h"
#endif
#if KILLUNSEL_PATCH
#include "killunsel.h"
#endif
#if MDPCONTROL_PATCH
#include "mdpcontrol.h"
#endif
#if MOVESTACK_PATCH
#include "movestack.h"
#endif
#if NO_MOD_BUTTONS_PATCH
#include "nomodbuttons.h"
#endif

#include "pertag.h"

#if PUSH_NO_MASTER_PATCH
#include "push_no_master.h"
#elif PUSH_PATCH
#include "push.h"
#endif
#if REORGANIZETAGS_PATCH
#include "reorganizetags.h"
#endif
#if RESTARTSIG_PATCH
#include "restartsig.h"
#endif
#if ROTATESTACK_PATCH
#include "rotatestack.h"
#endif
#if ROUNDED_CORNERS_PATCH
#include "roundedcorners.h"
#endif

#include "scratchpad.h"

#if SELFRESTART_PATCH
#include "selfrestart.h"
#endif
#if SETBORDERPX_PATCH
#include "setborderpx.h"
#endif
#if SHIFTVIEW_PATCH
#include "shiftview.h"
#endif
#if SHIFTVIEW_CLIENTS_PATCH
#include "shiftviewclients.h"
#endif
#if SIZEHINTS_RULED_PATCH
#include "sizehints_ruled.h"
#endif
#if SORTSCREENS_PATCH
#ifdef XINERAMA
#include "sortscreens.h"
#endif // XINERAMA
#endif
#if STACKER_PATCH
#include "stacker.h"
#endif
#if STICKY_PATCH
#include "sticky.h"
#endif

#include "swallow.h"

#if SWAPFOCUS_PATCH
#include "swapfocus.h"
#endif
#if SWAPTAGS_PATCH
#include "swaptags.h"
#endif
#if SWITCHCOL_PATCH
#include "switchcol.h"
#endif
#if TAGALL_PATCH
#include "tagall.h"
#endif
#if TAGALLMON_PATCH
#include "tagallmon.h"
#endif
#if TAGOTHERMONITOR_PATCH
#include "tagothermonitor.h"
#endif
#if TAGSWAPMON_PATCH
#include "tagswapmon.h"
#endif

#include "togglefullscreen.h"

#if TRANSFER_PATCH
#include "transfer.h"
#endif
#if TRANSFER_ALL_PATCH
#include "transferall.h"
#endif
#if UNFLOATVISIBLE_PATCH
#include "unfloatvisible.h"
#endif
#if VANITYGAPS_PATCH
#include "vanitygaps.h"
#endif
#if WINVIEW_PATCH
#include "winview.h"
#endif

#include "zoomswap.h"

#if XRDB_PATCH
#include "xrdb.h"
#endif
/* Layouts */

#include "layout_flextile-deluxe.h"
