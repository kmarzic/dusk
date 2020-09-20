/* Bar functionality */
#include "bar_indicators.c"
#include "bar_tagicons.c"
#include "flags.c"

#if BAR_ALPHA_PATCH
#include "bar_alpha.c"
#endif
#if BAR_ALTERNATIVE_TAGS_PATCH
#include "bar_alternativetags.c"
#endif
#if BAR_ANYBAR_PATCH
#include "bar_anybar.c"
#endif
#if BAR_DWMBLOCKS_PATCH && BAR_STATUSCMD_PATCH
#include "bar_dwmblocks.c"
#endif
#if BAR_EWMHTAGS_PATCH
#include "bar_ewmhtags.c"
#endif
#if COMBO_PATCH
#include "combo.c"
#endif
#if BAR_HOLDBAR_PATCH
#include "bar_holdbar.c"
#endif
#if BAR_LTSYMBOL_PATCH
#include "bar_ltsymbol.c"
#endif
#if BAR_POWERLINE_STATUS_PATCH
#include "bar_powerline_status.c"
#endif
#if BAR_POWERLINE_TAGS_PATCH
#include "bar_powerline_tags.c"
#endif
#if BAR_STATUS_PATCH
#include "bar_status.c"
#endif
#if BAR_STATUS2D_PATCH
#include "bar_status2d.c"
#endif
#if BAR_STATUSBUTTON_PATCH
#include "bar_statusbutton.c"
#endif
#if BAR_STATUSCMD_PATCH
#include "bar_statuscmd.c"
#endif
#if BAR_STATUSCOLORS_PATCH
#include "bar_statuscolors.c"
#endif
#if BAR_TABGROUPS_PATCH
#include "bar_tabgroups.c"
#endif
#if BAR_TAGS_PATCH
#include "bar_tags.c"
#endif
#if BAR_TAGGRID_PATCH
#include "bar_taggrid.c"
#endif
#if BAR_WINTITLE_PATCH
#include "bar_wintitle.c"
#endif
#if BAR_FANCYBAR_PATCH
#include "bar_fancybar.c"
#endif
#if BAR_FLEXWINTITLE_PATCH
#include "bar_flexwintitle.c"
#if BAR_WINTITLE_FLOATING_PATCH
#include "bar_wintitle_floating.c"
#endif
#if BAR_WINTITLE_HIDDEN_PATCH
#include "bar_wintitle_hidden.c"
#endif
#endif // BAR_FLEXWINTITLE_PATCH
#if BAR_AWESOMEBAR_PATCH
#include "bar_awesomebar.c"
#endif
#if BAR_SYSTRAY_PATCH
#include "bar_systray.c"
#endif
#if BAR_VTCOLORS_PATCH
#include "bar_vtcolors.c"
#endif
#if BAR_WINTITLEACTIONS_PATCH
#include "bar_wintitleactions.c"
#endif

/* Other patches */
#if ATTACHABOVE_PATCH || ATTACHASIDE_PATCH || ATTACHBELOW_PATCH || ATTACHBOTTOM_PATCH
#include "attachx.c"
#endif

#include "cfacts.c"

#if CMDCUSTOMIZE_PATCH
#include "cmdcustomize.c"
#endif
#if COOL_AUTOSTART_PATCH
#include "cool_autostart.c"
#endif
#if CYCLELAYOUTS_PATCH
#include "cyclelayouts.c"
#endif
#if DECORATION_HINTS_PATCH
#include "decorationhints.c"
#endif

#include "dragcfact.c"
#include "dragmfact.c"

#include "fakefullscreenclient.c"

#if FLOATPOS_PATCH
#include "floatpos.c"
#endif
#if FOCUSADJACENTTAG_PATCH
#include "focusadjacenttag.c"
#endif
#if FOCUSMASTER_PATCH
#include "focusmaster.c"
#endif
#if FOCUSURGENT_PATCH
#include "focusurgent.c"
#endif
#if INPLACEROTATE_PATCH
#include "inplacerotate.c"
#endif
#if IPC_PATCH
#include "ipc.c"
#ifdef VERSION
#include "ipc/IPCClient.c"
#include "ipc/yajl_dumps.c"
#include "ipc/ipc.c"
#include "ipc/util.c"
#endif
#endif // IPC_PATCH
#if INSETS_PATCH
#include "insets.c"
#endif
#if KEYMODES_PATCH
#include "keymodes.c"
#endif
#if KILLUNSEL_PATCH
#include "killunsel.c"
#endif
#if MDPCONTROL_PATCH
#include "mdpcontrol.c"
#endif
#if MOVESTACK_PATCH
#include "movestack.c"
#endif
#if NO_MOD_BUTTONS_PATCH
#include "nomodbuttons.c"
#endif

#include "pertag.c"

#if PUSH_NO_MASTER_PATCH
#include "push_no_master.c"
#elif PUSH_PATCH
#include "push.c"
#endif
#if REORGANIZETAGS_PATCH
#include "reorganizetags.c"
#endif
#if RESTARTSIG_PATCH
#include "restartsig.c"
#endif
#if ROTATESTACK_PATCH
#include "rotatestack.c"
#endif
#if ROUNDED_CORNERS_PATCH
#include "roundedcorners.c"
#endif
#if SCRATCHPADS_PATCH
#include "scratchpad.c"
#endif
#if SCRATCHPAD_ALT_1_PATCH
#include "scratchpad_alt_1.c"
#endif
#if SELFRESTART_PATCH
#include "selfrestart.c"
#endif
#if SETBORDERPX_PATCH
#include "setborderpx.c"
#endif
#if SHIFTVIEW_PATCH
#include "shiftview.c"
#endif
#if SHIFTVIEW_CLIENTS_PATCH
#include "shiftviewclients.c"
#endif
#if SIZEHINTS_RULED_PATCH
#include "sizehints_ruled.c"
#endif
#if SORTSCREENS_PATCH
#ifdef XINERAMA
#include "sortscreens.c"
#endif // XINERAMA
#endif
#if STACKER_PATCH
#include "stacker.c"
#endif
#if STICKY_PATCH
#include "sticky.c"
#endif
#if SWALLOW_PATCH
#include "swallow.c"
#endif
#if SWAPFOCUS_PATCH
#include "swapfocus.c"
#endif
#if SWAPTAGS_PATCH
#include "swaptags.c"
#endif
#if SWITCHCOL_PATCH
#include "switchcol.c"
#endif
#if TAGALL_PATCH
#include "tagall.c"
#endif
#if TAGALLMON_PATCH
#include "tagallmon.c"
#endif
#if TAGOTHERMONITOR_PATCH
#include "tagothermonitor.c"
#endif
#if TAGSWAPMON_PATCH
#include "tagswapmon.c"
#endif

#include "togglefullscreen.c"

#if TRANSFER_PATCH
#include "transfer.c"
#endif
#if TRANSFER_ALL_PATCH
#include "transferall.c"
#endif
#if UNFLOATVISIBLE_PATCH
#include "unfloatvisible.c"
#endif

#include "vanitygaps.c"

#if WARP_PATCH
#include "warp.c"
#endif
#if WINVIEW_PATCH
#include "winview.c"
#endif
#if ZOOMSWAP_PATCH
#include "zoomswap.c"
#endif
#if XRDB_PATCH && !BAR_VTCOLORS_PATCH
#include "xrdb.c"
#endif

/* Layouts */
#include "layout_flextile-deluxe.c"
