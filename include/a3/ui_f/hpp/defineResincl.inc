#ifndef _RESINCL_HPP
#undef _RESINCL_HPP
#define _RESINCL_HPP

/*******************/
/*  Tactical menu  */
/*******************/

// Menu commands
  // main menu
#undef CMD_SEPARATOR
#define CMD_SEPARATOR     -1
#undef CMD_NOTHING
#define CMD_NOTHING       -2
#undef CMD_HIDE_MENU
#define CMD_HIDE_MENU     -3
#undef CMD_BACK
#define CMD_BACK          -4
// Custom menu command
#undef CMD_EXECUTE
#define CMD_EXECUTE       -5

#ifdef _CONFIG
enum
{
// note: this CMD should be if possible organized as is menu
// (items from the same menu together)
// this makes searching much easier

//main menu level
CMD_GETIN,
CMD_GETOUT,
CMD_ACTION,

// move submenu

// other commands
CMD_ADVANCE,
CMD_STAY_BACK,
CMD_FLANK_LEFT,
CMD_FLANK_RIGHT,
CMD_NEXT_WAYPOINT,
CMD_HIDE,
CMD_JOIN,
CMD_STOP,
CMD_EXPECT,
CMD_MOVE,

  // formations
CMD_FORM_COLUMN,
CMD_FORM_STAGCOL,
CMD_FORM_WEDGE,
CMD_FORM_ECHLEFT,
CMD_FORM_ECHRIGHT,
CMD_FORM_VEE,
CMD_FORM_LINE,
CMD_FORM_DIAMOND,
CMD_FORM_FILE,

// engage
CMD_ENGAGE,
CMD_LOOSE_FORM,
CMD_KEEP_FORM,

CMD_HOLD_FIRE,
CMD_OPEN_FIRE,
CMD_FIRE,

// status
CMD_WATCH,
CMD_WATCH_AROUND,
CMD_WATCH_AUTO,
CMD_WATCH_DIR,

// combat modes
CMD_STEALTH,
CMD_COMBAT,
CMD_AWARE,
CMD_SAFE,

// heal
CMD_HEALBLEEDING,
CMD_HEAL,
CMD_HEAL_SELF,
CMD_REPAIR_VEHICLE,
CMD_CARRY,
CMD_DROP_CARRIED,
CMD_PUTIN,
CMD_UNLOADFROM,

// swiming and diving
CMD_KEEP_DEPTH_RELATIVE_UP,
CMD_KEEP_DEPTH_RELATIVE_DOWN,
CMD_KEEP_DEPTH_LEADER,
CMD_KEEP_DEPTH_UNDERSURFACE,
CMD_KEEP_DEPTH_ABOVESURFACE,
CMD_KEEP_DEPTH_BOTTOM,

//suppress fire
CMD_SUPPRESS,

CMD_POS_UP,
CMD_POS_MIDDLE,
CMD_POS_DOWN,
CMD_POS_AUTO,
  // teams
CMD_TEAM_MAIN,
CMD_TEAM_RED,
CMD_TEAM_GREEN,
CMD_TEAM_BLUE,
CMD_TEAM_YELLOW,
CMD_ASSIGN_MAIN,
CMD_ASSIGN_RED,
CMD_ASSIGN_GREEN,
CMD_ASSIGN_BLUE,
CMD_ASSIGN_YELLOW,
CMD_TEAM_DISSOLVE,

// radio
CMD_RADIO_ALPHA,
CMD_RADIO_BRAVO,
CMD_RADIO_CHARLIE,
CMD_RADIO_DELTA,
CMD_RADIO_ECHO,
CMD_RADIO_FOXTROT,
CMD_RADIO_GOLF,
CMD_RADIO_HOTEL,
CMD_RADIO_INDIA,
CMD_RADIO_JULIET,

// reply commands

CMD_REPLY_DONE,
CMD_REPLY_FAIL,
CMD_REPLY_COPY,
CMD_REPLY_REPEAT,
CMD_REPLY_WHERE_ARE_YOU,
CMD_REPORT,
CMD_REPLY_ENGAGING,
CMD_REPLY_UNDER_FIRE,
CMD_REPLY_HIT,
CMD_REPLY_ONE_LESS,
CMD_REPLY_FIREREADY,
CMD_REPLY_FIRENOTREADY,
CMD_REPLY_KILLED,
CMD_REPLY_AMMO_LOW,
CMD_REPLY_FUEL_LOW,
CMD_REPLY_INJURED,
CMD_REPLY_OUT_OF_FAKs,

CMD_SUPPORT_MEDIC,
CMD_SUPPORT_AMBULANCE,
CMD_SUPPORT_REPAIR,
CMD_SUPPORT_REARM,
CMD_SUPPORT_REFUEL,
CMD_SUPPORT_DONE,

CMD_RADIO_CUSTOM,
CMD_RADIO_CUSTOM_1,
CMD_RADIO_CUSTOM_2,
CMD_RADIO_CUSTOM_3,
CMD_RADIO_CUSTOM_4,
CMD_RADIO_CUSTOM_5,
CMD_RADIO_CUSTOM_6,
CMD_RADIO_CUSTOM_7,
CMD_RADIO_CUSTOM_8,
CMD_RADIO_CUSTOM_9,
CMD_RADIO_CUSTOM_0,

CMD_UNIT_1,
CMD_UNIT_2,
CMD_UNIT_3,
CMD_UNIT_4,
CMD_UNIT_5,
CMD_UNIT_6,
CMD_UNIT_7,
CMD_UNIT_8,
CMD_UNIT_9,
CMD_UNIT_10,
CMD_UNIT_11,
CMD_UNIT_12,
CMD_UNITS_ALL,

CMD_MY_VEHICLE,

CMD_SELECT_MAIN,
CMD_SELECT_RED,
CMD_SELECT_GREEN,
CMD_SELECT_BLUE,
CMD_SELECT_YELLOW,

CMD_VEHICLE_1,
CMD_VEHICLE_2,
CMD_VEHICLE_3,
CMD_VEHICLE_4,
CMD_VEHICLE_5,
CMD_VEHICLE_6,
CMD_VEHICLE_7,
CMD_VEHICLE_8,
CMD_VEHICLE_9,
CMD_VEHICLE_10,
CMD_VEHICLE_11,
CMD_VEHICLE_12,

CMD_SINGLE_UNITS,

CMD_MP_CHANNEL_GLOBAL,
CMD_MP_CHANNEL_SIDE,
CMD_MP_CHANNEL_COMMAND,
CMD_MP_CHANNEL_GROUP,
CMD_MP_CHANNEL_VEHICLE,

CMD_CONVERSATION,

// Context sensitive commands
CMD_MOVE_AUTO,
CMD_STOP_AUTO,
CMD_WATCH_CTX,
CMD_GETIN_AUTO,
CMD_REARM_AUTO,
CMD_ATTACK_AUTO,
CMD_FIRE_AT_POSITION_AUTO,
CMD_SELECT_AUTO,
CMD_SELECT_AUTO_ADD,
CMD_DESELECT_AUTO,
CMD_JOIN_AUTO,
CMD_OPEN_FIRE_AUTO,
CMD_HOLD_FIRE_AUTO,
CMD_COMPLEX_COMMAND,
CMD_DISABLE_MINE,

CMD_SELECT_UNIT_FROM_BAR,
CMD_DESELECT_UNIT_FROM_BAR,
CMD_SELECT_VEHICLE_FROM_BAR,
CMD_DESELECT_VEHICLE_FROM_BAR,
CMD_SELECT_TEAM_FROM_BAR,
CMD_DESELECT_TEAM_FROM_BAR,

CMD_JOIN_ALL,

CMD_SWITCH_TO_LEADER,
CMD_SWITCH_TO_SELECTED,

CMD_NOTARGET,

CMD_HC_SELECT_AUTO,
CMD_HC_SELECT_AUTO_ADD,
CMD_HC_DESELECT_AUTO,
CMD_HC_SELECT_UNIT_FROM_BAR,
CMD_HC_DESELECT_UNIT_FROM_BAR,
CMD_HC_SELECT_TEAM_FROM_BAR,
CMD_HC_DESELECT_TEAM_FROM_BAR,
CMD_OPENPARACHUTE,
CMD_TAKE_BACKPACK,
CMD_ASSEMBLE_WEAPON,
CMD_DISASSEMBLE_WEAPON,
CMD_ENGAGE_AUTO,
CMD_FIRE_AUTO,
CMD_FIRE_AT_POSITION_AMMO // same as CMD_FIRE_AT_POSITION_AUTO but with custom magazine
};

/// In-game UI hiding animation type
enum HideType
{
  HTNone, // no animation
  HTFade, // fade in / fade out
  HTMoveLeft, // move from / to the left
  HTMoveRight // move from / to the right
};

enum
{
  SPTPlain,
  SPTPercents
};

#endif


/*******************/
/*  Controls       */
/*******************/

// Control types
#undef CT_STATIC
#define CT_STATIC           0
#undef CT_BUTTON
#define CT_BUTTON           1
#undef CT_EDIT
#define CT_EDIT             2
#undef CT_SLIDER
#define CT_SLIDER           3
#undef CT_COMBO
#define CT_COMBO            4
#undef CT_LISTBOX
#define CT_LISTBOX          5
#undef CT_TOOLBOX
#define CT_TOOLBOX          6
#undef CT_CHECKBOXES
#define CT_CHECKBOXES       7
#undef CT_PROGRESS
#define CT_PROGRESS         8
#undef CT_HTML
#define CT_HTML             9
#undef CT_STATIC_SKEW
#define CT_STATIC_SKEW      10
#undef CT_ACTIVETEXT
#define CT_ACTIVETEXT       11
#undef CT_TREE
#define CT_TREE             12
#undef CT_STRUCTURED_TEXT
#define CT_STRUCTURED_TEXT  13
#undef CT_CONTEXT_MENU
#define CT_CONTEXT_MENU     14
#undef CT_CONTROLS_GROUP
#define CT_CONTROLS_GROUP   15
#undef CT_SHORTCUTBUTTON
#define CT_SHORTCUTBUTTON   16
#undef CT_HITZONES
#define CT_HITZONES         17
#undef CT_CONTROLS_TABLE
#define CT_CONTROLS_TABLE   19
#undef CT_XKEYDESC
#define CT_XKEYDESC         40
#undef CT_XBUTTON
#define CT_XBUTTON          41
#undef CT_XLISTBOX
#define CT_XLISTBOX         42
#undef CT_XSLIDER
#define CT_XSLIDER          43
#undef CT_XCOMBO
#define CT_XCOMBO           44
#undef CT_ANIMATED_TEXTURE
#define CT_ANIMATED_TEXTURE 45
#undef CT_OBJECT
#define CT_OBJECT           80
#undef CT_OBJECT_ZOOM
#define CT_OBJECT_ZOOM      81
#undef CT_OBJECT_CONTAINER
#define CT_OBJECT_CONTAINER 82
#undef CT_OBJECT_CONT_ANIM
#define CT_OBJECT_CONT_ANIM 83
#undef CT_LINEBREAK
#define CT_LINEBREAK        98
#undef CT_USER
#define CT_USER             99
#undef CT_MAP
#define CT_MAP              100
#undef CT_MAP_MAIN
#define CT_MAP_MAIN         101
#undef CT_LISTNBOX
#define CT_LISTNBOX         102
#undef CT_ITEMSLOT
#define CT_ITEMSLOT         103
#undef CT_CHECKBOX
#define CT_CHECKBOX         77
#undef CT_VEHICLE_DIRECTION
#define CT_VEHICLE_DIRECTION 105

// Static styles
#undef ST_POS
#define ST_POS            0x0F
#undef ST_HPOS
#define ST_HPOS           0x03
#undef ST_VPOS
#define ST_VPOS           0x0C
#undef ST_LEFT
#define ST_LEFT           0x00
#undef ST_RIGHT
#define ST_RIGHT          0x01
#undef ST_CENTER
#define ST_CENTER         0x02
#undef ST_DOWN
#define ST_DOWN           0x04
#undef ST_UP
#define ST_UP             0x08
#undef ST_VCENTER
#define ST_VCENTER        0x0C

#undef ST_TYPE
#define ST_TYPE           0xF0
#undef ST_SINGLE
#define ST_SINGLE         0x00
#undef ST_MULTI
#define ST_MULTI          0x10
#undef ST_TITLE_BAR
#define ST_TITLE_BAR      0x20
#undef ST_PICTURE
#define ST_PICTURE        0x30
#undef ST_FRAME
#define ST_FRAME          0x40
#undef ST_BACKGROUND
#define ST_BACKGROUND     0x50
#undef ST_GROUP_BOX
#define ST_GROUP_BOX      0x60
#undef ST_GROUP_BOX2
#define ST_GROUP_BOX2     0x70
#undef ST_HUD_BACKGROUND
#define ST_HUD_BACKGROUND 0x80
#undef ST_TILE_PICTURE
#define ST_TILE_PICTURE   0x90
#undef ST_WITH_RECT
#define ST_WITH_RECT      0xA0
#undef ST_LINE
#define ST_LINE           0xB0
#undef ST_UPPERCASE
#define ST_UPPERCASE      0xC0
#undef ST_LOWERCASE
#define ST_LOWERCASE      0xD0

#undef ST_SHADOW
#define ST_SHADOW         0x100
#undef ST_NO_RECT
#define ST_NO_RECT        0x200
#undef ST_KEEP_ASPECT_RATIO
#define ST_KEEP_ASPECT_RATIO  0x800

#undef ST_TITLE
#define ST_TITLE          ST_TITLE_BAR + ST_CENTER

// Slider styles
#undef SL_DIR
#define SL_DIR            0x400
#undef SL_VERT
#define SL_VERT           0
#undef SL_HORZ
#define SL_HORZ           0x400

#undef SL_TEXTURES
#define SL_TEXTURES       0x10

// progress bar
#undef ST_VERTICAL
#define ST_VERTICAL       0x01
#undef ST_HORIZONTAL
#define ST_HORIZONTAL     0

// Listbox styles
#undef LB_TEXTURES
#define LB_TEXTURES       0x10
#undef LB_MULTI
#define LB_MULTI          0x20

// Tree styles
#undef TR_SHOWROOT
#define TR_SHOWROOT       1
#undef TR_AUTOCOLLAPSE
#define TR_AUTOCOLLAPSE   2

// MessageBox styles
#undef MB_BUTTON_OK
#define MB_BUTTON_OK      1
#undef MB_BUTTON_CANCEL
#define MB_BUTTON_CANCEL  2
#undef MB_BUTTON_USER
#define MB_BUTTON_USER    4
#undef MB_ERROR_DIALOG
#define MB_ERROR_DIALOG   8

// Xbox buttons
#undef KEY_XINPUT
#define KEY_XINPUT                0x00050000

#undef KEY_XBOX_A
#define KEY_XBOX_A                KEY_XINPUT + 0
#undef KEY_XBOX_B
#define KEY_XBOX_B                KEY_XINPUT + 1
#undef KEY_XBOX_X
#define KEY_XBOX_X                KEY_XINPUT + 2
#undef KEY_XBOX_Y
#define KEY_XBOX_Y                KEY_XINPUT + 3
#undef KEY_XBOX_Up
#define KEY_XBOX_Up               KEY_XINPUT + 4
#undef KEY_XBOX_Down
#define KEY_XBOX_Down             KEY_XINPUT + 5
#undef KEY_XBOX_Left
#define KEY_XBOX_Left             KEY_XINPUT + 6
#undef KEY_XBOX_Right
#define KEY_XBOX_Right            KEY_XINPUT + 7
#undef KEY_XBOX_Start
#define KEY_XBOX_Start            KEY_XINPUT + 8
#undef KEY_XBOX_Back
#define KEY_XBOX_Back             KEY_XINPUT + 9
#undef KEY_XBOX_LeftBumper
#define KEY_XBOX_LeftBumper       KEY_XINPUT + 10
#undef KEY_XBOX_RightBumper
#define KEY_XBOX_RightBumper      KEY_XINPUT + 11
#undef KEY_XBOX_LeftTrigger
#define KEY_XBOX_LeftTrigger      KEY_XINPUT + 12
#undef KEY_XBOX_RightTrigger
#define KEY_XBOX_RightTrigger     KEY_XINPUT + 13
#undef KEY_XBOX_LeftThumb
#define KEY_XBOX_LeftThumb        KEY_XINPUT + 14
#undef KEY_XBOX_RightThumb
#define KEY_XBOX_RightThumb       KEY_XINPUT + 15
#undef KEY_XBOX_LeftThumbXRight
#define KEY_XBOX_LeftThumbXRight  KEY_XINPUT + 16
#undef KEY_XBOX_LeftThumbYUp
#define KEY_XBOX_LeftThumbYUp     KEY_XINPUT + 17
#undef KEY_XBOX_RightThumbXRight
#define KEY_XBOX_RightThumbXRight KEY_XINPUT + 18
#undef KEY_XBOX_RightThumbYUp
#define KEY_XBOX_RightThumbYUp    KEY_XINPUT + 19
#undef KEY_XBOX_LeftThumbXLeft
#define KEY_XBOX_LeftThumbXLeft   KEY_XINPUT + 20
#undef KEY_XBOX_LeftThumbYDown
#define KEY_XBOX_LeftThumbYDown   KEY_XINPUT + 21
#undef KEY_XBOX_RightThumbXLeft
#define KEY_XBOX_RightThumbXLeft  KEY_XINPUT + 22
#undef KEY_XBOX_RightThumbYDown
#define KEY_XBOX_RightThumbYDown  KEY_XINPUT + 23

// Predefined controls
#undef IDC_OK
#define IDC_OK            1
#undef IDC_CANCEL
#define IDC_CANCEL        2
#undef IDC_AUTOCANCEL
#define IDC_AUTOCANCEL    3
#undef IDC_ABORT
#define IDC_ABORT         4
#undef IDC_RESTART
#define IDC_RESTART       5
#undef IDC_USER_BUTTON
#define IDC_USER_BUTTON   6
#undef IDC_EXIT_TO_MAIN
#define IDC_EXIT_TO_MAIN  7

// my own control window for tests
#undef IDC_MY_FIRST_LISTBOX
#define IDC_MY_FIRST_LISTBOX    110
#undef IDC_MY_FIRST_BUTTON
#define IDC_MY_FIRST_BUTTON     111
#undef IDC_MY_FIRST_SLIDER
#define IDC_MY_FIRST_SLIDER     112

#undef IDC_MAP
#define IDC_MAP             51
#undef IDC_WEATHER
#define IDC_WEATHER         52
#undef IDC_POSITION
#define IDC_POSITION        53
#undef IDC_TIME
#define IDC_TIME            54
#undef IDC_DATE
#define IDC_DATE            55
#undef IDC_BRIEFING
#define IDC_BRIEFING        56
#undef IDC_MAP_NOTES
#define IDC_MAP_NOTES       57
#undef IDC_MAP_PLAN
#define IDC_MAP_PLAN        58
#undef IDC_MAP_TEAM_SWITCH
#define IDC_MAP_TEAM_SWITCH 59
#undef IDC_MAP_GROUP
#define IDC_MAP_GROUP       60
#undef IDC_MAP_BRIEFING
//#define IDC_MAP_BRIEFING    61
#undef IDC_MAP_DEBRIEFING
//#define IDC_MAP_DEBRIEFING  62
#undef IDC_RADIO_ALPHA
#define IDC_RADIO_ALPHA     63
#undef IDC_RADIO_BRAVO
#define IDC_RADIO_BRAVO     64
#undef IDC_RADIO_CHARLIE
#define IDC_RADIO_CHARLIE   65
#undef IDC_RADIO_DELTA
#define IDC_RADIO_DELTA     66
#undef IDC_RADIO_ECHO
#define IDC_RADIO_ECHO      67
#undef IDC_RADIO_FOXTROT
#define IDC_RADIO_FOXTROT   68
#undef IDC_RADIO_GOLF
#define IDC_RADIO_GOLF      69
#undef IDC_RADIO_HOTEL
#define IDC_RADIO_HOTEL     70
#undef IDC_RADIO_INDIA
#define IDC_RADIO_INDIA     71
#undef IDC_RADIO_JULIET
#define IDC_RADIO_JULIET    72
#undef IDC_MAP_NAME
#define IDC_MAP_NAME        73
#undef IDC_WARRANT
#define IDC_WARRANT         74
#undef IDC_GPS
#define IDC_GPS             75

#undef IDC_NOTEPAD_PICTURE
#define IDC_NOTEPAD_PICTURE 76

#undef IDC_GPS_ALT
#define IDC_GPS_ALT         77
#undef IDC_GPS_HEADING
#define IDC_GPS_HEADING     78

// - diary topics (used in multiple displays - diary, map, briefing, debriefing)
#undef IDC_DIARY_TOPIC_MAP
#define IDC_DIARY_TOPIC_MAP           80
#undef IDC_DIARY_TOPIC_1
#define IDC_DIARY_TOPIC_1             81
#undef IDC_DIARY_TOPIC_2
#define IDC_DIARY_TOPIC_2             82
#undef IDC_DIARY_TOPIC_3
#define IDC_DIARY_TOPIC_3             83
#undef IDC_DIARY_TOPIC_4
#define IDC_DIARY_TOPIC_4             84
#undef IDC_DIARY_TOPIC_5
#define IDC_DIARY_TOPIC_5             85
#undef IDC_DIARY_TOPIC_6
#define IDC_DIARY_TOPIC_6             86
#undef IDC_DIARY_TOPIC_7
#define IDC_DIARY_TOPIC_7             87
#undef IDC_DIARY_TOPIC_8
#define IDC_DIARY_TOPIC_8             88
#undef IDC_DIARY_TOPIC_9
#define IDC_DIARY_TOPIC_9             89

#undef IDC_HSLIDER
#define IDC_HSLIDER         98
#undef IDC_VSLIDER
#define IDC_VSLIDER         99

#undef IDC_ARTILLERY_MAP
#define IDC_ARTILLERY_MAP             500
#undef IDC_ARTILLERY_MAP_FIRE
#define IDC_ARTILLERY_MAP_FIRE        501

#undef IDC_ARTILLERY_MAP_NAME
#define IDC_ARTILLERY_MAP_NAME        502
#undef IDC_ARTILLERY_MAP_ID
#define IDC_ARTILLERY_MAP_ID          503
#undef IDC_ARTILLERY_MAP_GRID
#define IDC_ARTILLERY_MAP_GRID        504
#undef IDC_ARTILLERY_MAP_DIST
#define IDC_ARTILLERY_MAP_DIST        505
#undef IDC_ARTILLERY_MAP_MIN
#define IDC_ARTILLERY_MAP_MIN         506
#undef IDC_ARTILLERY_MAP_MAX
#define IDC_ARTILLERY_MAP_MAX         507
#undef IDC_ARTILLERY_MAP_DIR
#define IDC_ARTILLERY_MAP_DIR         508
#undef IDC_ARTILLERY_MAP_ALT
#define IDC_ARTILLERY_MAP_ALT         509
#undef IDC_ARTILLERY_MAP_MODE
#define IDC_ARTILLERY_MAP_MODE        510
#undef IDC_ARTILLERY_MAP_AMMO
#define IDC_ARTILLERY_MAP_AMMO        511
#undef IDC_ARTILLERY_MAP_SHELLS
#define IDC_ARTILLERY_MAP_SHELLS      512
#undef IDC_ARTILLERY_MAP_SPREAD
#define IDC_ARTILLERY_MAP_SPREAD      513
#undef IDC_ARTILLERY_MAP_ETA
#define IDC_ARTILLERY_MAP_ETA         514
#undef IDC_ARTILLERY_MAP_AMMOCOUNT
#define IDC_ARTILLERY_MAP_AMMOCOUNT   515
#undef IDC_ARTILLERY_MAP_WARNING
#define IDC_ARTILLERY_MAP_WARNING     516
#undef IDC_ARTILLERY_MAP_AIMABOVE
#define IDC_ARTILLERY_MAP_AIMABOVE    517

#undef IDC_DIARY_TOPIC_LIST
#define IDC_DIARY_TOPIC_LIST          1001
#undef IDC_DIARY_TOPIC_LISTINDEX
#define IDC_DIARY_TOPIC_LISTINDEX     1002
#undef IDC_DIARY_TOPIC_HTML
#define IDC_DIARY_TOPIC_HTML          1003
#undef IDC_DIARY_TOPIC_ADD_RECORD
#define IDC_DIARY_TOPIC_ADD_RECORD    1004
#undef IDC_DIARY_TOPIC_HTML_GROUP
#define IDC_DIARY_TOPIC_HTML_GROUP    1013

#undef IDC_DIARY_PLAYER_NAME
#define IDC_DIARY_PLAYER_NAME         111
#undef IDC_DIARY_MISSION_NAME
#define IDC_DIARY_MISSION_NAME        112
#undef IDC_DIARY_CURRENT_TASK
#define IDC_DIARY_CURRENT_TASK        113
#undef IDC_DIARY_PLAYER_RANK
#define IDC_DIARY_PLAYER_RANK         116
//VON/chat muting in Diary
#undef IDC_DIARY_PLAYERS_BUTTON
#define IDC_DIARY_PLAYERS_BUTTON      117
#undef IDC_DIARY_PLAYERS_SORT
#define IDC_DIARY_PLAYERS_SORT        118
#undef IDC_DIARY_MUTE_ALL
#define IDC_DIARY_MUTE_ALL            119

#undef IDC_DIARY_TOPIC_BACKGROUND
#define IDC_DIARY_TOPIC_BACKGROUND    1021
#undef IDC_DIARY_SUBTOPIC_BACKGROUND
#define IDC_DIARY_SUBTOPIC_BACKGROUND 1022
#undef IDC_DIARY_CONTENT_BACKGROUND
#define IDC_DIARY_CONTENT_BACKGROUND  1023

//IDCs for marker color and icon.
//Are directly connected to RscMapControl, namely its idcMarkerColor and idcMarkerIcon parameters.
//Engine searches for the parameters in any display where RscMapControl is used, that's why they got more uncommon IDCs.
#undef IDC_DIARY_MARKER_COLOR
#define IDC_DIARY_MARKER_COLOR        1090
#undef IDC_DIARY_MARKER_ICON
#define IDC_DIARY_MARKER_ICON         1091


// Instances of display
#undef IDD_MAIN
#define IDD_MAIN              0
#undef IDD_GAME
#define IDD_GAME              1
#undef IDD_SINGLE_MISSION
#define IDD_SINGLE_MISSION    2
#undef IDD_OPTIONS
#define IDD_OPTIONS           3
#undef IDD_CONFIGURE
#define IDD_CONFIGURE         4
#undef IDD_OPTIONS_VIDEO
#define IDD_OPTIONS_VIDEO     5
#undef IDD_OPTIONS_AUDIO
#define IDD_OPTIONS_AUDIO     6
#undef IDD_MULTIPLAYER
#define IDD_MULTIPLAYER       8
#undef IDD_LOAD_AAR
#define IDD_LOAD_AAR          9
#undef IDD_MAIN_MAP
#define IDD_MAIN_MAP          12
#undef IDD_SAVE
#define IDD_SAVE              13
#undef IDD_END
#define IDD_END               14
#undef IDD_SERVER
#define IDD_SERVER            17
#undef IDD_CLIENT
#define IDD_CLIENT            18
#undef IDD_IP_ADDRESS
#define IDD_IP_ADDRESS        19
#undef IDD_SERVER_SETUP
#define IDD_SERVER_SETUP      20
#undef IDD_CLIENT_SETUP
#define IDD_CLIENT_SETUP      21
#undef IDD_CLIENT_WAIT
#define IDD_CLIENT_WAIT       22
#undef IDD_CHAT
#define IDD_CHAT              24
#undef IDD_CUSTOM_ARCADE
#define IDD_CUSTOM_ARCADE     25
#undef IDD_ARCADE_MAP
#define IDD_ARCADE_MAP        26
#undef IDD_ARCADE_UNIT
#define IDD_ARCADE_UNIT       27
#undef IDD_ARCADE_WAYPOINT
#define IDD_ARCADE_WAYPOINT   28
#undef IDD_TEMPLATE_SAVE
#define IDD_TEMPLATE_SAVE     29
#undef IDD_TEMPLATE_LOAD
#define IDD_TEMPLATE_LOAD     30
#undef IDD_LOGIN
#define IDD_LOGIN             31
#undef IDD_INTEL
#define IDD_INTEL             32
#undef IDD_CAMPAIGN
#define IDD_CAMPAIGN          33
#undef IDD_CREDITS
#define IDD_CREDITS           34
#undef IDD_INTEL_GETREADY
#define IDD_INTEL_GETREADY    37
#undef IDD_ARCADE_GROUP
#define IDD_ARCADE_GROUP      40
#undef IDD_ARCADE_SENSOR
#define IDD_ARCADE_SENSOR     41
#undef IDD_NEW_USER
#define IDD_NEW_USER          42
#undef IDD_CAMPAIGN_LOAD
#define IDD_CAMPAIGN_LOAD     43
#undef IDD_ARCADE_EFFECTS
#define IDD_ARCADE_EFFECTS    44
#undef IDD_ARCADE_MARKER
#define IDD_ARCADE_MARKER     45
#undef IDD_MISSION
#define IDD_MISSION           46
#undef IDD_INTRO
#define IDD_INTRO             47
#undef IDD_OUTRO
#define IDD_OUTRO             48
#undef IDD_INTERRUPT
#define IDD_INTERRUPT         49
#undef IDD_DEBRIEFING
#define IDD_DEBRIEFING        50
#undef IDD_SELECT_ISLAND
#define IDD_SELECT_ISLAND     51
#undef IDD_SERVER_GET_READY
#define IDD_SERVER_GET_READY  52
#undef IDD_CLIENT_GET_READY
#define IDD_CLIENT_GET_READY  53
#undef IDD_INSERT_MARKER
#define IDD_INSERT_MARKER     54
#undef IDD_VOICE_CHAT
#define IDD_VOICE_CHAT        55
#undef IDD_DEBUG
#define IDD_DEBUG             56
#undef IDD_HINTC
#define IDD_HINTC             57
#undef IDD_MISSION_END
#define IDD_MISSION_END       58
#undef IDD_SERVER_SIDE
#define IDD_SERVER_SIDE       59
#undef IDD_CLIENT_SIDE
#define IDD_CLIENT_SIDE       60
#undef IDD_MULTIPLAYER_ROLE
#define IDD_MULTIPLAYER_ROLE  61
#undef IDD_AWARD
#define IDD_AWARD             62
#undef IDD_CHANNEL
#define IDD_CHANNEL           63
#undef IDD_PASSWORD
#define IDD_PASSWORD          64
#undef IDD_MP_PLAYERS
#define IDD_MP_PLAYERS        65
#undef IDD_REVERT
#define IDD_REVERT            66
#undef IDD_PORT
#define IDD_PORT              69
#undef IDD_MP_SETUP
#define IDD_MP_SETUP          70
#undef IDD_FILTER
#define IDD_FILTER            71
#undef IDD_HINTC_EX
#define IDD_HINTC_EX          72
#undef IDD_SELECT_PROFILE
#define IDD_SELECT_PROFILE    73
#undef IDD_CAMPAIGN_SELECT
#define IDD_CAMPAIGN_SELECT   74
#undef IDD_PROFILE
#define IDD_PROFILE           75
#undef IDD_PROFILE_NAME
#define IDD_PROFILE_NAME        76
#undef IDD_PROFILE_FACE
#define IDD_PROFILE_FACE        77
#undef IDD_PROFILE_VOICE
#define IDD_PROFILE_VOICE       78
#undef IDD_PROFILE_CONTROLLER
#define IDD_PROFILE_CONTROLLER  79
#undef IDD_PROFILE_AUDIO
#define IDD_PROFILE_AUDIO       80
#undef IDD_PROFILE_VIDEO
#define IDD_PROFILE_VIDEO       81
#undef IDD_PROFILE_LIVE
#define IDD_PROFILE_LIVE        82
#undef IDD_MP_TYPE
#define IDD_MP_TYPE             83
#undef IDD_MP_PASSCODE
#define IDD_MP_PASSCODE         84
#undef IDD_OPTIMATCH_FILTER
#define IDD_OPTIMATCH_FILTER    86
#undef IDD_QUICKMATCH
#define IDD_QUICKMATCH          87
#undef IDD_FRIENDS
#define IDD_FRIENDS             88
#undef IDD_FRIENDS_OPTIONS
#define IDD_FRIENDS_OPTIONS     89
#undef IDD_XWIZARD_TEMPLATE
#define IDD_XWIZARD_TEMPLATE    90
#undef IDD_XWIZARD_INTEL
#define IDD_XWIZARD_INTEL       91
#undef IDD_XWIZARD_NAME
#define IDD_XWIZARD_NAME        92
#undef IDD_XWIZARD_ISLAND
#define IDD_XWIZARD_ISLAND      93
#undef IDD_XWIZARD_WEATHER
#define IDD_XWIZARD_WEATHER     94
#undef IDD_XWIZARD_TIME
#define IDD_XWIZARD_TIME        95
#undef IDD_XWIZARD_UNIT
#define IDD_XWIZARD_UNIT        96
#undef IDD_XWIZARD_MAP
#define IDD_XWIZARD_MAP         97
#undef IDD_XWIZARD_UNIT_SELECT
#define IDD_XWIZARD_UNIT_SELECT 98
#undef IDD_XWIZARD_UNIT_SELECT_CUSTOM
#define IDD_XWIZARD_UNIT_SELECT_CUSTOM  99
#undef IDD_XWIZARD_WAYPOINT
#define IDD_XWIZARD_WAYPOINT            100
#undef IDD_DOWNLOAD_CONTENT
#define IDD_DOWNLOAD_CONTENT            101
#undef IDD_DOWNLOAD_CONTENT_DETAILS
#define IDD_DOWNLOAD_CONTENT_DETAILS    102
#undef IDD_XPLAYERS
#define IDD_XPLAYERS                    103
#undef IDD_XPLAYERS_ACTIONS
#define IDD_XPLAYERS_ACTIONS            104
#undef IDD_XPLAYERS_FEEDBACK
#define IDD_XPLAYERS_FEEDBACK           105
#undef IDD_GEAR
#define IDD_GEAR                        106
#undef IDD_EQUIP
#define IDD_EQUIP                       555
#undef IDD_DOWNLOAD_CONTENT_INSTALL
#define IDD_DOWNLOAD_CONTENT_INSTALL    108
#undef IDD_SERVER_SETTINGS
#define IDD_SERVER_SETTINGS             109
#undef IDD_SERVER_ADVANCED
#define IDD_SERVER_ADVANCED             110
#undef IDD_SERVER_SELECT_PLAYER
#define IDD_SERVER_SELECT_PLAYER        112
#undef IDD_DEDICATED_SERVER
#define IDD_DEDICATED_SERVER            114
#undef IDD_FRIEND_MISSIONS
#define IDD_FRIEND_MISSIONS             115
#undef IDD_LIVE_STATS
#define IDD_LIVE_STATS                  116
#undef IDD_LIVE_STATS_BOARD
#define IDD_LIVE_STATS_BOARD            117
#undef IDD_NETWORK_CONDITIONS
#define IDD_NETWORK_CONDITIONS          118
#undef IDD_SEND_VOICE_MAIL
#define IDD_SEND_VOICE_MAIL             119
#undef IDD_RECEIVE_VOICE_MAIL
#define IDD_RECEIVE_VOICE_MAIL          120
#undef IDD_SELECT_ISLAND_NEW
#define IDD_SELECT_ISLAND_NEW           351

#undef IDD_EDIT_OBJECT
#define IDD_EDIT_OBJECT                 121
#undef IDD_MISSION_LOAD
#define IDD_MISSION_LOAD                122
#undef IDD_MISSION_SAVE
#define IDD_MISSION_SAVE                123

#undef IDD_EDIT_DIARY_RECORD
#define IDD_EDIT_DIARY_RECORD           125

#undef IDD_SERVER_VOTED
#define IDD_SERVER_VOTED                126
#undef IDD_DEDICATED_SERVER_SETTINGS
#define IDD_DEDICATED_SERVER_SETTINGS   127

#undef IDD_MISSION_EDITOR
#define IDD_MISSION_EDITOR              128

#undef IDD_DIARY
#define IDD_DIARY                       129

#undef IDD_TEAM_SWITCH
#define IDD_TEAM_SWITCH                 130

#undef IDD_CONFIGURE_ACTION
#define IDD_CONFIGURE_ACTION            131

#undef IDD_HOST_SETTINGS
#define IDD_HOST_SETTINGS               132

#undef IDD_MINIMAP
#define IDD_MINIMAP                     133
#undef IDD_OVERLAY_CREATE
#define IDD_OVERLAY_CREATE              134
#undef IDD_OVERLAY_LOAD
#define IDD_OVERLAY_LOAD                135

#undef IDD_ESRB
#define IDD_ESRB                        136

#undef IDD_MISSION_EDITOR_REALTIME
#define IDD_MISSION_EDITOR_REALTIME     137

//TODO: Has to be checked by Pete!
#undef IDD_EDIT_BRIEFING
#define IDD_EDIT_BRIEFING               138
#undef IDD_LIVE
#define IDD_LIVE                        139

#undef IDD_LASE
#define IDD_LASE                        141

#undef IDD_LAYER_LOAD
#define IDD_LAYER_LOAD                  142

#undef IDD_CONTROLS
#define IDD_CONTROLS                    143
#undef IDD_INTERRUPT_REVERT
#define IDD_INTERRUPT_REVERT            144

#undef IDD_PERFORMANCE
#define IDD_PERFORMANCE                 145
#undef IDD_XWIZARD_PARAMS
#define IDD_XWIZARD_PARAMS              146
#undef IDD_XWIZARD_PARAMETER
#define IDD_XWIZARD_PARAMETER           147

#undef IDD_CONFIGURE_JOYSTICKS
#define IDD_CONFIGURE_JOYSTICKS         148
#undef IDD_CAPTURE
#define IDD_CAPTURE                     149
#undef IDD_CUSTOMIZE_CONTROLLER
#define IDD_CUSTOMIZE_CONTROLLER        150
#undef IDD_GAMEOPTIONS
#define IDD_GAMEOPTIONS                 151

//new editor dialog
#undef IDD_ARCADE_MODULES
#define IDD_ARCADE_MODULES              153
#undef IDD_SELECT_SAVE
#define IDD_SELECT_SAVE                 154
#undef IDD_DSINTERFACE
#define IDD_DSINTERFACE                 155
#undef IDD_ADDON_ACTIONS
#define IDD_ADDON_ACTIONS               156

// PhysX debug window
#undef IDD_PHYSX_DEBUG
#define IDD_PHYSX_DEBUG                 157

// mod launcher dialog
#undef IDD_MOD_LAUNCHER
#define IDD_MOD_LAUNCHER                157
#undef IDD_NEW_MOD
#define IDD_NEW_MOD                     158

// joystick schemes mapping dialog
#undef IDD_JOYSTICK_SCHEMES
#define IDD_JOYSTICK_SCHEMES            159

//AV Terminal dialog - MUF
#undef IDD_AV_TERMINAL
#define IDD_AV_TERMINAL                 160
//Field Manual
#undef IDD_FIELD_MANUAL
#define IDD_FIELD_MANUAL                162
//Dialogue for controls scheme selection
#undef IDD_CONTROLS_SCHEME
#define IDD_CONTROLS_SCHEME             163
//Dialogue for choosing layout of mission editor. NOTE: 161-163 are already in use, see A3\Ui_f\hpp\defineResincl.inc
#undef IDD_EDITOR_LAYOUT
#define IDD_EDITOR_LAYOUT               164
//Dialogue for publishing mission on Steam.
#undef IDD_PUBLISH_MISSION
#define IDD_PUBLISH_MISSION             165
//Dialogue for selecting tags for mission on Steam.
#undef IDD_PUBLISH_MISSION_TAGS
#define IDD_PUBLISH_MISSION_TAGS 166
//Dialogue for selecting file from the hard drive
#undef IDD_FILE_SELECT_DIALOG
#define IDD_FILE_SELECT_DIALOG           167
//Idd reserved for debriefing            168
#undef IDD_DLC_VEHICLEMSGBOX
#define IDD_DLC_VEHICLEMSGBOX            169
#undef IDD_DLC_PURCHASENOTIFICATION
#define IDD_DLC_PURCHASENOTIFICATION     170
#undef IDD_BOOTCAMPMSGBOX
#define IDD_BOOTCAMPMSGBOX               171
#undef IDD_COMMUNITY_GUIDE
#define IDD_COMMUNITY_GUIDE              172
#undef IDD_SLING_LOAD_ASSISTANT
#define IDD_SLING_LOAD_ASSISTANT         173
#undef IDD_DLC_CONTENTBROWSER
#define IDD_DLC_CONTENTBROWSER           174
#undef IDD_MP_SCORE_TABLE
#define IDD_MP_SCORE_TABLE               175
#undef IDD_CAMPAIGN_MP
#define IDD_CAMPAIGN_MP                  176
#undef IDD_MP_QUICK_PLAY
#define IDD_MP_QUICK_PLAY                177
#undef IDD_MP_SERVER_SEARCH
#define IDD_MP_SERVER_SEARCH             178
#undef IDD_MP_SERVER_FOUND
#define IDD_MP_SERVER_FOUND              179
#undef IDD_KEYMAPMSGBOX
#define IDD_KEYMAPMSGBOX                 180

// MessageBoxes
#undef IDD_MSG_DELETEPLAYER
#define IDD_MSG_DELETEPLAYER      200
#undef IDD_MSG_DELETEGAME
#define IDD_MSG_DELETEGAME        201
#undef IDD_MSG_CLEARTEMPLATE
#define IDD_MSG_CLEARTEMPLATE     202
#undef IDD_MSG_EXITTEMPLATE
#define IDD_MSG_EXITTEMPLATE      203
#undef IDD_MSG_LAUNCHGAME
#define IDD_MSG_LAUNCHGAME        204 // ADDED IN PATCH 1.04

#undef IDD_MSG_NEWACCOUNT
#define IDD_MSG_NEWACCOUNT        205

#undef IDD_MSG_FRIENDS_REMOVE
#define IDD_MSG_FRIENDS_REMOVE    206
#undef IDD_MSG_FRIENDS_BLOCK
#define IDD_MSG_FRIENDS_BLOCK     207
#undef IDD_MSG_FRIENDS_INVITE
#define IDD_MSG_FRIENDS_INVITE    208

#undef IDD_MSG_DELETEMISSION
#define IDD_MSG_DELETEMISSION     209

#undef IDD_MSG_XONLINE_CONNECTION_FAILED
#define IDD_MSG_XONLINE_CONNECTION_FAILED 210
#undef IDD_MSG_XONLINE_UPDATE_REQUIRED
#define IDD_MSG_XONLINE_UPDATE_REQUIRED   211
#undef IDD_MSG_XONLINE_SERVER_BUSY
#define IDD_MSG_XONLINE_SERVER_BUSY       212
#undef IDD_MSG_XONLINE_REQUIRED_MSG
#define IDD_MSG_XONLINE_REQUIRED_MSG      213
#undef IDD_MSG_XONLINE_RECOMMENDED_MSG
#define IDD_MSG_XONLINE_RECOMMENDED_MSG   214
#undef IDD_MSG_XONLINE_INVALID_USER
#define IDD_MSG_XONLINE_INVALID_USER      215
#undef IDD_MSG_XONLINE_WRONG_PASSCODE
#define IDD_MSG_XONLINE_WRONG_PASSCODE    216

#undef IDD_MSG_CANCEL_SUBSCRIPTION
#define IDD_MSG_CANCEL_SUBSCRIPTION       217
#undef IDD_MSG_SUBSCRIBE
#define IDD_MSG_SUBSCRIBE                 218
#undef IDD_MSG_PURCHASE
#define IDD_MSG_PURCHASE                  219
#undef IDD_MSG_INSTALL_ABORT
#define IDD_MSG_INSTALL_ABORT             220
#undef IDD_MSG_INSTALL_RESULT
#define IDD_MSG_INSTALL_RESULT            221

#undef IDD_MSG_DECLINE_INVITATION
#define IDD_MSG_DECLINE_INVITATION        222
#undef IDD_MSG_REVOKE_INVITATION
#define IDD_MSG_REVOKE_INVITATION         223
#undef IDD_MSG_BLOCK_REQUEST
#define IDD_MSG_BLOCK_REQUEST             224
#undef IDD_MSG_DECLINE_REQUEST
#define IDD_MSG_DECLINE_REQUEST           225
#undef IDD_MSG_CANCEL_REQUEST
#define IDD_MSG_CANCEL_REQUEST            226
#undef IDD_MSG_KICK_OFF
#define IDD_MSG_KICK_OFF                  227
#undef IDD_MSG_TERMINATE_SESSION
#define IDD_MSG_TERMINATE_SESSION         228
#undef IDD_MSG_NETWORK_CONDITIONS
#define IDD_MSG_NETWORK_CONDITIONS        229

#undef IDD_MSG_STATS_NOT_UPLOADED
#define IDD_MSG_STATS_NOT_UPLOADED        230

#undef IDD_MSG_LOAD_FAILED
#define IDD_MSG_LOAD_FAILED               231
#undef IDD_MSG_DELETESAVE
#define IDD_MSG_DELETESAVE                232

#undef IDD_MSG_DISK_FULL
#define IDD_MSG_DISK_FULL                 233

#undef IDD_MSG_RESTART_MISSION
#define IDD_MSG_RESTART_MISSION           234
#undef IDD_MSG_SAVE_MISSION
#define IDD_MSG_SAVE_MISSION              235
#undef IDD_MSG_SIGN_OUT
#define IDD_MSG_SIGN_OUT                  236
#undef IDD_MSG_LOAD_MISSION
#define IDD_MSG_LOAD_MISSION              237
#undef IDD_MSG_NEGATIVE_FEEDBACK
#define IDD_MSG_NEGATIVE_FEEDBACK         238
#undef IDD_MSG_PENDING_INVITATION
#define IDD_MSG_PENDING_INVITATION        239
#undef IDD_MSG_HOST_SESSION
#define IDD_MSG_HOST_SESSION              240
#undef IDD_MSG_ROLES_LOST
#define IDD_MSG_ROLES_LOST                241
#undef IDD_MSG_ACCEPT_INVITATION
#define IDD_MSG_ACCEPT_INVITATION         242
#undef IDD_MSG_MP_PLAYER_COUNT
#define IDD_MSG_MP_PLAYER_COUNT           243
#undef IDD_MSG_GAME_JOIN
#define IDD_MSG_GAME_JOIN                 244
#undef IDD_MSG_EDITOR_WIZARD_NONAME_MISSION
#define IDD_MSG_EDITOR_WIZARD_NONAME_MISSION  245

#undef IDD_MSG_RESTART_NEEDED
#define IDD_MSG_RESTART_NEEDED    246

// new editor
#undef IDD_MSG_COMMIT_OVERLAY
#define IDD_MSG_COMMIT_OVERLAY    247
#undef IDD_MSG_CLEAR_OVERLAY
#define IDD_MSG_CLEAR_OVERLAY     248
#undef IDD_MSG_LOAD_OVERLAY
#define IDD_MSG_LOAD_OVERLAY      249
#undef IDD_MSG_EXIT_OVERLAY
#define IDD_MSG_EXIT_OVERLAY      250
#undef IDD_MSG_CREATE_OVERLAY
#define IDD_MSG_CREATE_OVERLAY    251
#undef IDD_MSG_CLOSE_OVERLAY
#define IDD_MSG_CLOSE_OVERLAY     252
#undef IDD_MSG_LOAD_AAR
#define IDD_MSG_LOAD_AAR          253
#undef IDD_MSG_CLEAR_MISSION
#define IDD_MSG_CLEAR_MISSION     254
#undef IDD_MSG_RETRY_MISSION
#define IDD_MSG_RETRY_MISSION     255
#undef IDD_MSG_DELETE_DIARY_RECORD
#define IDD_MSG_DELETE_DIARY_RECORD 256

// XBOX 360 profile and save messages
#undef IDD_MSG_XBOX_NO_SIGN_IN
#define IDD_MSG_XBOX_NO_SIGN_IN      257
#undef IDD_MSG_XBOX_NO_STORAGE
#define IDD_MSG_XBOX_NO_STORAGE      258
#undef IDD_MSG_XBOX_STORAGE_CHANGED
#define IDD_MSG_XBOX_STORAGE_CHANGED 259
#undef IDD_MSG_XBOX_SAVE_FAILED
#define IDD_MSG_XBOX_SAVE_FAILED     260
#undef IDD_MSG_XBOX_NO_STORAGE_ON_INVITE
#define IDD_MSG_XBOX_NO_STORAGE_ON_INVITE    261

#undef IDD_OPTIONS_AUDIO_ADJUST_MIC
#define IDD_OPTIONS_AUDIO_ADJUST_MIC         262

//MUF-MessageBox for restarting mission editor during layout change
#undef IDD_MSG_RESTART_EDITOR
#define IDD_MSG_RESTART_EDITOR               263

#undef IDD_PROGRESS_MESSAGE
#define IDD_PROGRESS_MESSAGE                 264

//Message box for confirming deleting published mission
#undef IDD_MSG_DELETE_STEAM_MISSION
#define IDD_MSG_DELETE_STEAM_MISSION         265
//Message box for confirming updating published mission
#undef IDD_MSG_UPDATE_STEAM_MISSION
#define IDD_MSG_UPDATE_STEAM_MISSION         266
//Message box for confirming saving current mission before the publish dialog is opened
#undef IDD_MSG_SAVE_MISSION_BEFORE_PUBLISH
#define IDD_MSG_SAVE_MISSION_BEFORE_PUBLISH  267
//Message box for asking user to agree with Battleye licence.
#undef IDD_MSG_BATTLEYE_LICENCE
#define IDD_MSG_BATTLEYE_LICENCE             268
#undef IDD_MSG_UPNP_ACTIVATION
#define IDD_MSG_UPNP_ACTIVATION              269
#undef IDD_MSG_ACCOUNT_LOGIN_GUIDE
//#define IDD_MSG_ACCOUNT_LOGIN_GUIDE        270 - Reserved

// InGameUI
#undef IDD_UNITINFO
#define IDD_UNITINFO              300
#undef IDD_HINT
#define IDD_HINT                  301
#undef IDD_TASKHINT
#define IDD_TASKHINT              302
#undef IDD_STANCEINFO
#define IDD_STANCEINFO            303
#undef IDD_AVCAMERA
#define IDD_AVCAMERA              304
#undef IDD_STAMINA_BAR
#define IDD_STAMINA_BAR           305

//Custom Info
#undef IDD_CUSTOMINFO
#define IDD_CUSTOMINFO          			310
#undef IDD_CUSTOMINFO_MINIMAP
#define IDD_CUSTOMINFO_MINIMAP         		311
#undef IDD_CUSTOMINFO_SLA
#define IDD_CUSTOMINFO_SLA          		312
#undef IDD_CUSTOMINFO_CREW
#define IDD_CUSTOMINFO_CREW        			313
#undef IDD_CUSTOMINFO_SENS
#define IDD_CUSTOMINFO_SENS         		314
#undef IDD_CUSTOMINFO_FEEDUAV
#define IDD_CUSTOMINFO_FEEDUAV      		315
#undef IDD_CUSTOMINFO_FEEDDRIVER
#define IDD_CUSTOMINFO_FEEDDRIVER   		316
#undef IDD_CUSTOMINFO_FEEDPRIMARYGUNNER
#define IDD_CUSTOMINFO_FEEDPRIMARYGUNNER    317
#undef IDD_CUSTOMINFO_FEEDCOMMANDER
#define IDD_CUSTOMINFO_FEEDCOMMANDER        318
#undef IDD_CUSTOMINFO_FEEDMISSILE
#define IDD_CUSTOMINFO_FEEDMISSILE	        319
#undef IDD_CUSTOMINFO_MINEDETECT
#define IDD_CUSTOMINFO_MINEDETECT	        320


// Futura ui
#undef IDD_FUTURAGEAR
#define IDD_FUTURAGEAR            602
// FUTURA GEAR controls
#undef IDC_FG_PRIMARY
#define IDC_FG_PRIMARY            610
#undef IDC_FG_SECONDARY
#define IDC_FG_SECONDARY          611
#undef IDC_FG_HANDGUN
#define IDC_FG_HANDGUN            612

// prefix 620 means slot items
//---
#undef IDC_FG_MAP
#define IDC_FG_MAP                6211
#undef IDC_FG_COMPASS
#define IDC_FG_COMPASS            6212
#undef IDC_FG_WATCH
#define IDC_FG_WATCH              6213
#undef IDC_FG_RADIO
#define IDC_FG_RADIO              6214
#undef IDC_FG_GPS
#define IDC_FG_GPS                6215

#undef IDC_FG_GOGGLES
#define IDC_FG_GOGGLES            6216
#undef IDC_FG_HMD
#define IDC_FG_HMD                6217
#undef IDC_FG_BINOC
#define IDC_FG_BINOC              6238

#undef IDC_FG_BACKPACK2
#define IDC_FG_BACKPACK2          6239
#undef IDC_FG_HEADGEAR
#define IDC_FG_HEADGEAR           6240

// prefix 630 means slot container items(uniform, vest, backpack)
#undef IDC_FG_UNIFORM_SLOT
#define IDC_FG_UNIFORM_SLOT       6301
#undef IDC_FG_VEST_SLOT
#define IDC_FG_VEST_SLOT          6302
#undef IDC_FG_BACKPACK_SLOT
#define IDC_FG_BACKPACK_SLOT      6303
/// containers load
#undef IDC_FG_UNIFORM_LOAD
#define IDC_FG_UNIFORM_LOAD       6304
#undef IDC_FG_VEST_LOAD
#define IDC_FG_VEST_LOAD          6305
#undef IDC_FG_BACKPACK_LOAD
#define IDC_FG_BACKPACK_LOAD      6306
#undef IDC_FG_GROUND_LOAD
#define IDC_FG_GROUND_LOAD        6307
#undef IDC_FG_TOTAL_LOAD
#define IDC_FG_TOTAL_LOAD         6308
//---
#undef IDC_FG_MAGAZINES
#define IDC_FG_MAGAZINES          618
// primary
#undef IDC_FG_PW_MUZZLE
#define IDC_FG_PW_MUZZLE          620
#undef IDC_FG_PW_OPTICS
#define IDC_FG_PW_OPTICS          621
#undef IDC_FG_PW_FLASHLIGHT
#define IDC_FG_PW_FLASHLIGHT      622
#undef IDC_FG_PW_MAGAZINE
#define IDC_FG_PW_MAGAZINE        623
// secondary
#undef IDC_FG_SW_MUZZLE
#define IDC_FG_SW_MUZZLE          624
#undef IDC_FG_SW_OPTICS
#define IDC_FG_SW_OPTICS          625
#undef IDC_FG_SW_FLASHLIGHT
#define IDC_FG_SW_FLASHLIGHT      626
#undef IDC_FG_SW_MAGAZINE
#define IDC_FG_SW_MAGAZINE        627
// handgun
#undef IDC_FG_HG_MUZZLE
#define IDC_FG_HG_MUZZLE          628
#undef IDC_FG_HG_OPTICS
#define IDC_FG_HG_OPTICS          629
#undef IDC_FG_HG_FLASHLIGHT
#define IDC_FG_HG_FLASHLIGHT      630
#undef IDC_FG_HG_MAGAZINE
#define IDC_FG_HG_MAGAZINE        631

#undef IDC_FG_GROUND_ITEMS
#define IDC_FG_GROUND_ITEMS       632
#undef IDC_FG_CHOSEN_CONTAINER
#define IDC_FG_CHOSEN_CONTAINER   640
#undef IDC_FG_PW_UNDERBARREL
#define IDC_FG_PW_UNDERBARREL     641
#undef IDC_FG_SW_UNDERBARREL
#define IDC_FG_SW_UNDERBARREL     642
#undef IDC_FG_HG_UNDERBARREL
#define IDC_FG_HG_UNDERBARREL     643
#undef IDC_FG_PW_MAGAZINE_GL
#define IDC_FG_PW_MAGAZINE_GL     644
#undef IDC_FG_BACKPACK_ITEMS
// #define IDC_FG_BACKPACK_ITEMS     633
#undef IDC_FG_ITEMS
// #define IDC_FG_ITEMS              619

// new inventory

// filter
#undef IDC_FG_GROUND_FILTER
#define IDC_FG_GROUND_FILTER      6554

// images which will painted over containers during DnD state
#undef IDC_FG_GROUND_MARKER
#define IDC_FG_GROUND_MARKER      6385
#undef IDC_FG_CONTAINER_MARKER
#define IDC_FG_CONTAINER_MARKER   6325
#undef IDC_FG_CHOSEN_MARKER
#define IDC_FG_CHOSEN_MARKER      6405

#undef IDC_FG_VEST_CONTAINER
#define IDC_FG_VEST_CONTAINER     638
#undef IDC_FG_UNIFORM_CONTAINER
#define IDC_FG_UNIFORM_CONTAINER  633
#undef IDC_FG_BACKPACK_CONTAINER
#define IDC_FG_BACKPACK_CONTAINER 619

#undef IDC_FG_VEST_TAB
#define IDC_FG_VEST_TAB           6381
#undef IDC_FG_VEST_TEXT
#define IDC_FG_VEST_TEXT          6382
#undef IDC_FG_UNIFORM_TAB
#define IDC_FG_UNIFORM_TAB        6331
#undef IDC_FG_UNIFORM_TEXT
#define IDC_FG_UNIFORM_TEXT       6332
#undef IDC_FG_BACKPACK_TAB
#define IDC_FG_BACKPACK_TAB       6191
#undef IDC_FG_BACKPACK_TEXT
#define IDC_FG_BACKPACK_TEXT      6192

#undef IDC_FG_CHOSEN_TAB
#define IDC_FG_CHOSEN_TAB         6401
#undef IDC_FG_CHOSEN_TEXT
#define IDC_FG_CHOSEN_TEXT        6402
#undef IDC_FG_GROUND_TAB
#define IDC_FG_GROUND_TAB         6321
#undef IDC_FG_GROUND_TEXT
#define IDC_FG_GROUND_TEXT        6322
#undef IDC_DLC_TEMPLATE_LOGO
#define IDC_DLC_TEMPLATE_LOGO        100
#undef IDC_DLC_TEMPLATE_BACKGROUND
#define IDC_DLC_TEMPLATE_BACKGROUND  101
///////////////

/// weight info
#undef IDC_FG_GROUND_WEIGHT
#define IDC_FG_GROUND_WEIGHT      634
#undef IDC_FG_BACKPACK_WEIGHT
#define IDC_FG_BACKPACK_WEIGHT    635
#undef IDC_FG_ITEMS_WEIGHT
#define IDC_FG_ITEMS_WEIGHT       636

/// player info
#undef IDC_FG_TOTAL_WEIGHT
#define IDC_FG_TOTAL_WEIGHT       637
//////

// Arcade Sites
#undef IDD_ARCADE_SITE
#define IDD_ARCADE_SITE          700

#undef IDC_AS_AZIMUT
#define IDC_AS_AZIMUT            701
#undef IDC_AS_AZIMUT_PICTURE
#define IDC_AS_AZIMUT_PICTURE    702

// ---- combos
#undef IDC_AS_SIDE
#define IDC_AS_SIDE           703
#undef IDC_AS_FACTION
#define IDC_AS_FACTION        704
#undef IDC_AS_CLASS
#define IDC_AS_CLASS          705
#undef IDC_AS_SITETYPE
#define IDC_AS_SITETYPE       706
#undef IDC_AS_REPAIRABLE
#define IDC_AS_REPAIRABLE     707
#undef IDC_AS_FASTTRAVEL
#define IDC_AS_FASTTRAVEL     708
#undef IDC_AS_STORAGE
#define IDC_AS_STORAGE        709
// ---- flags
#undef IDC_AS_FLGEQUIP
#define IDC_AS_FLGEQUIP       710
#undef IDC_AS_FLGFOOD
#define IDC_AS_FLGFOOD        711
#undef IDC_AS_FLGARMORED
#define IDC_AS_FLGARMORED     712
#undef IDC_AS_FLGFUEL
#define IDC_AS_FLGFUEL        713
#undef IDC_AS_FLGWEAPON
#define IDC_AS_FLGWEAPON      714
// ---- strings
#undef IDC_AS_NAME
#define IDC_AS_NAME           715
#undef IDC_AS_DESC
#define IDC_AS_DESC           716
#undef IDC_AS_INIT
#define IDC_AS_INIT           717
#undef IDC_AS_CONDITION
#define IDC_AS_CONDITION      718
#undef IDC_AS_RADIUS
#define IDC_AS_RADIUS         719
// ---- sliders
#undef IDC_AS_HEALTH
#define IDC_AS_HEALTH         720
#undef IDC_AS_MOOD
#define IDC_AS_MOOD           721
#undef IDC_AS_PRESENCE
#define IDC_AS_PRESENCE       722

#undef IDC_AS_ARGUMENTS
#define IDC_AS_ARGUMENTS      733
////////////////////////////////////////

// Virtual keyboard
#undef IDC_VK_SHIFT
#define IDC_VK_SHIFT              1001
#undef IDC_VK_CAPSLOCK
#define IDC_VK_CAPSLOCK           1002
#undef IDC_VK_SYMBOLS
#define IDC_VK_SYMBOLS            1003
#undef IDC_VK_ACCENTS
#define IDC_VK_ACCENTS            1004
#undef IDC_VK_BACKSPACE
#define IDC_VK_BACKSPACE          1005
#undef IDC_VK_LEFT
#define IDC_VK_LEFT               1006
#undef IDC_VK_RIGHT
#define IDC_VK_RIGHT              1007
#undef IDC_VK_BASE
#define IDC_VK_BASE               1010

// Main display controls
#undef IDC_MAIN_GAME
#define IDC_MAIN_GAME               101
#undef IDC_MAIN_OPTIONS
#define IDC_MAIN_OPTIONS            102
#undef IDC_MAIN_TRAINING
#define IDC_MAIN_TRAINING           103
#undef IDC_MAIN_CUSTOM
#define IDC_MAIN_CUSTOM             104
#undef IDC_MAIN_MULTIPLAYER
#define IDC_MAIN_MULTIPLAYER        105
#undef IDC_MAIN_QUIT
#define IDC_MAIN_QUIT               106
#undef IDC_MAIN_CREDITS
#define IDC_MAIN_CREDITS            107
#undef IDC_MAIN_ARCADE
#define IDC_MAIN_ARCADE             108
#undef IDC_MAIN_PLAYER
#define IDC_MAIN_PLAYER             109
#undef IDC_MAIN_RANK
#define IDC_MAIN_RANK               110
#undef IDC_MAIN_ISLAND
#define IDC_MAIN_ISLAND             111
#undef IDC_MAIN_DATE
#define IDC_MAIN_DATE               112
#undef IDC_MAIN_MISSION
#define IDC_MAIN_MISSION            113
#undef IDC_MAIN_CONTINUE
#define IDC_MAIN_CONTINUE           114
#undef IDC_MAIN_EDITOR
#define IDC_MAIN_EDITOR             115
#undef IDC_MAIN_BOOK
#define IDC_MAIN_BOOK               116
#undef IDC_MAIN_SINGLE
#define IDC_MAIN_SINGLE             117
#undef IDC_MAIN_VERSION
#define IDC_MAIN_VERSION            118
#undef IDC_MAIN_SINGLE_PROFILES
#define IDC_MAIN_SINGLE_PROFILES    119
#undef IDC_MAIN_CAMPAIGN_PROFILES
#define IDC_MAIN_CAMPAIGN_PROFILES  120
#undef IDC_MAIN_MP_PROFILES
#define IDC_MAIN_MP_PROFILES        121
#undef IDC_MAIN_SETTINGS_PROFILES
#define IDC_MAIN_SETTINGS_PROFILES  122
#undef IDC_MAIN_SYSTEM_LINK
#define IDC_MAIN_SYSTEM_LINK        123
#undef IDC_MAIN_CUSTOM_PROFILES
#define IDC_MAIN_CUSTOM_PROFILES    124
#undef IDC_MAIN_SIGN_IN_STATUS
#define IDC_MAIN_SIGN_IN_STATUS     125
#undef IDC_MAIN_PLAYER_LABEL
#define IDC_MAIN_PLAYER_LABEL       126
#undef IDC_MAIN_PLAYER_NAME
#define IDC_MAIN_PLAYER_NAME        127
#undef IDC_MAIN_CONTROLS
#define IDC_MAIN_CONTROLS           128
#undef IDC_MAIN_PLAYER_ID
#define IDC_MAIN_PLAYER_ID          129
#undef IDC_MAIN_PLAYER_COLOR
#define IDC_MAIN_PLAYER_COLOR       130
#undef IDC_MAIN_SERVICE_ID_LABEL
#define IDC_MAIN_SERVICE_ID_LABEL   131
#undef IDC_MAIN_NICKNAME_LABEL
#define IDC_MAIN_NICKNAME_LABEL     132
#undef IDC_MAIN_NICKNAME_BG
#define IDC_MAIN_NICKNAME_BG        133
#undef IDC_MAIN_LOAD
#define IDC_MAIN_LOAD               134
#undef IDC_MAIN_SAVE
#define IDC_MAIN_SAVE               135
#undef IDC_MAIN_AAR
#define IDC_MAIN_AAR                136
#undef IDC_MAIN_ACHIEVEMENTS
#define IDC_MAIN_ACHIEVEMENTS       137
#undef IDC_MAIN_SINGLEPLAYER
#define IDC_MAIN_SINGLEPLAYER       138
#undef IDC_MAIN_MOD_LIST
#define IDC_MAIN_MOD_LIST           139
#undef IDC_MAIN_MOD_LAUNCHER
#define IDC_MAIN_MOD_LAUNCHER       140
#undef IDC_MAIN_MOD_ICONS
#define IDC_MAIN_MOD_ICONS          141
#undef IDC_SP_EDITOR
#define IDC_SP_EDITOR               142
#undef IDC_MAIN_FIELD_MANUAL
#define IDC_MAIN_FIELD_MANUAL       143
#undef IDC_MAIN_DLC_ICONS
#define IDC_MAIN_DLC_ICONS          144
#undef IDC_MAIN_DLC_OWNED_ICONS
#define IDC_MAIN_DLC_OWNED_ICONS    145
#undef IDC_MAIN_DLC_ICONS_BACK
#define IDC_MAIN_DLC_ICONS_BACK     146
#undef IDC_MAIN_MOD_ICONS_BACK
#define IDC_MAIN_MOD_ICONS_BACK     147
#undef IDC_MAIN_DLC_OWNED_ICONS_BACK
#define IDC_MAIN_DLC_OWNED_ICONS_BACK    148
#undef IDC_MAIN_BOOTCAMP_CAMPAIGN
#define IDC_MAIN_BOOTCAMP_CAMPAIGN       149
#undef IDC_MAIN_BOOTCAMP_SHOWCASES
#define IDC_MAIN_BOOTCAMP_SHOWCASES      150
#undef IDC_MAIN_BOOTCAMP_CHALLENGES
#define IDC_MAIN_BOOTCAMP_CHALLENGES     151
#undef IDC_MAIN_BOOTCAMP_VRTRAINING
#define IDC_MAIN_BOOTCAMP_VRTRAINING     152
#undef IDC_MAIN_QUICKPLAY
#define IDC_MAIN_QUICKPLAY          154
#undef IDC_MAIN_UNIT
#define IDC_MAIN_UNIT               155

#undef IDC_MAIN_CARDAS_CUDL
#define IDC_MAIN_CARDAS_CUDL        199 // muj vlastni cudl

#undef IDC_MAIN_VIDEOCONTROL
#define IDC_MAIN_VIDEOCONTROL       3335

#undef IDC_MAIN_TAB_LOGIN
#define IDC_MAIN_TAB_LOGIN          9001
#undef IDC_MAIN_TAB_LIBRARY
#define IDC_MAIN_TAB_LIBRARY        9002
#undef IDC_MAIN_TAB_SINGLE
#define IDC_MAIN_TAB_SINGLE         9003
#undef IDC_MAIN_TAB_MULTIPLAYER
#define IDC_MAIN_TAB_MULTIPLAYER    9004
#undef IDC_MAIN_TAB_OPTIONS
#define IDC_MAIN_TAB_OPTIONS        9005
#undef IDC_MAIN_TAB_CONTROLS
#define IDC_MAIN_TAB_CONTROLS       9006
#undef IDC_MAIN_TAB_EDITOR
#define IDC_MAIN_TAB_EDITOR         9007
#undef IDC_MAIN_TAB_QUIT
#define IDC_MAIN_TAB_QUIT           9008
#undef IDC_MAIN_TAB_AAR
#define IDC_MAIN_TAB_AAR            9011

#undef IDC_BUILD_VERSION
#define IDC_BUILD_VERSION           9009
#undef IDC_BUILD_DATE
#define IDC_BUILD_DATE              9010

// Single player display controls
#undef IDC_SP_TRAINING
#define IDC_SP_TRAINING             101
#undef IDC_SP_EDITOR
//#define IDC_SP_EDITOR               102
#undef IDC_SP_MISSION
#define IDC_SP_MISSION              103
#undef IDC_SP_CAMPAIGN
#define IDC_SP_CAMPAIGN             104

// Select profile display controls
#undef IDC_PROFILES_LIST
#define IDC_PROFILES_LIST           101
#undef IDC_PROFILES_HEAD
#define IDC_PROFILES_HEAD           102
#undef IDC_PROFILES_TITLE
#define IDC_PROFILES_TITLE          103
#undef IDC_PROFILES_CONTROLLER
#define IDC_PROFILES_CONTROLLER     104
#undef IDC_PROFILES_DIFFICULTY
#define IDC_PROFILES_DIFFICULTY     105
#undef IDC_PROFILES_MISSION
#define IDC_PROFILES_MISSION        106
#undef IDC_PROFILES_LIVE
#define IDC_PROFILES_LIVE           107
#undef IDC_PROFILES_MISSION_TEXT
#define IDC_PROFILES_MISSION_TEXT   108
#undef IDC_PROFILES_SIGN_IN_STATUS
#define IDC_PROFILES_SIGN_IN_STATUS 109
#undef IDC_PROFILES_EDIT
#define IDC_PROFILES_EDIT           110
#undef IDC_PROFILES_DELETE
#define IDC_PROFILES_DELETE         111

// Edit profile display controls
#undef IDC_PROFILE_NAME
#define IDC_PROFILE_NAME            101
#undef IDC_PROFILE_FACE
#define IDC_PROFILE_FACE            102
#undef IDC_PROFILE_VOICE
#define IDC_PROFILE_VOICE           103
#undef IDC_PROFILE_CONTROLLER
#define IDC_PROFILE_CONTROLLER      104
#undef IDC_PROFILE_AUDIO
#define IDC_PROFILE_AUDIO           105
#undef IDC_PROFILE_VIDEO
#define IDC_PROFILE_VIDEO           106
#undef IDC_PROFILE_HEAD
#define IDC_PROFILE_HEAD            108
#undef IDC_PROFILE_SUM_NAME
#define IDC_PROFILE_SUM_NAME        109
#undef IDC_PROFILE_SUM_CONTROLLER
#define IDC_PROFILE_SUM_CONTROLLER  110
#undef IDC_PROFILE_SUM_LIVE
#define IDC_PROFILE_SUM_LIVE        111
#undef IDC_PROFILE_VOICE_MASK
#define IDC_PROFILE_VOICE_MASK      112
#undef IDC_PROFILE_SIGN_IN_STATUS
#define IDC_PROFILE_SIGN_IN_STATUS  113
#undef IDC_PROFILE_CREDITS
#define IDC_PROFILE_CREDITS         114
#undef IDC_PROFILE_STORAGE_DEVICE
#define IDC_PROFILE_STORAGE_DEVICE  115

// Edit profile name display controls
#undef IDC_PROFILE_NAME_PREVIEW
#define IDC_PROFILE_NAME_PREVIEW    101

// Edit profile face
#undef IDC_PROF_FACE_FACE
#define IDC_PROF_FACE_FACE          101
#undef IDC_PROF_FACE_GLASSES
#define IDC_PROF_FACE_GLASSES       102
#undef IDC_PROF_FACE_HEAD
#define IDC_PROF_FACE_HEAD          103

// Edit profile voice
#undef IDC_PROF_VOICE_SPEAKER
#define IDC_PROF_VOICE_SPEAKER          101
#undef IDC_PROF_VOICE_PITCH_TITLE
#define IDC_PROF_VOICE_PITCH_TITLE      102
#undef IDC_PROF_VOICE_PITCH_VALUE
#define IDC_PROF_VOICE_PITCH_VALUE      103
#undef IDC_PROF_VOICE_PITCH
#define IDC_PROF_VOICE_PITCH            104
#undef IDC_PROF_VOICE_MASK
#define IDC_PROF_VOICE_MASK             105
#undef IDC_PROF_VOICE_THROUGH_SPEAKERS
#define IDC_PROF_VOICE_THROUGH_SPEAKERS 106
#undef IDC_PROF_VOICE_HEAD
#define IDC_PROF_VOICE_HEAD             107
#undef IDC_PROF_VOICE_DEFAULT
#define IDC_PROF_VOICE_DEFAULT          108

// Edit profile controller
#undef IDC_PROF_CONTR_VEHICLE
#define IDC_PROF_CONTR_VEHICLE            101
#undef IDC_PROF_CONTR_TYPE
#define IDC_PROF_CONTR_TYPE               102
#undef IDC_PROF_CONTR_IMAGE
#define IDC_PROF_CONTR_IMAGE              103
#undef IDC_PROF_CONTR_SCHEME
#define IDC_PROF_CONTR_SCHEME             104
#undef IDC_PROF_CONTR_SENSITIVITY
#define IDC_PROF_CONTR_SENSITIVITY        105
#undef IDC_PROF_CONTR_A
#define IDC_PROF_CONTR_A                  200
#undef IDC_PROF_CONTR_B
#define IDC_PROF_CONTR_B                  201
#undef IDC_PROF_CONTR_Y
#define IDC_PROF_CONTR_Y                  202
#undef IDC_PROF_CONTR_X
#define IDC_PROF_CONTR_X                  203
#undef IDC_PROF_CONTR_WHITE
#define IDC_PROF_CONTR_WHITE              204
#undef IDC_PROF_CONTR_BLACK
#define IDC_PROF_CONTR_BLACK              205
#undef IDC_PROF_CONTR_LEFT
#define IDC_PROF_CONTR_LEFT               206
#undef IDC_PROF_CONTR_RIGHT
#define IDC_PROF_CONTR_RIGHT              207
#undef IDC_PROF_CONTR_UP
#define IDC_PROF_CONTR_UP                 208
#undef IDC_PROF_CONTR_DOWN
#define IDC_PROF_CONTR_DOWN               209
#undef IDC_PROF_CONTR_BACK
#define IDC_PROF_CONTR_BACK               210
#undef IDC_PROF_CONTR_START
#define IDC_PROF_CONTR_START              211
#undef IDC_PROF_CONTR_LEFT_THUMB
#define IDC_PROF_CONTR_LEFT_THUMB         212
#undef IDC_PROF_CONTR_LEFT_THUMB_MOVE_X
#define IDC_PROF_CONTR_LEFT_THUMB_MOVE_X  213
#undef IDC_PROF_CONTR_LEFT_THUMB_MOVE_Y
#define IDC_PROF_CONTR_LEFT_THUMB_MOVE_Y  214
#undef IDC_PROF_CONTR_RIGHT_THUMB
#define IDC_PROF_CONTR_RIGHT_THUMB        215
#undef IDC_PROF_CONTR_RIGHT_THUMB_MOVE_X
#define IDC_PROF_CONTR_RIGHT_THUMB_MOVE_X 216
#undef IDC_PROF_CONTR_RIGHT_THUMB_MOVE_Y
#define IDC_PROF_CONTR_RIGHT_THUMB_MOVE_Y 217
#undef IDC_PROF_CONTR_LEFT_TRIGGER
#define IDC_PROF_CONTR_LEFT_TRIGGER       218
#undef IDC_PROF_CONTR_RIGHT_TRIGGER
#define IDC_PROF_CONTR_RIGHT_TRIGGER      219
#undef IDC_PROF_CONTR_LEFT_THUMB_MOVE
#define IDC_PROF_CONTR_LEFT_THUMB_MOVE    220
#undef IDC_PROF_CONTR_RIGHT_THUMB_MOVE
#define IDC_PROF_CONTR_RIGHT_THUMB_MOVE   221
#undef IDC_PROF_CONTR_DPAD
#define IDC_PROF_CONTR_DPAD               222
#undef IDC_PROF_CONTR_NEXT_SCHEME
#define IDC_PROF_CONTR_NEXT_SCHEME        223
#undef IDC_PROF_CONTR_PREV_SCHEME
#define IDC_PROF_CONTR_PREV_SCHEME        224
#undef IDC_PROF_CONTR_Y_AXIS
#define IDC_PROF_CONTR_Y_AXIS             225
#undef IDC_PROF_CONTR_VIBRATIONS
#define IDC_PROF_CONTR_VIBRATIONS         226

// Controller buttons
#undef IDC_CONTROLLER_BUTTONS
// #define IDC_CONTROLLER_BUTTONS            101

// Edit profile audio options
#undef IDC_PROF_AUDIO_MUSIC_TITLE
#define IDC_PROF_AUDIO_MUSIC_TITLE  101
#undef IDC_PROF_AUDIO_MUSIC_VALUE
#define IDC_PROF_AUDIO_MUSIC_VALUE  102
#undef IDC_PROF_AUDIO_MUSIC
#define IDC_PROF_AUDIO_MUSIC        103
#undef IDC_PROF_AUDIO_RADIO_TITLE
#define IDC_PROF_AUDIO_RADIO_TITLE  104
#undef IDC_PROF_AUDIO_RADIO_VALUE
#define IDC_PROF_AUDIO_RADIO_VALUE  105
#undef IDC_PROF_AUDIO_RADIO
#define IDC_PROF_AUDIO_RADIO        106
#undef IDC_PROF_AUDIO_EFFECT_TITLE
#define IDC_PROF_AUDIO_EFFECT_TITLE 107
#undef IDC_PROF_AUDIO_EFFECT_VALUE
#define IDC_PROF_AUDIO_EFFECT_VALUE 108
#undef IDC_PROF_AUDIO_EFFECT
#define IDC_PROF_AUDIO_EFFECT       109
#undef IDC_PROF_AUDIO_DEFAULT
#define IDC_PROF_AUDIO_DEFAULT      110

// Edit profile video options
#undef IDC_PROF_VIDEO_BRIGHT
#define IDC_PROF_VIDEO_BRIGHT       101
#undef IDC_PROF_VIDEO_BRIGHT_TITLE
#define IDC_PROF_VIDEO_BRIGHT_TITLE 102
#undef IDC_PROF_VIDEO_BRIGHT_VALUE
#define IDC_PROF_VIDEO_BRIGHT_VALUE 103
#undef IDC_PROF_VIDEO_GAMMA
#define IDC_PROF_VIDEO_GAMMA        104
#undef IDC_PROF_VIDEO_GAMMA_TITLE
#define IDC_PROF_VIDEO_GAMMA_TITLE  105
#undef IDC_PROF_VIDEO_GAMMA_VALUE
#define IDC_PROF_VIDEO_GAMMA_VALUE  106
#undef IDC_PROF_VIDEO_SUBTITLES
#define IDC_PROF_VIDEO_SUBTITLES    107
#undef IDC_PROF_VIDEO_RADIO
#define IDC_PROF_VIDEO_RADIO        108
#undef IDC_PROF_VIDEO_DEFAULT
#define IDC_PROF_VIDEO_DEFAULT      109

// Select profile an Xbox live account display controls
#undef IDC_PROFILE_LIVE_ACCOUNTS
#define IDC_PROFILE_LIVE_ACCOUNTS 101
#undef IDC_PROFILE_LIVE_CREATE
#define IDC_PROFILE_LIVE_CREATE   102

// Select difficulty dialog
#undef IDC_DIFF_LIST
#define IDC_DIFF_LIST             108
#undef IDC_DIFF_DESC
#define IDC_DIFF_DESC             102

// Single mission display controls
#undef IDC_SINGLE_MISSION
#define IDC_SINGLE_MISSION                       101
#undef IDC_SINGLE_OVERVIEW
#define IDC_SINGLE_OVERVIEW                      102
#undef IDC_SINGLE_MISSION_PAD
#define IDC_SINGLE_MISSION_PAD                   103
#undef IDC_SINGLE_DIFF
#define IDC_SINGLE_DIFF                          104
#undef IDC_SINGLE_LOAD
#define IDC_SINGLE_LOAD                          105
#undef IDC_SINGLE_TITLE
#define IDC_SINGLE_TITLE                         106
#undef IDC_SINGLE_DELETE
#define IDC_SINGLE_DELETE                        107
#undef IDC_SINGLE_COPY
#define IDC_SINGLE_COPY                          108
#undef IDC_SINGLE_EDIT
#define IDC_SINGLE_EDIT                          109
#undef IDC_SINGLE_NAME
#define IDC_SINGLE_NAME                          110
#undef IDC_SINGLE_AUTHOR
#define IDC_SINGLE_AUTHOR                        111
#undef IDC_SINGLE_PICTURE
#define IDC_SINGLE_PICTURE                       112
#undef IDC_SINGLE_DESCRIPTION
#define IDC_SINGLE_DESCRIPTION                   113
#undef IDC_SINGLE_LOADING_PICTURE
#define IDC_SINGLE_LOADING_PICTURE               114
#undef IDC_SINGLE_SHOW_MISSION_WORKSHOP
#define IDC_SINGLE_SHOW_MISSION_WORKSHOP         115
#undef IDC_SINGLE_SHOW_GAME_WORKSHOP
#define IDC_SINGLE_SHOW_GAME_WORKSHOP            116
#undef IDC_SINGLE_SHOW_GAME_OR_MISSION_WORKSHOP
#define IDC_SINGLE_SHOW_GAME_OR_MISSION_WORKSHOP 117
#undef IDC_SINGLE_MISSION_SORT_COMBO
#define IDC_SINGLE_MISSION_SORT_COMBO            118
#undef IDC_SINGLE_MISSION_SORT_ORDER
#define IDC_SINGLE_MISSION_SORT_ORDER            119
#undef IDC_SINGLE_MISSION_BUY_DLC
#define IDC_SINGLE_MISSION_BUY_DLC               120
#undef IDC_SINGLE_MISSION_DLCSTRIPE
#define IDC_SINGLE_MISSION_DLCSTRIPE             121
#undef IDC_SINGLE_MISSION_DLCICON
#define IDC_SINGLE_MISSION_DLCICON               122

// Xbox style mission wizard
#undef IDC_XWIZ_TEMPLATE
#define IDC_XWIZ_TEMPLATE             101
#undef IDC_XWIZ_TEMPLATE_OVERVIEW
#define IDC_XWIZ_TEMPLATE_OVERVIEW    102

#undef IDC_XWIZ_NAME
#define IDC_XWIZ_NAME                 101
#undef IDC_XWIZ_ISLAND
#define IDC_XWIZ_ISLAND               102
#undef IDC_XWIZ_WEATHER
#define IDC_XWIZ_WEATHER              103
#undef IDC_XWIZ_TIME
#define IDC_XWIZ_TIME                 104
#undef IDC_XWIZ_SUM_NAME
#define IDC_XWIZ_SUM_NAME             105
#undef IDC_XWIZ_SUM_TIME
#define IDC_XWIZ_SUM_TIME             106
#undef IDC_XWIZ_SUM_TEMPLATE
#define IDC_XWIZ_SUM_TEMPLATE         107
#undef IDC_XWIZ_SUM_ISLAND
#define IDC_XWIZ_SUM_ISLAND           108
#undef IDC_XWIZ_SUM_WEATHER
#define IDC_XWIZ_SUM_WEATHER          109
#undef IDC_XWIZ_SUM_WEATHER_FORECAST
#define IDC_XWIZ_SUM_WEATHER_FORECAST 110
#undef IDC_XWIZ_UNIT
#define IDC_XWIZ_UNIT                 111
#undef IDC_XWIZ_MAP
#define IDC_XWIZ_MAP                  112
#undef IDC_XWIZ_SUM_DATE
#define IDC_XWIZ_SUM_DATE             113
#undef IDC_XWIZ_PARAM
#define IDC_XWIZ_PARAM                114
#undef IDC_XWIZ_SAVE
#define IDC_XWIZ_SAVE                 115

#undef IDC_XWIZ_UNITS
#define IDC_XWIZ_UNITS                101
#undef IDC_XWIZ_UNITS_OVERVIEW
#define IDC_XWIZ_UNITS_OVERVIEW       102

#undef IDC_XWIZ_PARAMS
#define IDC_XWIZ_PARAMS               101
#undef IDC_XWIZ_PARAMS_TITLES
#define IDC_XWIZ_PARAMS_TITLES        102
#undef IDC_XWIZ_PARAMS_VALUES
#define IDC_XWIZ_PARAMS_VALUES        103
#undef IDC_EDIT
#define IDC_EDIT                      104
#undef IDD_XWIZARD_PARAMETER_TITLE
#define IDD_XWIZARD_PARAMETER_TITLE   105

#undef IDC_XWIZ_UNIT_SELECT
#define IDC_XWIZ_UNIT_SELECT          101
#undef IDC_XWIZ_UNIT_SELECT_TITLE
#define IDC_XWIZ_UNIT_SELECT_TITLE    102

#undef IDC_XWIZ_UNIT_CLASS
#define IDC_XWIZ_UNIT_CLASS               101
#undef IDC_XWIZ_UNIT_TYPE
#define IDC_XWIZ_UNIT_TYPE                102
#undef IDC_XWIZ_UNIT_COUNT
#define IDC_XWIZ_UNIT_COUNT               103
#undef IDC_XWIZ_UNIT_SIDE
#define IDC_XWIZ_UNIT_SIDE                104
#undef IDC_XWIZ_UNIT_SELECT_CUSTOM_TITLE
#define IDC_XWIZ_UNIT_SELECT_CUSTOM_TITLE 105

#undef IDC_XWIZ_WP_TYPE
#define IDC_XWIZ_WP_TYPE              101
#undef IDC_XWIZ_WP_BEHAVIOUR
#define IDC_XWIZ_WP_BEHAVIOUR         102
#undef IDC_XWIZ_WP_FORMATION
#define IDC_XWIZ_WP_FORMATION         103
#undef IDC_XWIZ_WP_COMBAT_MODE
#define IDC_XWIZ_WP_COMBAT_MODE       104

#undef IDC_XWIZ_ISLAND_LIST
#define IDC_XWIZ_ISLAND_LIST          101
#undef IDC_XWIZ_ISLAND_MAP
#define IDC_XWIZ_ISLAND_MAP           102
#undef IDC_XWIZ_ISLAND_SHOTS
#define IDC_XWIZ_ISLAND_SHOTS         103

#undef IDC_XWIZ_WEATHER_TITLE
#define IDC_XWIZ_WEATHER_TITLE            101
#undef IDC_XWIZ_WEATHER_VALUE
#define IDC_XWIZ_WEATHER_VALUE            102
#undef IDC_XWIZ_WEATHER_FORECAST_TITLE
#define IDC_XWIZ_WEATHER_FORECAST_TITLE   103
#undef IDC_XWIZ_WEATHER_FORECAST_VALUE
#define IDC_XWIZ_WEATHER_FORECAST_VALUE   104
#undef IDC_XWIZ_FOG_TITLE
#define IDC_XWIZ_FOG_TITLE                105
#undef IDC_XWIZ_FOG_VALUE
#define IDC_XWIZ_FOG_VALUE                106
#undef IDC_XWIZ_FOG_FORECAST_TITLE
#define IDC_XWIZ_FOG_FORECAST_TITLE       107
#undef IDC_XWIZ_FOG_FORECAST_VALUE
#define IDC_XWIZ_FOG_FORECAST_VALUE       108
#undef IDC_XWIZ_VIEW_DISTANCE_TITLE
#define IDC_XWIZ_VIEW_DISTANCE_TITLE      109
#undef IDC_XWIZ_VIEW_DISTANCE_VALUE
#define IDC_XWIZ_VIEW_DISTANCE_VALUE      110

#undef IDC_XWIZ_TIME_HOUR
#define IDC_XWIZ_TIME_HOUR      101
#undef IDC_XWIZ_TIME_MINUTE
#define IDC_XWIZ_TIME_MINUTE    102
#undef IDC_XWIZ_TIME_DAY
#define IDC_XWIZ_TIME_DAY       103
#undef IDC_XWIZ_TIME_MONTH
#define IDC_XWIZ_TIME_MONTH     104
#undef IDC_XWIZ_TIME_YEAR
#define IDC_XWIZ_TIME_YEAR      105

#undef IDC_XWIZ_MAP_POINTS
#define IDC_XWIZ_MAP_POINTS     101
#undef IDC_XWIZ_MAP_DELETE
#define IDC_XWIZ_MAP_DELETE     102
#undef IDC_XWIZ_MAP_EDIT
#define IDC_XWIZ_MAP_EDIT       103
#undef IDC_XWIZ_MAP_INSERT_WP
#define IDC_XWIZ_MAP_INSERT_WP  104
#undef IDC_XWIZ_MAP_NOTEPAD
#define IDC_XWIZ_MAP_NOTEPAD    105
#undef IDC_XWIZ_MAP_MOVE
#define IDC_XWIZ_MAP_MOVE       106

// Select campaign display
#undef IDC_CAMPAIGNS_LIST
#define IDC_CAMPAIGNS_LIST            101
#undef IDC_CAMPAIGNS_CAMPAIGN
#define IDC_CAMPAIGNS_CAMPAIGN        102
#undef IDC_CAMPAIGNS_DESCRIPTION
#define IDC_CAMPAIGNS_DESCRIPTION     103

// Campaign display
#undef IDC_CAMPAIGN_HISTORY
#define IDC_CAMPAIGN_HISTORY          101
#undef IDC_CAMPAIGN_REPLAY
#define IDC_CAMPAIGN_REPLAY           102
#undef IDC_CAMPAIGN_DIFF
#define IDC_CAMPAIGN_DIFF             103
#undef IDC_CAMPAIGN_NAME
#define IDC_CAMPAIGN_NAME             104
#undef IDC_CAMPAIGN_AUTHOR
#define IDC_CAMPAIGN_AUTHOR           105
#undef IDC_CAMPAIGN_PICTURE
#define IDC_CAMPAIGN_PICTURE          106
#undef IDC_CAMPAIGN_DESCRIPTION
#define IDC_CAMPAIGN_DESCRIPTION      107
#undef IDC_CAMPAIGN_TEXT_ESTDEPLOY
#define IDC_CAMPAIGN_TEXT_ESTDEPLOY   108
#undef IDC_CAMPAIGN_RELEASEDATE
#define IDC_CAMPAIGN_RELEASEDATE      109
#undef IDC_CAMPAIGN_BUY_DLC
#define IDC_CAMPAIGN_BUY_DLC          110
#undef IDC_CAMPAIGN_DLCSTRIPE
#define IDC_CAMPAIGN_DLCSTRIPE        111
#undef IDC_CAMPAIGN_DLCICON
#define IDC_CAMPAIGN_DLCICON          112

// MP campaign display
#undef IDC_CAMPAIGN_MP_LIST
#define IDC_CAMPAIGN_MP_LIST          101
#undef IDC_CAMPAIGN_MP_TITLE
#define IDC_CAMPAIGN_MP_TITLE         102
#undef IDC_CAMPAIGN_MP_NAME
#define IDC_CAMPAIGN_MP_NAME          103
#undef IDC_CAMPAIGN_MP_AUTHOR
#define IDC_CAMPAIGN_MP_AUTHOR        104
#undef IDC_CAMPAIGN_MP_PICTURE
#define IDC_CAMPAIGN_MP_PICTURE       105
#undef IDC_CAMPAIGN_MP_DESCRIPTION
#define IDC_CAMPAIGN_MP_DESCRIPTION   106
#undef IDC_CAMPAIGN_MP_PLAY
#define IDC_CAMPAIGN_MP_PLAY          107
#undef IDC_CAMPAIGN_MP_HOST
#define IDC_CAMPAIGN_MP_HOST          108
#undef IDC_CAMPAIGN_MP_JOIN
#define IDC_CAMPAIGN_MP_JOIN          109
#undef IDC_CAMPAIGN_MP_BUY_DLC
#define IDC_CAMPAIGN_MP_BUY_DLC       110

// Revert display
#undef IDC_REVERT_BOOK
#define IDC_REVERT_BOOK               101
#undef IDC_REVERT_TITLE
#define IDC_REVERT_TITLE              102
#undef IDC_REVERT_QUESTION
#define IDC_REVERT_QUESTION           103

// Game display controls
#undef IDC_GAME_SELECT
#define IDC_GAME_SELECT       301
#undef IDC_SIDE_NAME
#define IDC_SIDE_NAME         101

// Options display controls
#undef IDC_OPTIONS_VIDEO
#define IDC_OPTIONS_VIDEO             301
#undef IDC_OPTIONS_AUDIO
#define IDC_OPTIONS_AUDIO             302
#undef IDC_OPTIONS_CONFIGURE
#define IDC_OPTIONS_CONFIGURE         303
#undef IDC_OPTIONS_DIFFICULTY
#define IDC_OPTIONS_DIFFICULTY        304
#undef IDC_OPTIONS_NOTEBOOK
#define IDC_OPTIONS_NOTEBOOK          305
#undef IDC_OPTIONS_CREDITS
#define IDC_OPTIONS_CREDITS           306
#undef IDC_OPTIONS_GAMEOPTIONS
#define IDC_OPTIONS_GAMEOPTIONS       307

#undef IDC_OPTIONS_OBJECT_VISIBILITY_VALUE
#define IDC_OPTIONS_OBJECT_VISIBILITY_VALUE     308
#undef IDC_OPTIONS_OBJECT_VISIBILITY_SLIDER
#define IDC_OPTIONS_OBJECT_VISIBILITY_SLIDER    309
#undef IDC_OPTIONS_VISIBILITY_TEXT
#define IDC_OPTIONS_VISIBILITY_TEXT             310
#undef IDC_OPTIONS_SHADOW_VISIBILITY_VALUE
#define IDC_OPTIONS_SHADOW_VISIBILITY_VALUE     311
#undef IDC_OPTIONS_SHADOW_VISIBILITY_SLIDER
#define IDC_OPTIONS_SHADOW_VISIBILITY_SLIDER    312
#undef IDC_OPTIONS_SHADOW_VISIBILIT_TEXT
#define IDC_OPTIONS_SHADOW_VISIBILIT_TEXT       313
#undef IDC_OPTIONS_TRAFFIC_VISIBILITY_VALUE
#define IDC_OPTIONS_TRAFFIC_VISIBILITY_VALUE    314
#undef IDC_OPTIONS_TRAFFIC_VISIBILITY_SLIDER
#define IDC_OPTIONS_TRAFFIC_VISIBILITY_SLIDER   315
#undef IDC_OPTIONS_PIP_VISIBILITY_VALUE
#define IDC_OPTIONS_PIP_VISIBILITY_VALUE        316
#undef IDC_OPTIONS_PIP_VISIBILITY_SLIDER
#define IDC_OPTIONS_PIP_VISIBILITY_SLIDER       317

#undef IDC_OPTIONS_PIP_VALUE
#define IDC_OPTIONS_PIP_VALUE                   334
#undef IDC_OPTIONS_SW_VALUE
#define IDC_OPTIONS_SW_VALUE                    335
#undef IDC_OPTIONS_FXAA_VALUE
#define IDC_OPTIONS_FXAA_VALUE                  336
#undef IDC_OPTIONS_WATER_SS_REFLECTIONS_VALUE
#define IDC_OPTIONS_WATER_SS_REFLECTIONS_VALUE  337

#undef IDC_OPTIONS_QUALITY_VALUE
#define IDC_OPTIONS_QUALITY_VALUE     101
#undef IDC_OPTIONS_QUALITY_SLIDER
#define IDC_OPTIONS_QUALITY_SLIDER    102
#undef IDC_OPTIONS_VISIBILITY_VALUE
#define IDC_OPTIONS_VISIBILITY_VALUE  103
#undef IDC_OPTIONS_VISIBILITY_SLIDER
#define IDC_OPTIONS_VISIBILITY_SLIDER 104

#undef IDC_OPTIONS_DRAWDISTANCE_VALUE
#define IDC_OPTIONS_DRAWDISTANCE_VALUE  1336
#undef IDC_OPTIONS_DRAWDISTANCE_SLIDER
#define IDC_OPTIONS_DRAWDISTANCE_SLIDER 1337

#undef IDC_OPTIONS_RATE_VALUE
#define IDC_OPTIONS_RATE_VALUE        105
#undef IDC_OPTIONS_RATE_SLIDER
#define IDC_OPTIONS_RATE_SLIDER       106
#undef IDC_OPTIONS_TEXTURES_VALUE
#define IDC_OPTIONS_TEXTURES_VALUE    107
#undef IDC_OPTIONS_TEXTURES_SLIDER
#define IDC_OPTIONS_TEXTURES_SLIDER   108
#undef IDC_OPTIONS_GAMMA_VALUE
#define IDC_OPTIONS_GAMMA_VALUE       109
#undef IDC_OPTIONS_GAMMA_SLIDER
#define IDC_OPTIONS_GAMMA_SLIDER      110
#undef IDC_OPTIONS_BRIGHT_VALUE
#define IDC_OPTIONS_BRIGHT_VALUE      111
#undef IDC_OPTIONS_BRIGHT_SLIDER
#define IDC_OPTIONS_BRIGHT_SLIDER     112
#undef IDC_OPTIONS_RESOLUTION
#define IDC_OPTIONS_RESOLUTION        113
#undef IDC_OPTIONS_DISPLAY_MODE
#define IDC_OPTIONS_DISPLAY_MODE      1131
#undef IDC_OPTIONS_REFRESH
#define IDC_OPTIONS_REFRESH           114
#undef IDC_OPTIONS_OBJSHADOWS
#define IDC_OPTIONS_OBJSHADOWS        115
#undef IDC_OPTIONS_VEHSHADOWS
//#define IDC_OPTIONS_VEHSHADOWS      116
#undef IDC_OPTIONS_CLOUDLETS
//#define IDC_OPTIONS_CLOUDLETS       117
#undef IDC_OPTIONS_HWTL
//#define IDC_OPTIONS_HWTL            118
#undef IDC_OPTIONS_BLOOD
#define IDC_OPTIONS_BLOOD             119
#undef IDC_OPTIONS_MULTITEXTURING
//#define IDC_OPTIONS_MULTITEXTURING  120
#undef IDC_OPTIONS_WBUFFER
#define IDC_OPTIONS_WBUFFER           121
#undef IDC_OPTIONS_BLOOD_TEXT
#define IDC_OPTIONS_BLOOD_TEXT        122
#undef IDC_OPTIONS_TERRAIN
#define IDC_OPTIONS_TERRAIN           123
#undef IDC_OPTIONS_LIFESTATE
#define IDC_OPTIONS_LIFESTATE         199
#undef IDC_OPTIONS_TUTORIAL_HINTS
#define IDC_OPTIONS_TUTORIAL_HINTS    140

#undef IDC_OBJECTS_DETAIL
#define IDC_OBJECTS_DETAIL            124
#undef IDC_TEXTURE_DETAIL
#define IDC_TEXTURE_DETAIL            125
#undef IDC_QUALITY_PREFERENCE
#define IDC_QUALITY_PREFERENCE        126
#undef IDC_SHADING_DETAIL
#define IDC_SHADING_DETAIL            127
#undef IDC_SHADOW_DETAIL
#define IDC_SHADOW_DETAIL             128

#undef IDC_OPTIONS_VIDEO_DEFAULT
#define IDC_OPTIONS_VIDEO_DEFAULT     129
#undef IDC_OPTIONS_VIDEO_AUTODETECT
#define IDC_OPTIONS_VIDEO_AUTODETECT  1291

#undef IDC_ANISO_DETAIL
#define IDC_ANISO_DETAIL              130
#undef IDC_HDR_DETAIL
#define IDC_HDR_DETAIL                131
#undef IDC_POSTPROCESS_EFFECTS
#define IDC_POSTPROCESS_EFFECTS       132
#undef IDC_FSAA_DETAIL
#define IDC_FSAA_DETAIL               133
#undef IDC_ASPECT_RATIO
#define IDC_ASPECT_RATIO              134
#undef IDC_ATOC_DETAIL
#define IDC_ATOC_DETAIL               1300
#undef IDC_PPAA_DETAIL
#define IDC_PPAA_DETAIL               1301

#undef IDC_OPTIONS_PP_SSAO
#define IDC_OPTIONS_PP_SSAO                  1310
#undef IDC_OPTIONS_PP_BLOOM_SLIDER
#define IDC_OPTIONS_PP_BLOOM_SLIDER          1311
#undef IDC_OPTIONS_PP_BLOOM_VALUE
#define IDC_OPTIONS_PP_BLOOM_VALUE           1312
#undef IDC_OPTIONS_PP_ROTBLUR_SLIDER
#define IDC_OPTIONS_PP_ROTBLUR_SLIDER        1313
#undef IDC_OPTIONS_PP_ROTBLUR_VALUE
#define IDC_OPTIONS_PP_ROTBLUR_VALUE         1314
#undef IDC_OPTIONS_PP_RADIALBLUR_SLIDER
#define IDC_OPTIONS_PP_RADIALBLUR_SLIDER     1315
#undef IDC_OPTIONS_PP_RADIALBLUR_VALUE
#define IDC_OPTIONS_PP_RADIALBLUR_VALUE      1316
#undef IDC_OPTIONS_PP_DOF_SLIDER
#define IDC_OPTIONS_PP_DOF_SLIDER            1317
#undef IDC_OPTIONS_PP_DOF_VALUE
#define IDC_OPTIONS_PP_DOF_VALUE             1318
#undef IDC_OPTIONS_PP_CAUSTICS
#define IDC_OPTIONS_PP_CAUSTICS              1319
#undef IDC_OPTIONS_PP_SHARPEN_SLIDER
#define IDC_OPTIONS_PP_SHARPEN_SLIDER        1320
#undef IDC_OPTIONS_PP_SHARPEN_VALUE
#define IDC_OPTIONS_PP_SHARPEN_VALUE         1321
#undef IDC_OPTIONS_PP_COLOR_CORRECTIONS
#define IDC_OPTIONS_PP_COLOR_CORRECTIONS     1322
#undef IDC_OPTIONS_PP_BRIGHTNESS_SLIDER
#define IDC_OPTIONS_PP_BRIGHTNESS_SLIDER     1323
#undef IDC_OPTIONS_PP_BRIGHTNESS_VALUE
#define IDC_OPTIONS_PP_BRIGHTNESS_VALUE      1324
#undef IDC_OPTIONS_PP_CONTRAST_SLIDER
#define IDC_OPTIONS_PP_CONTRAST_SLIDER       1325
#undef IDC_OPTIONS_PP_CONTRAST_VALUE
#define IDC_OPTIONS_PP_CONTRAST_VALUE        1326
#undef IDC_OPTIONS_PP_SATURATION_SLIDER
#define IDC_OPTIONS_PP_SATURATION_SLIDER     1327
#undef IDC_OPTIONS_PP_SATURATION_VALUE
#define IDC_OPTIONS_PP_SATURATION_VALUE      1328

#undef IDC_OPTIONS_VIDEO_FPS_TEXT
#define IDC_OPTIONS_VIDEO_FPS_TEXT           1400
#undef IDC_OPTIONS_VIDEO_PERF_WARNING
#define IDC_OPTIONS_VIDEO_PERF_WARNING       1401


#undef IDC_OPTIONS_LANGUAGE
#define IDC_OPTIONS_LANGUAGE          135

#undef IDC_OPTIONS_IGUISIZE
#define IDC_OPTIONS_IGUISIZE          136
#undef IDC_OPTIONS_IGUISIZE_LABEL
#define IDC_OPTIONS_IGUISIZE_LABEL    1014
#undef IDC_OPTIONS_IGUISIZE_TEXT
#define IDC_OPTIONS_IGUISIZE_TEXT     137
#undef IDC_OPTIONS_HEADBOB
#define IDC_OPTIONS_HEADBOB           138

#undef IDC_VRAM_VALUE
#define IDC_VRAM_VALUE                139

#undef IDC_VSYNC_VALUE
#define IDC_VSYNC_VALUE               140
#undef IDC_OPTIONS_IMPERIALUNITS
#define IDC_OPTIONS_IMPERIALUNITS     141
#undef IDC_OPTIONS_VEHICLEFREELOOK
#define IDC_OPTIONS_VEHICLEFREELOOK   142
#undef IDC_OPTIONS_STREAM_FRIENDLY
#define IDC_OPTIONS_STREAM_FRIENDLY   143
#undef IDC_OPTIONS_ADAPTIVE_CROSSHAIR
#define IDC_OPTIONS_ADAPTIVE_CROSSHAIR      144
#undef IDC_OPTIONS_INSTRUCTOR_FIGURE
#define IDC_OPTIONS_INSTRUCTOR_FIGURE       145
#undef IDC_OPTIONS_ENABLE_RTD
#define IDC_OPTIONS_ENABLE_RTD              146
#undef IDC_OPTIONS_ALLOW_FULL_RTD_HUD
#define IDC_OPTIONS_ALLOW_FULL_RTD_HUD      147
#undef IDC_OPTIONS_ALLOW_ROUGH_LANDING_RTD
#define IDC_OPTIONS_ALLOW_ROUGH_LANDING_RTD 148
#undef IDC_OPTIONS_WIND_INFLUENCE_DYN_RTD
#define IDC_OPTIONS_WIND_INFLUENCE_DYN_RTD  149
#undef IDC_OPTIONS_AUTO_TRIM_RTD
#define IDC_OPTIONS_AUTO_TRIM_RTD           150
#undef IDC_OPTIONS_STRESS_DAMAGE_RTD
#define IDC_OPTIONS_STRESS_DAMAGE_RTD       151

#undef IDC_PARTICLES_EFFECTS
#define IDC_PARTICLES_EFFECTS         143
#undef IDC_OPTIONS_DYNAMIC_LIGHTS
#define IDC_OPTIONS_DYNAMIC_LIGHTS    144

#undef IDC_OPTIONS_SLIDER_FILLRATE
#define IDC_OPTIONS_SLIDER_FILLRATE   1234
#undef IDC_OPTIONS_VALUE_FILLRATE
#define IDC_OPTIONS_VALUE_FILLRATE    1236


#undef IDC_OPTIONS_MUSIC_VALUE
#define IDC_OPTIONS_MUSIC_VALUE       101
#undef IDC_OPTIONS_MUSIC_SLIDER
#define IDC_OPTIONS_MUSIC_SLIDER      102
#undef IDC_OPTIONS_EFFECTS_VALUE
#define IDC_OPTIONS_EFFECTS_VALUE     103
#undef IDC_OPTIONS_EFFECTS_SLIDER
#define IDC_OPTIONS_EFFECTS_SLIDER    104
#undef IDC_OPTIONS_VOICES_VALUE
#define IDC_OPTIONS_VOICES_VALUE      105
#undef IDC_OPTIONS_VOICES_SLIDER
#define IDC_OPTIONS_VOICES_SLIDER     106
#undef IDC_OPTIONS_SAMPLING
#define IDC_OPTIONS_SAMPLING          107
#undef IDC_OPTIONS_HWACC
#define IDC_OPTIONS_HWACC             108
#undef IDC_OPTIONS_EAX
#define IDC_OPTIONS_EAX               109
#undef IDC_OPTIONS_SINGLE_VOICE
#define IDC_OPTIONS_SINGLE_VOICE      110
#undef IDC_OPTIONS_AUDIO_DEFAULT
#define IDC_OPTIONS_AUDIO_DEFAULT     111
#undef IDC_OPTIONS_PLAYER_VOICE
#define IDC_OPTIONS_PLAYER_VOICE      112
#undef IDC_OPTIONS_VON_VALUE
#define IDC_OPTIONS_VON_VALUE         113
#undef IDC_OPTIONS_VON_SLIDER
#define IDC_OPTIONS_VON_SLIDER        114
//samples setting was replaced by audio output device
#undef IDC_OPTIONS_SAMPLES_VALUE
#define IDC_OPTIONS_SAMPLES_VALUE     115
#undef IDC_OPTIONS_SAMPLES_SLIDER
#define IDC_OPTIONS_SAMPLES_SLIDER    116

#undef IDC_OPTIONS_AUDIO_OUTPUT_REFRESH
#define IDC_OPTIONS_AUDIO_OUTPUT_REFRESH  115
#undef IDC_OPTIONS_AUDIO_OUTPUT_COMBO
#define IDC_OPTIONS_AUDIO_OUTPUT_COMBO    116

#undef IDC_OPTIONS_MIC_SENS_SLIDER
#define IDC_OPTIONS_MIC_SENS_SLIDER   117
#undef IDC_OPTIONS_MIC_ADJUST
#define IDC_OPTIONS_MIC_ADJUST        118

#undef IDC_OPTIONS_MAPDUCKING_VALUE
#define IDC_OPTIONS_MAPDUCKING_VALUE  119
#undef IDC_OPTIONS_MAPDUCKING_SLIDER
#define IDC_OPTIONS_MAPDUCKING_SLIDER 120

// microphone adjustment
#undef IDC_OPTIONS_MIC_PROGRESS_BAR
#define IDC_OPTIONS_MIC_PROGRESS_BAR    1001
#undef IDC_OPTIONS_MIC_PROGRESS
#define IDC_OPTIONS_MIC_PROGRESS        1002

#undef IDC_OPTIONS_SUBTITLES
#define IDC_OPTIONS_SUBTITLES         102
#undef IDC_OPTIONS_RADIO
#define IDC_OPTIONS_RADIO             103

#undef IDC_DIFF_AI_LEVEL_TEXT
#define IDC_DIFF_AI_LEVEL_TEXT        1510
#undef IDC_DIFF_AI_LEVEL
#define IDC_DIFF_AI_LEVEL             1511
#undef IDC_DIFF_AI_SKILL_LABEL
#define IDC_DIFF_AI_SKILL_LABEL       1512
#undef IDC_DIFF_AI_SKILL_SLIDER
#define IDC_DIFF_AI_SKILL_SLIDER      1513
#undef IDC_DIFF_AI_SKILL_VALUE
#define IDC_DIFF_AI_SKILL_VALUE       1514
#undef IDC_DIFF_AI_PRECISION_LABEL
#define IDC_DIFF_AI_PRECISION_LABEL   1515
#undef IDC_DIFF_AI_PRECISION_SLIDER
#define IDC_DIFF_AI_PRECISION_SLIDER  1516
#undef IDC_DIFF_AI_PRECISION_VALUE
#define IDC_DIFF_AI_PRECISION_VALUE   1517
#undef IDC_DIFF_PICTURE
#define IDC_DIFF_PICTURE              1518
#undef IDC_DIFF_DESCRIPTION
#define IDC_DIFF_DESCRIPTION          1519
#undef IDC_DIFF_OPTIONS_GROUP
#define IDC_DIFF_OPTIONS_GROUP        1520
#undef IDC_DIFF_REDUCED_DAMAGE
#define IDC_DIFF_REDUCED_DAMAGE       1521
#undef IDC_DIFF_GROUP_INDICATORS
#define IDC_DIFF_GROUP_INDICATORS     1522
#undef IDC_DIFF_FRIENDLY_TAG
#define IDC_DIFF_FRIENDLY_TAG         1523
#undef IDC_DIFF_ENEMY_TAG
#define IDC_DIFF_ENEMY_TAG            1524
#undef IDC_DIFF_MINES
#define IDC_DIFF_MINES                1525
#undef IDC_DIFF_COMMANDS
#define IDC_DIFF_COMMANDS             1526
#undef IDC_DIFF_WAYPOINTS
#define IDC_DIFF_WAYPOINTS            1527
#undef IDC_DIFF_WEAPON_INFO
#define IDC_DIFF_WEAPON_INFO          1528
#undef IDC_DIFF_STANCE_INDICATOR
#define IDC_DIFF_STANCE_INDICATOR     1529
#undef IDC_DIFF_STAMINA_BAR
#define IDC_DIFF_STAMINA_BAR          1530
#undef IDC_DIFF_CROSSHAIR
#define IDC_DIFF_CROSSHAIR            1531
#undef IDC_DIFF_VISION_AID
#define IDC_DIFF_VISION_AID           1532
#undef IDC_DIFF_THIRD_PERSON
#define IDC_DIFF_THIRD_PERSON         1533
#undef IDC_DIFF_CAMERA_SHAKE
#define IDC_DIFF_CAMERA_SHAKE         1534
#undef IDC_DIFF_SCORE_TABLE
#define IDC_DIFF_SCORE_TABLE          1535
#undef IDC_DIFF_KILLED_BY
#define IDC_DIFF_KILLED_BY            1536
#undef IDC_DIFF_VON_ID
#define IDC_DIFF_VON_ID               1537
#undef IDC_DIFF_EXTENDED_MAP_FRIENDLY
#define IDC_DIFF_EXTENDED_MAP_FRIENDLY  1538
#undef IDC_DIFF_AUTO_REPORT
#define IDC_DIFF_AUTO_REPORT          1539
#undef IDC_DIFF_MULTIPLE_SAVES
#define IDC_DIFF_MULTIPLE_SAVES       1540
#undef IDC_DIFF_SQUAD_RADAR
// #define IDC_DIFF_SQUAD_RADAR          1541
#undef IDC_DIFF_TACTICAL_PING
#define IDC_DIFF_TACTICAL_PING        1542
#undef IDC_DIFF_EXTENDED_MAP_ENEMY
#define IDC_DIFF_EXTENDED_MAP_ENEMY   1543
#undef IDC_DIFF_EXTENDED_MAP_MINES
#define IDC_DIFF_EXTENDED_MAP_MINES   1544
#undef IDC_DIFF_MINIMAP_ALLOWED
#define IDC_DIFF_MINIMAP_ALLOWED	  1545
#undef IDC_DIFF_EXTENDED_MAP_PING
#define IDC_DIFF_EXTENDED_MAP_PING    1546

// Configure display controls
#undef IDC_CONFIG_DEFAULT
#define IDC_CONFIG_DEFAULT            101
#undef IDC_CONFIG_KEYS
#define IDC_CONFIG_KEYS               102
#undef IDC_CONFIG_XAXIS
#define IDC_CONFIG_XAXIS              103
#undef IDC_CONFIG_YAXIS
#define IDC_CONFIG_YAXIS              104
#undef IDC_CONFIG_YREVERSED
#define IDC_CONFIG_YREVERSED          105
#undef IDC_CONFIG_JOYSTICK
#define IDC_CONFIG_JOYSTICK           106
#undef IDC_CONFIG_BUTTONS
#define IDC_CONFIG_BUTTONS            107
#undef IDC_CONFIG_CONTROLS_PAGE
#define IDC_CONFIG_CONTROLS_PAGE      108
#undef IDC_CONFIG_FLOATING_ZONE
#define IDC_CONFIG_FLOATING_ZONE      109
#undef IDC_CONFIG_MOUSE_FILTERING
#define IDC_CONFIG_MOUSE_FILTERING    110
#undef IDC_CONFIG_GEARBOX_MODE
#define IDC_CONFIG_GEARBOX_MODE       112
#undef IDC_CONFIG_MOUSE_ACCELERATION
#define IDC_CONFIG_MOUSE_ACCELERATION 113
#undef IDC_CONFIG_KEY_PRESETS
#define IDC_CONFIG_KEY_PRESETS        114

// dialog for selecting default controls preset
#undef IDC_CONFIG_DEFAULTCONTROLS_LIST
#define IDC_CONFIG_DEFAULTCONTROLS_LIST 101

// Multiplayer type display controls
#undef IDC_MP_TYPE_RANKED_MATCH
#define IDC_MP_TYPE_RANKED_MATCH      101
#undef IDC_MP_TYPE_PLAYER_MATCH
#define IDC_MP_TYPE_PLAYER_MATCH      102
#undef IDC_MP_TYPE_SYSTEM_LINK
#define IDC_MP_TYPE_SYSTEM_LINK       103
#undef IDC_MP_TYPE_FRIENDS
#define IDC_MP_TYPE_FRIENDS           104
#undef IDC_MP_TYPE_DOWNLOAD
#define IDC_MP_TYPE_DOWNLOAD          105
#undef IDC_MP_TYPE_INFO
#define IDC_MP_TYPE_INFO              106
#undef IDC_MP_TYPE_STATS
#define IDC_MP_TYPE_STATS             107
#undef IDC_MP_TYPE_SIGN_OUT
#define IDC_MP_TYPE_SIGN_OUT          108
#undef IDC_MP_TYPE_DEDICATED_SERVER
#define IDC_MP_TYPE_DEDICATED_SERVER  109
#undef IDC_MP_TYPE_SERVER
#define IDC_MP_TYPE_SERVER            110
#undef IDC_MP_TYPE_APPEAR_OFFLINE
#define IDC_MP_TYPE_APPEAR_OFFLINE    111

// Xbox Live display controls
#undef IDC_LIVE_QUICK_MATCH
#define IDC_LIVE_QUICK_MATCH          101
#undef IDC_LIVE_CUSTOM_MATCH
#define IDC_LIVE_CUSTOM_MATCH         102
#undef IDC_LIVE_CREATE_MATCH
#define IDC_LIVE_CREATE_MATCH         103

// Friends dialog
#undef IDC_FRIENDS_LIST
#define IDC_FRIENDS_LIST              101
#undef IDC_FRIENDS_STATUS
#define IDC_FRIENDS_STATUS            102

// Friends options dialog
#undef IDC_FRIENDS_PLAYER
#define IDC_FRIENDS_PLAYER            101
#undef IDC_FRIENDS_GAME_INVITE
#define IDC_FRIENDS_GAME_INVITE       102
#undef IDC_FRIENDS_GAME_CANCEL
#define IDC_FRIENDS_GAME_CANCEL       103
#undef IDC_FRIENDS_GAME_ACCEPT
#define IDC_FRIENDS_GAME_ACCEPT       104
#undef IDC_FRIENDS_GAME_DECLINE
#define IDC_FRIENDS_GAME_DECLINE      105
#undef IDC_FRIENDS_GAME_JOIN
#define IDC_FRIENDS_GAME_JOIN         106
#undef IDC_FRIENDS_ACCEPT
#define IDC_FRIENDS_ACCEPT            107
#undef IDC_FRIENDS_DECLINE
#define IDC_FRIENDS_DECLINE           108
#undef IDC_FRIENDS_STOP
#define IDC_FRIENDS_STOP              109
#undef IDC_FRIENDS_CANCEL
#define IDC_FRIENDS_CANCEL            110
#undef IDC_FRIENDS_REMOVE
#define IDC_FRIENDS_REMOVE            111
#undef IDC_FRIENDS_VOICE
#define IDC_FRIENDS_VOICE             112
#undef IDC_FRIENDS_FEEDBACK
#define IDC_FRIENDS_FEEDBACK          113
#undef IDC_FRIENDS_GAME_INVITE_VOICE
#define IDC_FRIENDS_GAME_INVITE_VOICE 114
#undef IDC_FRIENDS_PLAY_MESSAGE
#define IDC_FRIENDS_PLAY_MESSAGE      115
#undef IDC_FRIENDS_MISSIONS
#define IDC_FRIENDS_MISSIONS          152
#undef IDC_MULTI_BATTLEYE_FILTER
#define IDC_MULTI_BATTLEYE_FILTER     154
#undef IDC_MULTI_EXPANSIONS_FILTER
#define IDC_MULTI_EXPANSIONS_FILTER   155

// Send voice mail dialog
#undef IDC_SVM_TITLE
#define IDC_SVM_TITLE                 101
#undef IDC_SVM_PLAYER
#define IDC_SVM_PLAYER                102
#undef IDC_SVM_RECORD
#define IDC_SVM_RECORD                103
#undef IDC_SVM_PLAY
#define IDC_SVM_PLAY                  104
#undef IDC_SVM_SEND
#define IDC_SVM_SEND                  105
#undef IDC_SVM_PROGRESS
#define IDC_SVM_PROGRESS              106
#undef IDC_SVM_TIME
#define IDC_SVM_TIME                  107

// Receive voice mail dialog
#undef IDC_RVM_TITLE
#define IDC_RVM_TITLE                 101
#undef IDC_RVM_PLAYER
#define IDC_RVM_PLAYER                102
#undef IDC_RVM_PLAY
#define IDC_RVM_PLAY                  103
#undef IDC_RVM_FEEDBACK
#define IDC_RVM_FEEDBACK              104
#undef IDC_RVM_PROGRESS
#define IDC_RVM_PROGRESS              105
#undef IDC_RVM_TIME
#define IDC_RVM_TIME                  106

// Xbox players dialog
#undef IDC_XPLAYERS_LIST
#define IDC_XPLAYERS_LIST             101
#undef IDC_XPLAYERS_STATUS
#define IDC_XPLAYERS_STATUS           102
#undef IDC_XPLAYERS_DISABLE_VOICE
#define IDC_XPLAYERS_DISABLE_VOICE    103
#undef IDC_XPLAYERS_ENABLE_VOICE
#define IDC_XPLAYERS_ENABLE_VOICE     104
#undef IDC_XPLAYERS_KICKOFF
#define IDC_XPLAYERS_KICKOFF          105

// Xbox players options dialog
#undef IDC_XPLAYERS_PLAYER
#define IDC_XPLAYERS_PLAYER           101
#undef IDC_XPLAYERS_ASK
#define IDC_XPLAYERS_ASK              102
#undef IDC_XPLAYERS_MUTE
#define IDC_XPLAYERS_MUTE             103
#undef IDC_XPLAYERS_FEEDBACK
#define IDC_XPLAYERS_FEEDBACK         104
#undef IDC_XPLAYERS_CANCEL
#define IDC_XPLAYERS_CANCEL           105
#undef IDC_XPLAYERS_ASK_VOICE
#define IDC_XPLAYERS_ASK_VOICE        107

// Feedback dialog
#undef IDC_FEEDBACK_PLAYER
#define IDC_FEEDBACK_PLAYER           101
#undef IDC_FEEDBACK_DATE
#define IDC_FEEDBACK_DATE             102
#undef IDC_FEEDBACK_GREAT_SESSION
#define IDC_FEEDBACK_GREAT_SESSION    103
#undef IDC_FEEDBACK_GOOD_ATTITUDE
#define IDC_FEEDBACK_GOOD_ATTITUDE    104
#undef IDC_FEEDBACK_BAD_NAME
#define IDC_FEEDBACK_BAD_NAME         105
#undef IDC_FEEDBACK_CURSING
#define IDC_FEEDBACK_CURSING          106
#undef IDC_FEEDBACK_SCREAM
#define IDC_FEEDBACK_SCREAM           107
#undef IDC_FEEDBACK_CHEAT
#define IDC_FEEDBACK_CHEAT            108
#undef IDC_FEEDBACK_THREAT
#define IDC_FEEDBACK_THREAT           109
#undef IDC_FEEDBACK_MSG_HARASSING
#define IDC_FEEDBACK_MSG_HARASSING    110
#undef IDC_FEEDBACK_MSG_OFFENSIVE
#define IDC_FEEDBACK_MSG_OFFENSIVE    111
#undef IDC_FEEDBACK_MSG_SPAM
#define IDC_FEEDBACK_MSG_SPAM         112

// Download content display controls
#undef IDC_DOWNLOAD_CONTENT_LIST
#define IDC_DOWNLOAD_CONTENT_LIST     101

#undef IDC_DOWNLOAD_CONTENT_TITLE
#define IDC_DOWNLOAD_CONTENT_TITLE          101
#undef IDC_DOWNLOAD_CONTENT_TERMS
#define IDC_DOWNLOAD_CONTENT_TERMS          102
#undef IDC_DOWNLOAD_CONTENT_PICTURE
#define IDC_DOWNLOAD_CONTENT_PICTURE        103
#undef IDC_DOWNLOAD_CONTENT_SHOW_PRICE
#define IDC_DOWNLOAD_CONTENT_SHOW_PRICE     104

#undef IDC_DOWNLOAD_CONTENT_PRICE_TITLE
#define IDC_DOWNLOAD_CONTENT_PRICE_TITLE    101
#undef IDC_DOWNLOAD_CONTENT_PRICE
#define IDC_DOWNLOAD_CONTENT_PRICE          102
#undef IDC_DOWNLOAD_CONTENT_PRICE_QUESTION
#define IDC_DOWNLOAD_CONTENT_PRICE_QUESTION 103

#undef IDC_INSTALL_CONTENT_PROGRESS
#define IDC_INSTALL_CONTENT_PROGRESS  101
#undef IDC_INSTALL_CONTENT_NAME
#define IDC_INSTALL_CONTENT_NAME      102
#undef IDC_INSTALL_CONTENT_TIME
#define IDC_INSTALL_CONTENT_TIME      103

// Multiplayer passcode display controls
#undef IDC_MP_PASSCODE_FIRST
#define IDC_MP_PASSCODE_FIRST         101

// Multiplayer display controls
#undef IDC_MULTI_TITLE
#define IDC_MULTI_TITLE               101
#undef IDC_MULTI_SESSIONS
#define IDC_MULTI_SESSIONS            102
#undef IDC_MULTI_REMOTE
//#define IDC_MULTI_REMOTE            103 //Renamed to IDC_MULTI_TAB_DIRECT_CONNECT
#undef IDC_MULTI_NEW
//#define IDC_MULTI_NEW               104 //Renamed to IDC_MULTI_TAB_HOST_SERVER
#undef IDC_MULTI_JOIN
#define IDC_MULTI_JOIN                105
#undef IDC_MULTI_NOTEBOOK
#define IDC_MULTI_NOTEBOOK            106
#undef IDC_MULTI_PASSWORD
#define IDC_MULTI_PASSWORD            107
#undef IDC_MULTI_PORT
#define IDC_MULTI_PORT                108
#undef IDC_MULTI_SERVER_ICON
#define IDC_MULTI_SERVER_ICON         111
#undef IDC_MULTI_SERVER_COLUMN
#define IDC_MULTI_SERVER_COLUMN       112
#undef IDC_MULTI_MISSION_ICON
#define IDC_MULTI_MISSION_ICON        113
#undef IDC_MULTI_MISSION_COLUMN
#define IDC_MULTI_MISSION_COLUMN      114
#undef IDC_MULTI_STATE_ICON
#define IDC_MULTI_STATE_ICON          115
#undef IDC_MULTI_STATE_COLUMN
#define IDC_MULTI_STATE_COLUMN        116
#undef IDC_MULTI_PLAYERS_ICON
#define IDC_MULTI_PLAYERS_ICON        117
#undef IDC_MULTI_PLAYERS_COLUMN
#define IDC_MULTI_PLAYERS_COLUMN      118
#undef IDC_MULTI_PING_ICON
#define IDC_MULTI_PING_ICON           119
#undef IDC_MULTI_PING_COLUMN
#define IDC_MULTI_PING_COLUMN         120
#undef IDC_MULTI_PROGRESS
#define IDC_MULTI_PROGRESS            121
#undef IDC_MULTI_INTERNET
#define IDC_MULTI_INTERNET            122
#undef IDC_MULTI_REFRESH
#define IDC_MULTI_REFRESH             123
#undef IDC_MULTI_FILTER
#define IDC_MULTI_FILTER              124
#undef IDC_MULTI_SERVER_FILTER
#define IDC_MULTI_SERVER_FILTER       125
#undef IDC_MULTI_MISSION_FILTER
#define IDC_MULTI_MISSION_FILTER      126
#undef IDC_MULTI_PLAYERS_FILTER
#define IDC_MULTI_PLAYERS_FILTER      127
#undef IDC_MULTI_PING_FILTER
#define IDC_MULTI_PING_FILTER         128
#undef IDC_MP_HOST
#define IDC_MP_HOST                   129
#undef IDC_MP_TYPE
#define IDC_MP_TYPE                   130
#undef IDC_MP_MISSION
#define IDC_MP_MISSION                131
#undef IDC_MP_ISLAND
#define IDC_MP_ISLAND                 132
#undef IDC_MP_STATE
#define IDC_MP_STATE                  133
#undef IDC_MP_TIMELEFT
#define IDC_MP_TIMELEFT               134
#undef IDC_MP_SLOTS_PUBLIC
#define IDC_MP_SLOTS_PUBLIC           135
#undef IDC_MP_SLOTS_PRIVATE
#define IDC_MP_SLOTS_PRIVATE          136
#undef IDC_MP_NO_SESSION
#define IDC_MP_NO_SESSION             137
#undef IDC_MP_DIFFICULTY
#define IDC_MP_DIFFICULTY             138
#undef IDC_MP_LANGUAGE
#define IDC_MP_LANGUAGE               139
#undef IDC_MULTI_GAMETYPE_ICON
#define IDC_MULTI_GAMETYPE_ICON       140
#undef IDC_MULTI_GAMETYPE_COLUMN
#define IDC_MULTI_GAMETYPE_COLUMN     141
#undef IDC_MP_PING
#define IDC_MP_PING                   142
#undef IDC_MP_PASSWORD
#define IDC_MP_PASSWORD               143
#undef IDC_MP_PLATFORM
#define IDC_MP_PLATFORM               144
#undef IDC_MP_COUNTRY
#define IDC_MP_COUNTRY                145
#undef IDC_MP_VERSION
#define IDC_MP_VERSION                146
#undef IDC_MP_VERSION_REQUIRED
#define IDC_MP_VERSION_REQUIRED       147
#undef IDC_MP_MODS
#define IDC_MP_MODS                   148
#undef IDC_MP_PLAYERS_ROW
#define IDC_MP_PLAYERS_ROW            149
#undef IDC_MULTI_PASSWORDED_FILTER
#define IDC_MULTI_PASSWORDED_FILTER   150
#undef IDC_MULTI_FULL_FILTER
#define IDC_MULTI_FULL_FILTER         151
#undef IDC_MULTI_TYPE_FILTER
#define IDC_MULTI_TYPE_FILTER         152
#undef IDC_MP_NEXT_SESSION
#define IDC_MP_NEXT_SESSION           153
#undef IDC_MULTI_BATTLEYE_FILTER
#define IDC_MULTI_BATTLEYE_FILTER     154
#undef IDC_MULTI_EXPANSIONS_FILTER
#define IDC_MULTI_EXPANSIONS_FILTER   155
#undef IDC_MULTI_FAVORITE_COLUMN
#define IDC_MULTI_FAVORITE_COLUMN     156
#undef IDC_MULTI_FAVORITE_ICON
#define IDC_MULTI_FAVORITE_ICON       157
#undef IDC_MULTI_SERVER_COUNT
#define IDC_MULTI_SERVER_COUNT        158
#undef IDC_MULTI_TAB_INTERNET
#define IDC_MULTI_TAB_INTERNET        159
#undef IDC_MULTI_TAB_RECENT
#define IDC_MULTI_TAB_RECENT          160
#undef IDC_MULTI_TAB_LAN
#define IDC_MULTI_TAB_LAN             161
#undef IDC_MULTI_TAB_FRIENDS
#define IDC_MULTI_TAB_FRIENDS         162
#undef IDC_MULTI_TAB_OFFICIAL
#define IDC_MULTI_TAB_OFFICIAL        163  //Changed 164 to 163
#undef IDC_MULTI_TAB_QUICK_PLAY
#define IDC_MULTI_TAB_QUICK_PLAY      164  //IDC_MULTI_QUICK_PLAY renamed to IDC_MULTI_TAB_OFFICIAL, changed to 164
#undef IDC_MULTI_TAB_SERVERS
#define IDC_MULTI_TAB_SERVERS         165  //IDC_MULTI_SERVERS renamed to IDC_MULTI_TAB_SERVERS, changed to 165
#undef IDC_MULTI_TAB_DIRECT_CONNECT
#define IDC_MULTI_TAB_DIRECT_CONNECT  166  //IDC_MULTI_REMOTE 103 renamed and changed to IDC_MULTI_TAB_DIRECT_CONNECT
#undef IDC_MULTI_TAB_HOST_SERVER
#define IDC_MULTI_TAB_HOST_SERVER     167  //IDC_MULTI_NEW    104 renamed and changed to IDC_MULTI_TAB_HOST_SERVER
#undef IDC_MULTI_LAUNCHER
#define IDC_MULTI_LAUNCHER            168  //Launcher button
#undef IDC_MP_FILEPATCHING
#define IDC_MP_FILEPATCHING           169

//MP Quick Play dialogue
#undef IDC_MP_QUICK_GAME_TYPE
#define IDC_MP_QUICK_GAME_TYPE        110
#undef IDC_MP_QUICK_MAX_PING
#define IDC_MP_QUICK_MAX_PING         111
#undef IDC_MP_QUICK_BEST_SERVER
#define IDC_MP_QUICK_BEST_SERVER      112
#undef IDC_MP_QUICK_FIND_SERVER
#define IDC_MP_QUICK_FIND_SERVER      113
#undef IDC_MP_QUICK_SHOW_SERVERS
#define IDC_MP_QUICK_SHOW_SERVERS     114
#undef IDC_MP_QUICK_SHOW_SERVERS
#define IDC_MP_QUICK_SHOW_SERVERS     114
#undef IDC_MP_QUICK_MODE_TITLE
#define IDC_MP_QUICK_MODE_TITLE       115
#undef IDC_MP_QUICK_MODE_PICTURE
#define IDC_MP_QUICK_MODE_PICTURE     116
#undef IDC_MP_QUICK_MODE_DESCRIPTION
#define IDC_MP_QUICK_MODE_DESCRIPTION 117
#undef IDC_MP_QUICK_MODE_BACKGROUND
#define IDC_MP_QUICK_MODE_BACKGROUND  118

//Server Search dialogue
#undef IDC_MP_SERVER_SEARCH_STATUS
#define IDC_MP_SERVER_SEARCH_STATUS   101
#undef IDC_MP_SERVER_SEARCH_PROGRESS
#define IDC_MP_SERVER_SEARCH_PROGRESS 102

//Server Found dialogue
#undef IDC_MP_SERVER_FOUND_COUNTDOWN
#define IDC_MP_SERVER_FOUND_COUNTDOWN     101
#undef IDC_MP_SERVER_FOUND_MISSION
#define IDC_MP_SERVER_FOUND_MISSION       102
#undef IDC_MP_SERVER_FOUND_GAME_TYPE
#define IDC_MP_SERVER_FOUND_GAME_TYPE     103
#undef IDC_MP_SERVER_FOUND_PLAYERS
#define IDC_MP_SERVER_FOUND_PLAYERS       104
#undef IDC_MP_SERVER_FOUND_BUTTON_NEXT
#define IDC_MP_SERVER_FOUND_BUTTON_NEXT   105
#undef IDC_MP_SERVER_FOUND_BUTTON_JOIN
#define IDC_MP_SERVER_FOUND_BUTTON_JOIN   106

#undef IDC_OPTIMATCH_FILTER_SPEED
#define IDC_OPTIMATCH_FILTER_SPEED        101
#undef IDC_OPTIMATCH_FILTER_TYPE
#define IDC_OPTIMATCH_FILTER_TYPE         102
#undef IDC_OPTIMATCH_FILTER_MIN_PLAYERS
#define IDC_OPTIMATCH_FILTER_MIN_PLAYERS  103
#undef IDC_OPTIMATCH_FILTER_MAX_PLAYERS
#define IDC_OPTIMATCH_FILTER_MAX_PLAYERS  104
#undef IDC_OPTIMATCH_FILTER_LANGUAGE
#define IDC_OPTIMATCH_FILTER_LANGUAGE     105
#undef IDC_OPTIMATCH_FILTER_DIFFICULTY
#define IDC_OPTIMATCH_FILTER_DIFFICULTY   106

#undef IDC_PASSWORD
#define IDC_PASSWORD                  101

#undef IDC_IP_ADDRESS
#define IDC_IP_ADDRESS                101
#undef IDC_IP_PORT
#define IDC_IP_PORT                   102

#undef IDC_PORT_PORT
#define IDC_PORT_PORT                 101

#undef IDC_FILTER_SERVER
#define IDC_FILTER_SERVER             101
#undef IDC_FILTER_MISSION
#define IDC_FILTER_MISSION            102
#undef IDC_FILTER_MAXPING
#define IDC_FILTER_MAXPING            103
#undef IDC_FILTER_MINPLAYERS
#define IDC_FILTER_MINPLAYERS         104
#undef IDC_FILTER_MAXPLAYERS
#define IDC_FILTER_MAXPLAYERS         105
#undef IDC_FILTER_FULL
#define IDC_FILTER_FULL               106
#undef IDC_FILTER_PASSWORDED
#define IDC_FILTER_PASSWORDED         107
#undef IDC_FILTER_DEFAULT
#define IDC_FILTER_DEFAULT            108
#undef IDC_FILTER_TYPE
#define IDC_FILTER_TYPE               109
#undef IDC_FILTER_BATTLEYE
#define IDC_FILTER_BATTLEYE           110
#undef IDC_FILTER_EXPANSIONS
#define IDC_FILTER_EXPANSIONS         111
#undef IDC_FILTER_MONETIZED
#define IDC_FILTER_MONETIZED          112

#undef IDC_CLIENT_TEXT
#define IDC_CLIENT_TEXT               101
#undef IDC_CLIENT_PLAYERS
#define IDC_CLIENT_PLAYERS            102
#undef IDC_CLIENT_PROGRESS
#define IDC_CLIENT_PROGRESS           103

#undef IDC_SERVER_ISLAND
#define IDC_SERVER_ISLAND             101
#undef IDC_SERVER_MISSION
#define IDC_SERVER_MISSION            102
#undef IDC_SERVER_EDITOR
#define IDC_SERVER_EDITOR             103
#undef IDC_SERVER_DIFF
#define IDC_SERVER_DIFF               104
#undef IDC_SERVER_PLAYERS
#define IDC_SERVER_PLAYERS            105
#undef IDC_SERVER_GAMETYPE
#define IDC_SERVER_GAMETYPE           106
#undef IDC_SERVER_SLOTS
#define IDC_SERVER_SLOTS              107
#undef IDC_SERVER_SLOTS_PRIVATE
#define IDC_SERVER_SLOTS_PRIVATE      108
#undef IDC_SERVER_SLOTS_PUBLIC
#define IDC_SERVER_SLOTS_PUBLIC       109
#undef IDC_SERVER_MIN_PLAYERS
#define IDC_SERVER_MIN_PLAYERS        110
#undef IDC_SERVER_MAX_PLAYERS
#define IDC_SERVER_MAX_PLAYERS        111
#undef IDC_SERVER_SLOTS_PRIVATE_TITLE
#define IDC_SERVER_SLOTS_PRIVATE_TITLE  112
#undef IDC_SERVER_SLOTS_PRIVATE_TEXT
#define IDC_SERVER_SLOTS_PRIVATE_TEXT   112
#undef IDC_SERVER_SLOTS_PUBLIC_TITLE
#define IDC_SERVER_SLOTS_PUBLIC_TITLE   113
#undef IDC_SERVER_SLOTS_PUBLIC_TEXT
#define IDC_SERVER_SLOTS_PUBLIC_TEXT    113
#undef IDC_SERVER_SLOTS_PUBLIC_VALUE
#define IDC_SERVER_SLOTS_PUBLIC_VALUE   114
#undef IDC_SERVER_SLOTS_PRIVATE_VALUE
#define IDC_SERVER_SLOTS_PRIVATE_VALUE  115
#undef IDC_SERVER_VOTED_MISSIONS
#define IDC_SERVER_VOTED_MISSIONS       116
#undef IDC_SERVER_PLAYERS_TITLE
#define IDC_SERVER_PLAYERS_TITLE        117
#undef IDC_SERVER_TIMEOUT
#define IDC_SERVER_TIMEOUT              118
#undef IDC_SERVER_VOTED_DIFFICULTY
#define IDC_SERVER_VOTED_DIFFICULTY     119
#undef IDC_SERVER_DELETE
#define IDC_SERVER_DELETE               120
#undef IDC_SERVER_COPY
#define IDC_SERVER_COPY                 121
#undef IDC_SERVER_EDIT
#define IDC_SERVER_EDIT                 122
#undef IDC_SERVER_LOAD
#define IDC_SERVER_LOAD                 123
#undef IDC_SERVER_PRIVATE_SLOTS_TITLE
#define IDC_SERVER_PRIVATE_SLOTS_TITLE  124
#undef IDC_SERVER_PRIVATE_SLOTS_VALUE
#define IDC_SERVER_PRIVATE_SLOTS_VALUE  125
#undef IDC_SERVER_PRIVATE_SLOTS
#define IDC_SERVER_PRIVATE_SLOTS        126
#undef IDC_SERVER_MAXIMUM_SLOTS_TITLE
#define IDC_SERVER_MAXIMUM_SLOTS_TITLE  127
#undef IDC_SERVER_MAXIMUM_SLOTS
#define IDC_SERVER_MAXIMUM_SLOTS        128
#undef IDC_SERVER_MAXIMUM_SLOTS_VALUE
#define IDC_SERVER_MAXIMUM_SLOTS_VALUE  129
#undef IDC_SERVER_MI_OVERVIEW
#define IDC_SERVER_MI_OVERVIEW          130
#undef IDC_SERVER_MI_GAMETYPE
#define IDC_SERVER_MI_GAMETYPE          131
#undef IDC_SERVER_MI_MAX_PLAYERS
#define IDC_SERVER_MI_MAX_PLAYERS       132
#undef IDC_SERVER_MI_RESPAWN
#define IDC_SERVER_MI_RESPAWN           133
#undef IDC_SERVER_MI_MIN_PLAYERS
#define IDC_SERVER_MI_MIN_PLAYERS       134
#undef IDC_SERVER_SHOW_MISSION_WORKSHOP
#define IDC_SERVER_SHOW_MISSION_WORKSHOP  135
#undef IDC_SERVER_SHOW_GAME_WORKSHOP
#define IDC_SERVER_SHOW_GAME_WORKSHOP   136
#undef IDC_SERVER_MI_NAME
#define IDC_SERVER_MI_NAME              137
#undef IDC_SERVER_MI_AUTHOR
#define IDC_SERVER_MI_AUTHOR            138
#undef IDC_SERVER_MI_PICTURE
#define IDC_SERVER_MI_PICTURE           139
#undef IDC_SERVER_MI_DESCRIPTION
#define IDC_SERVER_MI_DESCRIPTION       140
#undef IDC_SERVER_LOADING_PICTURE
#define IDC_SERVER_LOADING_PICTURE      141
#undef IDC_SERVER_GAME_OR_MISSION_WORKSHOP
#define IDC_SERVER_GAME_OR_MISSION_WORKSHOP 142
#undef IDC_SERVER_ISLAND_TITLE
#define IDC_SERVER_ISLAND_TITLE         143
#undef IDC_SERVER_MISSION_TITLE
#define IDC_SERVER_MISSION_TITLE        144
#undef IDC_SERVER_DIFF_INDICATOR
#define IDC_SERVER_DIFF_INDICATOR       145
#undef IDC_SERVER_PURCHASE_BUTTON
#define IDC_SERVER_PURCHASE_BUTTON      146


#undef IDC_REQUIRED_BATTLEYE
#define IDC_REQUIRED_BATTLEYE           201

// _VBS3
#undef IDC_AAR_SERVER
#define IDC_AAR_SERVER                  121
#undef IDC_AAR_SERVER_FILES
#define IDC_AAR_SERVER_FILES            122
#undef IDC_AAR_DOWNLOADPROGRESS
#define IDC_AAR_DOWNLOADPROGRESS        123
#undef IDC_AAR_DOWNLOADSTART
#define IDC_AAR_DOWNLOADSTART           124
#undef IDC_AAR_DOWNLOADSTOP
#define IDC_AAR_DOWNLOADSTOP            125

// Host settings dialog
#undef IDC_HOST_NAME
#define IDC_HOST_NAME                   101
#undef IDC_HOST_PASSWORD
#define IDC_HOST_PASSWORD               102
#undef IDC_HOST_MAX_PLAYERS
#define IDC_HOST_MAX_PLAYERS            103
#undef IDC_HOST_PRIVATE
#define IDC_HOST_PRIVATE                104
#undef IDC_HOST_PORT
#define IDC_HOST_PORT                   105
#undef IDC_HOST_PORT_WARNING
#define IDC_HOST_PORT_WARNING           106
#undef IDC_HOST_UPNP
#define IDC_HOST_UPNP                   107

#undef IDC_DED_SERVER_SLOTS_PUBLIC
#define IDC_DED_SERVER_SLOTS_PUBLIC         101
#undef IDC_DED_SERVER_SLOTS_PUBLIC_TITLE
#define IDC_DED_SERVER_SLOTS_PUBLIC_TITLE   102
#undef IDC_DED_SERVER_SLOTS_PUBLIC_VALUE
#define IDC_DED_SERVER_SLOTS_PUBLIC_VALUE   103
#undef IDC_DED_SERVER_SLOTS_PRIVATE
#define IDC_DED_SERVER_SLOTS_PRIVATE        104
#undef IDC_DED_SERVER_SLOTS_PRIVATE_TITLE
#define IDC_DED_SERVER_SLOTS_PRIVATE_TITLE  105
#undef IDC_DED_SERVER_SLOTS_PRIVATE_VALUE
#define IDC_DED_SERVER_SLOTS_PRIVATE_VALUE  106

#undef IDC_WIZT_TEMPLATES
#define IDC_WIZT_TEMPLATES            101
#undef IDC_WIZT_OVERVIEW
#define IDC_WIZT_OVERVIEW             102
#undef IDC_WIZT_NAME
#define IDC_WIZT_NAME                 103

#undef IDC_WIZM_EDIT
#define IDC_WIZM_EDIT                 101

#undef IDC_SRVSETUP_PLAYERS
#define IDC_SRVSETUP_PLAYERS          101
#undef IDC_SRVSETUP_UNITS
#define IDC_SRVSETUP_UNITS            102
#undef IDC_SRVSETUP_ISLAND
#define IDC_SRVSETUP_ISLAND           103
#undef IDC_SRVSETUP_NAME
#define IDC_SRVSETUP_NAME             104
#undef IDC_SRVSETUP_DESC
#define IDC_SRVSETUP_DESC             105
#undef IDC_SRVSETUP_ASSIGN
#define IDC_SRVSETUP_ASSIGN           106
#undef IDC_SRVSETUP_UNASSIGN
#define IDC_SRVSETUP_UNASSIGN         107
#undef IDC_SRVSETUP_RANDOM
#define IDC_SRVSETUP_RANDOM           108
#undef IDC_SRVSETUP_PARAM1
#define IDC_SRVSETUP_PARAM1           109
#undef IDC_SRVSETUP_PARAM1_TEXT
#define IDC_SRVSETUP_PARAM1_TEXT      110
#undef IDC_SRVSETUP_PARAM2
#define IDC_SRVSETUP_PARAM2           111
#undef IDC_SRVSETUP_PARAM2_TEXT
#define IDC_SRVSETUP_PARAM2_TEXT      112

#undef IDC_SRVSIDE_NAME
#define IDC_SRVSIDE_NAME              101
#undef IDC_SRVSIDE_ISLAND
#define IDC_SRVSIDE_ISLAND            102
#undef IDC_SRVSIDE_POOL
#define IDC_SRVSIDE_POOL              103
#undef IDC_SRVSIDE_WEST
#define IDC_SRVSIDE_WEST              104
#undef IDC_SRVSIDE_EAST
#define IDC_SRVSIDE_EAST              105
#undef IDC_SRVSIDE_RESIST
#define IDC_SRVSIDE_RESIST            106
#undef IDC_SRVSIDE_CIVIL
#define IDC_SRVSIDE_CIVIL             107
#undef IDC_SRVSIDE_WEST_TEXT
#define IDC_SRVSIDE_WEST_TEXT         108
#undef IDC_SRVSIDE_EAST_TEXT
#define IDC_SRVSIDE_EAST_TEXT         109
#undef IDC_SRVSIDE_RESIST_TEXT
#define IDC_SRVSIDE_RESIST_TEXT       110
#undef IDC_SRVSIDE_CIVIL_TEXT
#define IDC_SRVSIDE_CIVIL_TEXT        111
#undef IDC_SRVSIDE_DEFAULT
#define IDC_SRVSIDE_DEFAULT           112
#undef IDC_SRVSIDE_PARAM1
#define IDC_SRVSIDE_PARAM1            113
#undef IDC_SRVSIDE_PARAM1_TEXT
#define IDC_SRVSIDE_PARAM1_TEXT       114
#undef IDC_SRVSIDE_PARAM2
#define IDC_SRVSIDE_PARAM2            115
#undef IDC_SRVSIDE_PARAM2_TEXT
#define IDC_SRVSIDE_PARAM2_TEXT       116
#undef IDC_SRVSIDE_PLAYERS
#define IDC_SRVSIDE_PLAYERS           117

#undef IDC_MPROLE_TITLE
#define IDC_MPROLE_TITLE              101
#undef IDC_MPROLE_NAME
#define IDC_MPROLE_NAME               102
#undef IDC_MPROLE_ISLAND
#define IDC_MPROLE_ISLAND             103
#undef IDC_MPROLE_DESC
#define IDC_MPROLE_DESC               104
#undef IDC_MPROLE_POOL
#define IDC_MPROLE_POOL               105
#undef IDC_MPROLE_POOL_TEXT
#define IDC_MPROLE_POOL_TEXT          106
#undef IDC_MPROLE_ROLES
#define IDC_MPROLE_ROLES              107
#undef IDC_MPROLE_DEFAULT
#define IDC_MPROLE_DEFAULT            108
#undef IDC_MPROLE_ENABLE
#define IDC_MPROLE_ENABLE             109
#undef IDC_MPROLE_SIDES
#define IDC_MPROLE_SIDES              110
#undef IDC_MPROLE_ENABLE_ALL
#define IDC_MPROLE_ENABLE_ALL         111

#undef IDC_CLIENT_GAME
#define IDC_CLIENT_GAME               101

#undef IDC_CLIENTMAP_START1
#define IDC_CLIENTMAP_START1          101
#undef IDC_CLIENTMAP_START2
#define IDC_CLIENTMAP_START2          102

#undef IDC_CLIENT_READY_PLAYERS
#define IDC_CLIENT_READY_PLAYERS        120
#undef IDC_CLIENT_READY_PLAYERS_TITLE
#define IDC_CLIENT_READY_PLAYERS_TITLE  121
#undef IDC_CLIENT_READY_TIMEOUT
#define IDC_CLIENT_READY_TIMEOUT        122

#undef IDC_SERVER_READY_PLAYERS
#define IDC_SERVER_READY_PLAYERS        120
#undef IDC_SERVER_READY_PLAYERS_TITLE
#define IDC_SERVER_READY_PLAYERS_TITLE  121

#undef IDC_MP_PLAYERS
#define IDC_MP_PLAYERS                101
#undef IDC_MP_PL
#define IDC_MP_PL                     102
#undef IDC_MP_PL_NAME
#define IDC_MP_PL_NAME                103
#undef IDC_MP_PL_MAIL
#define IDC_MP_PL_MAIL                104
#undef IDC_MP_PL_ICQ
#define IDC_MP_PL_ICQ                 105
#undef IDC_MP_PL_REMARK
#define IDC_MP_PL_REMARK              106
#undef IDC_MP_SQ
#define IDC_MP_SQ                     107
#undef IDC_MP_SQ_NAME
#define IDC_MP_SQ_NAME                108
#undef IDC_MP_SQ_ID
#define IDC_MP_SQ_ID                  109
#undef IDC_MP_SQ_MAIL
#define IDC_MP_SQ_MAIL                110
#undef IDC_MP_SQ_WEB
#define IDC_MP_SQ_WEB                 111
#undef IDC_MP_SQ_PICTURE
#define IDC_MP_SQ_PICTURE             112
#undef IDC_MP_SQ_TITLE
#define IDC_MP_SQ_TITLE               113
#undef IDC_MP_KICKOFF
#define IDC_MP_KICKOFF                114
#undef IDC_MP_BAN
#define IDC_MP_BAN                    115
#undef IDC_MP_PL_MISSION
#define IDC_MP_PL_MISSION             116
#undef IDC_MP_PL_ISLAND
#define IDC_MP_PL_ISLAND              117
#undef IDC_MP_PL_TIME
#define IDC_MP_PL_TIME                118
#undef IDC_MP_PL_MINPING
#define IDC_MP_PL_MINPING             119
#undef IDC_MP_PL_AVGPING
#define IDC_MP_PL_AVGPING             120
#undef IDC_MP_PL_MAXPING
#define IDC_MP_PL_MAXPING             121
#undef IDC_MP_PL_MINBAND
#define IDC_MP_PL_MINBAND             122
#undef IDC_MP_PL_AVGBAND
#define IDC_MP_PL_AVGBAND             123
#undef IDC_MP_PL_MAXBAND
#define IDC_MP_PL_MAXBAND             124
#undef IDC_MP_PL_DESYNC
#define IDC_MP_PL_DESYNC              125
#undef IDC_MP_PL_REST
#define IDC_MP_PL_REST                126
#undef IDC_MP_MUTE
#define IDC_MP_MUTE                   127

#undef IDC_CLIENT_WAIT_TITLE
#define IDC_CLIENT_WAIT_TITLE         130 // is used together with MP_PL

#undef IDC_MPSETUP_NAME
#define IDC_MPSETUP_NAME              101
#undef IDC_MPSETUP_ISLAND
#define IDC_MPSETUP_ISLAND            102
#undef IDC_MPSETUP_DESC
#define IDC_MPSETUP_DESC              103
#undef IDC_MPSETUP_WEST
#define IDC_MPSETUP_WEST              104
#undef IDC_MPSETUP_EAST
#define IDC_MPSETUP_EAST              105
#undef IDC_MPSETUP_GUERRILA
#define IDC_MPSETUP_GUERRILA          106
#undef IDC_MPSETUP_CIVILIAN
#define IDC_MPSETUP_CIVILIAN          107
#undef IDC_MPSETUP_ROLES_TITLE
#define IDC_MPSETUP_ROLES_TITLE       108
#undef IDC_MPSETUP_ROLES
#define IDC_MPSETUP_ROLES             109
#undef IDC_MPSETUP_PARAM1_TITLE
#define IDC_MPSETUP_PARAM1_TITLE      110
#undef IDC_MPSETUP_PARAM1
#define IDC_MPSETUP_PARAM1            111
#undef IDC_MPSETUP_PARAM2_TITLE
#define IDC_MPSETUP_PARAM2_TITLE      112
#undef IDC_MPSETUP_PARAM2
#define IDC_MPSETUP_PARAM2            113
#undef IDC_MPSETUP_POOL
#define IDC_MPSETUP_POOL              114
#undef IDC_MPSETUP_MESSAGE
#define IDC_MPSETUP_MESSAGE           115
#undef IDC_MPSETUP_KICK
#define IDC_MPSETUP_KICK              116
#undef IDC_MPSETUP_ENABLE_ALL
#define IDC_MPSETUP_ENABLE_ALL        117
#undef IDC_MPSETUP_LOCK
#define IDC_MPSETUP_LOCK              118
#undef IDC_MPSETUP_SIDE
#define IDC_MPSETUP_SIDE              119
#undef IDC_MPSETUP_POOL_TITLE
#define IDC_MPSETUP_POOL_TITLE        120
#undef IDC_MPSETUP_TIMEOUT
#define IDC_MPSETUP_TIMEOUT           121
#undef IDC_MPSETUP_PLAYERS
#define IDC_MPSETUP_PLAYERS           122
#undef IDC_MPSETUP_FRIENDS
#define IDC_MPSETUP_FRIENDS           123
#undef IDC_MPSETUP_ADVANCED
#define IDC_MPSETUP_ADVANCED          124
#undef IDC_MPSETUP_GAMERCARD
#define IDC_MPSETUP_GAMERCARD         125
#undef IDC_MPSETUP_PARTYGUI
#define IDC_MPSETUP_PARTYGUI          126
#undef IDC_MPSETUP_ASSIGNROLE
#define IDC_MPSETUP_ASSIGNROLE        127
#undef IDC_MPSETUP_PARAMS
#define IDC_MPSETUP_PARAMS            128
#undef IDC_MPSETUP_DSINTERFACE
#define IDC_MPSETUP_DSINTERFACE       129
#undef IDC_MPSETUP_MISSION_WORKSHOP
#define IDC_MPSETUP_MISSION_WORKSHOP  130
#undef IDC_MPSETUP_LOGIC
#define IDC_MPSETUP_LOGIC             131
#undef IDC_MPSETUP_VIRTUAL
#define IDC_MPSETUP_VIRTUAL           132
#undef IDC_MPSETUP_PLAYERS_BUTTON
#define IDC_MPSETUP_PLAYERS_BUTTON    133
#undef IDC_MPSETUP_PLAYERS_SORT
#define IDC_MPSETUP_PLAYERS_SORT      134
#undef IDC_MPSETUP_PING_BUTTON
#define IDC_MPSETUP_PING_BUTTON       135
#undef IDC_MPSETUP_PING_SORT
#define IDC_MPSETUP_PING_SORT         136
#undef IDC_MPSETUP_MUTE_ALL
#define IDC_MPSETUP_MUTE_ALL          137

#undef IDC_MPSETUP_MSG_MESSAGE
#define IDC_MPSETUP_MSG_MESSAGE       101
#undef IDC_MPSETUP_MSG_PROGRESS
#define IDC_MPSETUP_MSG_PROGRESS      102
#undef IDC_MPSETUP_MSG_TIME
#define IDC_MPSETUP_MSG_TIME          103

#undef IDC_PROGRESS_MSG_MESSAGE
#define IDC_PROGRESS_MSG_MESSAGE       101
#undef IDC_PROGRESS_MSG_PROGRESS
#define IDC_PROGRESS_MSG_PROGRESS      102
#undef IDC_PROGRESS_MSG_TIME
#define IDC_PROGRESS_MSG_TIME          103

#undef IDC_SERVER_SETTINGS_PARAM1_TEXT
#define IDC_SERVER_SETTINGS_PARAM1_TEXT 101
#undef IDC_SERVER_SETTINGS_PARAM1
#define IDC_SERVER_SETTINGS_PARAM1      102
#undef IDC_SERVER_SETTINGS_PARAM2_TEXT
#define IDC_SERVER_SETTINGS_PARAM2_TEXT 103
#undef IDC_SERVER_SETTINGS_PARAM2
#define IDC_SERVER_SETTINGS_PARAM2      104
#undef IDC_SERVER_SETTINGS_AI
#define IDC_SERVER_SETTINGS_AI          105
#undef IDC_SERVER_SETTINGS_ASSIGN
#define IDC_SERVER_SETTINGS_ASSIGN      106

#undef IDC_SERVER_ADVANCED_ROLES
#define IDC_SERVER_ADVANCED_ROLES       101
#undef IDC_SERVER_ADVANCED_DISABLE_ALL
#define IDC_SERVER_ADVANCED_DISABLE_ALL 102
#undef IDC_SERVER_ADVANCED_AUTOASSIGN
#define IDC_SERVER_ADVANCED_AUTOASSIGN  103

#undef IDC_SERVER_SELECT_PLAYERS
#define IDC_SERVER_SELECT_PLAYERS     101

// Main map display controls
#undef IDC_MAP_WATCH
#define IDC_MAP_WATCH                 101
#undef IDC_MAP_COMPASS
#define IDC_MAP_COMPASS               102
#undef IDC_MAP_WALKIE_TALKIE
#define IDC_MAP_WALKIE_TALKIE         103
#undef IDC_MAP_NOTEPAD
#define IDC_MAP_NOTEPAD               104
#undef IDC_MAP_WARRANT
#define IDC_MAP_WARRANT               105
#undef IDC_MAP_GPS
#define IDC_MAP_GPS                   106
#undef IDC_MAP_TEXTURES
#define IDC_MAP_TEXTURES              107
#undef IDC_MAP_BRIEFING_SHOW
#define IDC_MAP_BRIEFING_SHOW         108
#undef IDC_MAP_BRIEFING_PAGE
#define IDC_MAP_BRIEFING_PAGE         109
#undef IDC_MAP_PREV_MARKER
#define IDC_MAP_PREV_MARKER           110
#undef IDC_MAP_NEXT_MARKER
#define IDC_MAP_NEXT_MARKER           111
#undef IDC_MAP_GEAR
#define IDC_MAP_GEAR                  112

// Diary display controls
#undef IDC_DIARY
#define IDC_DIARY                     101
#undef IDC_DIARY_INDEX
#define IDC_DIARY_INDEX               102
#undef IDC_DIARY_PAGE
#define IDC_DIARY_PAGE                103
#undef IDC_DIARY_ADD
#define IDC_DIARY_ADD                 104

// Select island display controls
#undef IDC_SELECT_ISLAND
#define IDC_SELECT_ISLAND             101
#undef IDC_SELECT_ISLAND_NOTEBOOK
#define IDC_SELECT_ISLAND_NOTEBOOK    102
#undef IDC_SELECT_ISLAND_WIZARD
#define IDC_SELECT_ISLAND_WIZARD      103
#undef IDC_SELECT_ISLAND_EDITOR
#define IDC_SELECT_ISLAND_EDITOR      104
#undef IDC_SELECT_ISLAND_EDITOR_OLD
#define IDC_SELECT_ISLAND_EDITOR_OLD  105
//Redefined in Eden
//IDC_SELECT_ISLAND_EDITOR_OLD             105
//IDC_SELECT_ISLAND_3DEN                   106
#undef IDC_SELECT_ISLAND_BUTTON_PURCHASE
#define IDC_SELECT_ISLAND_BUTTON_PURCHASE  107

// Custom arcade display controls
#undef IDC_CUST_GAME
#define IDC_CUST_GAME                 101
#undef IDC_CUST_PLAY
#define IDC_CUST_PLAY                 102
#undef IDC_CUST_EDIT
#define IDC_CUST_EDIT                 103
#undef IDC_CUST_DELETE
#define IDC_CUST_DELETE               104
#undef IDC_CUST_EDIT_2
#define IDC_CUST_EDIT_2               105

#undef IDC_MISSION_PARAMS_LABEL
#define IDC_MISSION_PARAMS_LABEL      101
#undef IDC_MISSION_PARAMS_COMBO
#define IDC_MISSION_PARAMS_COMBO      102

#undef IDC_ARCMAP_LOAD
#define IDC_ARCMAP_LOAD               101
#undef IDC_ARCMAP_SAVE
#define IDC_ARCMAP_SAVE               102
#undef IDC_ARCMAP_CLEAR
#define IDC_ARCMAP_CLEAR              103
#undef IDC_ARCMAP_MODE
#define IDC_ARCMAP_MODE               104
#undef IDC_ARCMAP_INTEL
#define IDC_ARCMAP_INTEL              105
#undef IDC_ARCMAP_MERGE
#define IDC_ARCMAP_MERGE              106
#undef IDC_ARCMAP_PREVIEW
#define IDC_ARCMAP_PREVIEW            107
#undef IDC_ARCMAP_CONTINUE
#define IDC_ARCMAP_CONTINUE           108
#undef IDC_ARCMAP_SECTION
#define IDC_ARCMAP_SECTION            109
#undef IDC_ARCMAP_IDS
#define IDC_ARCMAP_IDS                111
#undef IDC_ARCMAP_TEXTURES
#define IDC_ARCMAP_TEXTURES           112
#undef IDC_ARCMAP_MISSION_NAME
#define IDC_ARCMAP_MISSION_NAME       113
#undef IDC_ARCMAP_MAP
#define IDC_ARCMAP_MAP                114
#undef IDC_ARCMAP_BACKGROUND
#define IDC_ARCMAP_BACKGROUND         115
#undef IDC_ARCMAP_LAYOUT
#define IDC_ARCMAP_LAYOUT             116
#undef IDC_ARCMAP_PUBLISH_MISSION
#define IDC_ARCMAP_PUBLISH_MISSION    117

#undef IDC_ARCUNIT_TITLE
#define IDC_ARCUNIT_TITLE             101
#undef IDC_ARCUNIT_SIDE
#define IDC_ARCUNIT_SIDE              102
#undef IDC_ARCUNIT_VEHICLE
#define IDC_ARCUNIT_VEHICLE           103
#undef IDC_ARCUNIT_RANK
#define IDC_ARCUNIT_RANK              104
#undef IDC_ARCUNIT_CTRL
#define IDC_ARCUNIT_CTRL              105
#undef IDC_ARCUNIT_CLASS
#define IDC_ARCUNIT_CLASS             107
#undef IDC_ARCUNIT_HEALTH
#define IDC_ARCUNIT_HEALTH            108
#undef IDC_ARCUNIT_FUEL
#define IDC_ARCUNIT_FUEL              109
#undef IDC_ARCUNIT_AMMO
#define IDC_ARCUNIT_AMMO              110
#undef IDC_ARCUNIT_AZIMUT
#define IDC_ARCUNIT_AZIMUT            111
#undef IDC_ARCUNIT_SPECIAL
#define IDC_ARCUNIT_SPECIAL           112
#undef IDC_ARCUNIT_AGE
#define IDC_ARCUNIT_AGE               113
#undef IDC_ARCUNIT_AZIMUT_PICTURE
#define IDC_ARCUNIT_AZIMUT_PICTURE    114
#undef IDC_ARCUNIT_PLACE
#define IDC_ARCUNIT_PLACE             115
#undef IDC_ARCUNIT_PRESENCE
#define IDC_ARCUNIT_PRESENCE          116
#undef IDC_ARCUNIT_PRESENCE_COND
#define IDC_ARCUNIT_PRESENCE_COND     117
#undef IDC_ARCUNIT_TEXT
#define IDC_ARCUNIT_TEXT              118
#undef IDC_ARCUNIT_LOCK
#define IDC_ARCUNIT_LOCK              119
#undef IDC_ARCUNIT_INIT
#define IDC_ARCUNIT_INIT              120
#undef IDC_ARCUNIT_SKILL
#define IDC_ARCUNIT_SKILL             121
#undef IDC_ARCUNIT_DESC
#define IDC_ARCUNIT_DESC              122
#undef IDC_ARCUNIT_FACTION
#define IDC_ARCUNIT_FACTION           123
#undef IDC_ARCUNIT_ELEVATION
#define IDC_ARCUNIT_ELEVATION         124
#undef IDC_ARCUNIT_EQUIP
#define IDC_ARCUNIT_EQUIP             125
#undef IDC_ARCUNIT_RADIUS
#define IDC_ARCUNIT_RADIUS            126
#undef IDC_ARCUNIT_ARGUMENTS
#define IDC_ARCUNIT_ARGUMENTS         127
#undef IDC_ARCUNIT_CATEGORY
#define IDC_ARCUNIT_CATEGORY          128
#undef IDC_ARCUNIT_SETTINGS
#define IDC_ARCUNIT_SETTINGS          2301

#undef IDC_ARCGRP_SIDE
#define IDC_ARCGRP_SIDE               101
#undef IDC_ARCGRP_TYPE
#define IDC_ARCGRP_TYPE               102
#undef IDC_ARCGRP_NAME
#define IDC_ARCGRP_NAME               103
#undef IDC_ARCGRP_AZIMUT
#define IDC_ARCGRP_AZIMUT             104
#undef IDC_ARCGRP_AZIMUT_PICTURE
#define IDC_ARCGRP_AZIMUT_PICTURE     105
#undef IDC_ARCGRP_FACTION
#define IDC_ARCGRP_FACTION            106
#undef IDC_ARCGRP_UNITS_LIST
#define IDC_ARCGRP_UNITS_LIST         107

#undef IDC_ARCWP_TITLE
#define IDC_ARCWP_TITLE               101
#undef IDC_ARCWP_TYPE
#define IDC_ARCWP_TYPE                102
#undef IDC_ARCWP_SEQ
#define IDC_ARCWP_SEQ                 103
#undef IDC_ARCWP_DESC
#define IDC_ARCWP_DESC                104
#undef IDC_ARCWP_SEMAPHORE
#define IDC_ARCWP_SEMAPHORE           105
#undef IDC_ARCWP_FORM
#define IDC_ARCWP_FORM                106
#undef IDC_ARCWP_SPEED
#define IDC_ARCWP_SPEED               107
#undef IDC_ARCWP_COMBAT
#define IDC_ARCWP_COMBAT              108
#undef IDC_ARCWP_PLACE
#define IDC_ARCWP_PLACE               109
#undef IDC_ARCWP_EFFECTS
#define IDC_ARCWP_EFFECTS             110
#undef IDC_ARCWP_TIMEOUT_MIN
#define IDC_ARCWP_TIMEOUT_MIN         111
#undef IDC_ARCWP_TIMEOUT_MAX
#define IDC_ARCWP_TIMEOUT_MAX         112
#undef IDC_ARCWP_TIMEOUT_MID
#define IDC_ARCWP_TIMEOUT_MID         113
#undef IDC_ARCWP_HOUSEPOS
#define IDC_ARCWP_HOUSEPOS            114
#undef IDC_ARCWP_HOUSEPOSTEXT
#define IDC_ARCWP_HOUSEPOSTEXT        115
#undef IDC_ARCWP_EXPACTIV
#define IDC_ARCWP_EXPACTIV            116
#undef IDC_ARCWP_SHOW
#define IDC_ARCWP_SHOW                117
#undef IDC_ARCWP_EXPCOND
#define IDC_ARCWP_EXPCOND             118
#undef IDC_ARCWP_SCRIPT
#define IDC_ARCWP_SCRIPT              119
#undef IDC_ARCWP_PREC
#define IDC_ARCWP_PREC                120
#undef IDC_ARCWP_HEIGHT
#define IDC_ARCWP_HEIGHT              121
#undef IDC_ARCWP_HEIGHTTEXT
#define IDC_ARCWP_HEIGHTTEXT          122
#undef IDC_ARCWP_SCRIPTTEXT
#define IDC_ARCWP_SCRIPTTEXT          123
#undef IDC_ARCWP_CATEGORY
#define IDC_ARCWP_CATEGORY            124

#undef IDC_ARCWP_ARGUMENTS
#define IDC_ARCWP_ARGUMENTS           125
#undef IDC_ARCWP_ARGUMENTSTEXT
#define IDC_ARCWP_ARGUMENTSTEXT       126
#undef IDC_ARCWP_NAME
#define IDC_ARCWP_NAME                127

#undef IDC_ARCEFF_SOUND
#define IDC_ARCEFF_SOUND              103
#undef IDC_ARCEFF_VOICE
#define IDC_ARCEFF_VOICE              104
#undef IDC_ARCEFF_SOUND_ENV
#define IDC_ARCEFF_SOUND_ENV          105
#undef IDC_ARCEFF_SOUND_DET
#define IDC_ARCEFF_SOUND_DET          106
#undef IDC_ARCEFF_MUSIC
#define IDC_ARCEFF_MUSIC              107
#undef IDC_ARCEFF_TITTYPE
#define IDC_ARCEFF_TITTYPE            108
#undef IDC_ARCEFF_TITEFF
#define IDC_ARCEFF_TITEFF             109
#undef IDC_ARCEFF_TITTEXT
#define IDC_ARCEFF_TITTEXT            110
#undef IDC_ARCEFF_TITRES
#define IDC_ARCEFF_TITRES             111
#undef IDC_ARCEFF_TITOBJ
#define IDC_ARCEFF_TITOBJ             112
#undef IDC_ARCEFF_PLAYERONLY
//#define IDC_ARCEFF_PLAYERONLY         113
#undef IDC_ARCEFF_CONDITION
#define IDC_ARCEFF_CONDITION          113
#undef IDC_ARCEFF_TEXT_TITTEXT
#define IDC_ARCEFF_TEXT_TITTEXT       114

#undef IDC_ARCSENS_TITLE
#define IDC_ARCSENS_TITLE             101
#undef IDC_ARCSENS_A
#define IDC_ARCSENS_A                 102
#undef IDC_ARCSENS_B
#define IDC_ARCSENS_B                 103
#undef IDC_ARCSENS_ANGLE
#define IDC_ARCSENS_ANGLE             104
#undef IDC_ARCSENS_ACTIV
#define IDC_ARCSENS_ACTIV             105
#undef IDC_ARCSENS_PRESENCE
#define IDC_ARCSENS_PRESENCE          106
#undef IDC_ARCSENS_REPEATING
#define IDC_ARCSENS_REPEATING         107
#undef IDC_ARCSENS_INTERRUPT
#define IDC_ARCSENS_INTERRUPT         108
#undef IDC_ARCSENS_TIMEOUT_MIN
#define IDC_ARCSENS_TIMEOUT_MIN       109
#undef IDC_ARCSENS_TIMEOUT_MAX
#define IDC_ARCSENS_TIMEOUT_MAX       110
#undef IDC_ARCSENS_TIMEOUT_MID
#define IDC_ARCSENS_TIMEOUT_MID       111
#undef IDC_ARCSENS_TYPE
#define IDC_ARCSENS_TYPE              112
#undef IDC_ARCSENS_OBJECT
#define IDC_ARCSENS_OBJECT            113
#undef IDC_ARCSENS_TEXT
#define IDC_ARCSENS_TEXT              114
#undef IDC_ARCSENS_AGE
#define IDC_ARCSENS_AGE               115
#undef IDC_ARCSENS_EFFECTS
#define IDC_ARCSENS_EFFECTS           116
#undef IDC_ARCSENS_EXPCOND
#define IDC_ARCSENS_EXPCOND           117
#undef IDC_ARCSENS_EXPACTIV
#define IDC_ARCSENS_EXPACTIV          118
#undef IDC_ARCSENS_EXPDESACTIV
#define IDC_ARCSENS_EXPDESACTIV       119
#undef IDC_ARCSENS_RECT
#define IDC_ARCSENS_RECT              120
#undef IDC_ARCSENS_NAME
#define IDC_ARCSENS_NAME              121

#undef IDC_ARCMARK_TITLE
#define IDC_ARCMARK_TITLE             101
#undef IDC_ARCMARK_NAME
#define IDC_ARCMARK_NAME              102
#undef IDC_ARCMARK_MARKER
#define IDC_ARCMARK_MARKER            103
#undef IDC_ARCMARK_TYPE
#define IDC_ARCMARK_TYPE              104
#undef IDC_ARCMARK_COLOR
#define IDC_ARCMARK_COLOR             105
#undef IDC_ARCMARK_A
#define IDC_ARCMARK_A                 106
#undef IDC_ARCMARK_B
#define IDC_ARCMARK_B                 107
#undef IDC_ARCMARK_ANGLE
#define IDC_ARCMARK_ANGLE             108
#undef IDC_ARCMARK_TYPE_TEXT
#define IDC_ARCMARK_TYPE_TEXT         109
#undef IDC_ARCMARK_FILL
#define IDC_ARCMARK_FILL              110
#undef IDC_ARCMARK_TEXT
#define IDC_ARCMARK_TEXT              111

#undef IDC_INTEL_RESISTANCE
#define IDC_INTEL_RESISTANCE          101
#undef IDC_INTEL_MONTH
#define IDC_INTEL_MONTH               102
#undef IDC_INTEL_DAY
#define IDC_INTEL_DAY                 103
#undef IDC_INTEL_HOUR
#define IDC_INTEL_HOUR                104
#undef IDC_INTEL_MINUTE
#define IDC_INTEL_MINUTE              105
#undef IDC_INTEL_BRIEFING_NAME
#define IDC_INTEL_BRIEFING_NAME       106
#undef IDC_INTEL_BRIEFING_DESC
#define IDC_INTEL_BRIEFING_DESC       107
#undef IDC_INTEL_WEATHER
#define IDC_INTEL_WEATHER             108
#undef IDC_INTEL_FOG
#define IDC_INTEL_FOG                 109
#undef IDC_INTEL_WEATHER_FORECAST
#define IDC_INTEL_WEATHER_FORECAST    110
#undef IDC_INTEL_FOG_FORECAST
#define IDC_INTEL_FOG_FORECAST        111
#undef IDC_INTEL_YEAR
#define IDC_INTEL_YEAR                112
//added by MUF - new intel dialog--------------------------
#undef IDC_INTEL_WEATHER_TB
#define IDC_INTEL_WEATHER_TB            113
#undef IDC_INTEL_WEATHER_FORECAST_TB
#define IDC_INTEL_WEATHER_FORECAST_TB   114

#undef IDC_INTEL_FOG_CB
#define IDC_INTEL_FOG_CB                115
#undef IDC_INTEL_FOG_TB
#define IDC_INTEL_FOG_TB                116
#undef IDC_INTEL_FOG_FORECAST_TB
#define IDC_INTEL_FOG_FORECAST_TB       117

#undef IDC_INTEL_RAIN_CB
#define IDC_INTEL_RAIN_CB               118
#undef IDC_INTEL_RAIN
#define IDC_INTEL_RAIN                  119
#undef IDC_INTEL_RAIN_TB
#define IDC_INTEL_RAIN_TB               120
#undef IDC_INTEL_RAIN_FORECAST
#define IDC_INTEL_RAIN_FORECAST         121
#undef IDC_INTEL_RAIN_FORECAST_TB
#define IDC_INTEL_RAIN_FORECAST_TB      122

#undef IDC_INTEL_LIGHTN_CB
#define IDC_INTEL_LIGHTN_CB             123
#undef IDC_INTEL_LIGHTN
#define IDC_INTEL_LIGHTN                124
#undef IDC_INTEL_LIGHTN_TB
#define IDC_INTEL_LIGHTN_TB             125
#undef IDC_INTEL_LIGHTN_FORECAST
#define IDC_INTEL_LIGHTN_FORECAST       126
#undef IDC_INTEL_LIGHTN_FORECAST_TB
#define IDC_INTEL_LIGHTN_FORECAST_TB    127

#undef IDC_INTEL_WAVES_CB
#define IDC_INTEL_WAVES_CB              128
#undef IDC_INTEL_WAVES
#define IDC_INTEL_WAVES                 129
#undef IDC_INTEL_WAVES_TB
#define IDC_INTEL_WAVES_TB              130
#undef IDC_INTEL_WAVES_FORECAST
#define IDC_INTEL_WAVES_FORECAST        131
#undef IDC_INTEL_WAVES_FORECAST_TB
#define IDC_INTEL_WAVES_FORECAST_TB     132

#undef IDC_INTEL_WIND_CB
#define IDC_INTEL_WIND_CB               133
#undef IDC_INTEL_STRENGTH
#define IDC_INTEL_STRENGTH              134
#undef IDC_INTEL_STRENGTH_TB
#define IDC_INTEL_STRENGTH_TB           135
#undef IDC_INTEL_STRENGTH_FORECAST
#define IDC_INTEL_STRENGTH_FORECAST     136
#undef IDC_INTEL_STRENGTH_FORECAST_TB
#define IDC_INTEL_STRENGTH_FORECAST_TB  137

#undef IDC_INTEL_GUSTS
#define IDC_INTEL_GUSTS                 138
#undef IDC_INTEL_GUSTS_TB
#define IDC_INTEL_GUSTS_TB              139
#undef IDC_INTEL_GUSTS_FORECAST
#define IDC_INTEL_GUSTS_FORECAST        140
#undef IDC_INTEL_GUSTS_FORECAST_TB
#define IDC_INTEL_GUSTS_FORECAST_TB     141

#undef IDC_INTEL_WINDDIR
#define IDC_INTEL_WINDDIR               142
#undef IDC_INTEL_WINDDIR_TB
#define IDC_INTEL_WINDDIR_TB            143
#undef IDC_INTEL_WINDDIR_FORECAST
#define IDC_INTEL_WINDDIR_FORECAST      144
#undef IDC_INTEL_WINDDIR_FORECAST_TB
#define IDC_INTEL_WINDDIR_FORECAST_TB   145

#undef IDC_INTEL_CHNGTIME
#define IDC_INTEL_CHNGTIME              146
#undef IDC_INTEL_CHNGTIME_HOUR_TB
#define IDC_INTEL_CHNGTIME_HOUR_TB      147
#undef IDC_INTEL_CHNGTIME_MIN_TB
#define IDC_INTEL_CHNGTIME_MIN_TB       148

#undef IDC_INTEL_CHNGTIME_HLEFT
#define IDC_INTEL_CHNGTIME_HLEFT        149
#undef IDC_INTEL_CHNGTIME_HMIDDLE
#define IDC_INTEL_CHNGTIME_HMIDDLE      150
#undef IDC_INTEL_CHNGTIME_HRIGHT
#define IDC_INTEL_CHNGTIME_HRIGHT       151

//added by MUF - new intel dialog--------------------------

// Dialog for choosing Editor's layout
#undef IDC_LAYOUT_LIST
#define IDC_LAYOUT_LIST                 101
#undef IDC_LAYOUT_PICTURE
#define IDC_LAYOUT_PICTURE              102

// Chat
#undef IDC_CHANNEL
#define IDC_CHANNEL                   101
#undef IDC_CHANNEL_VOICE
#define IDC_CHANNEL_VOICE             102
#undef IDC_CHANNEL_MUTE_VON
#define IDC_CHANNEL_MUTE_VON          103
#undef IDC_CHANNEL_MUTE_CHAT
#define IDC_CHANNEL_MUTE_CHAT         104

#undef IDC_CHAT
#define IDC_CHAT                      101

#undef IDC_VOICE_CHAT
#define IDC_VOICE_CHAT                101

// Save / load template
#undef IDC_TEMPL_NAME
#define IDC_TEMPL_NAME                101
#undef IDC_TEMPL_TITLE
#define IDC_TEMPL_TITLE               102
#undef IDC_TEMPL_MODE
#define IDC_TEMPL_MODE                103
#undef IDC_TEMPL_ISLAND
#define IDC_TEMPL_ISLAND              104

// publish / update to Steam workshop
#undef IDC_PUBLISH_STEAM_TITLE
#define IDC_PUBLISH_STEAM_TITLE               101
#undef IDC_PUBLISH_STEAM_TAGS
#define IDC_PUBLISH_STEAM_TAGS                102
#undef IDC_PUBLISH_STEAM_PICTURE
#define IDC_PUBLISH_STEAM_PICTURE             103
#undef IDC_PUBLISH_STEAM_DESCRIPTION
#define IDC_PUBLISH_STEAM_DESCRIPTION         104
#undef IDC_PUBLISH_STEAM_MISSION_LIST
#define IDC_PUBLISH_STEAM_MISSION_LIST        105
#undef IDC_PUBLISH_STEAM_VISIBILITY
#define IDC_PUBLISH_STEAM_VISIBILITY          106
#undef IDC_PUBLISH_STEAM_CHANGE_NOTES
#define IDC_PUBLISH_STEAM_CHANGE_NOTES        107
#undef IDC_PUBLISH_STEAM_PREVIEW_FILE
#define IDC_PUBLISH_STEAM_PREVIEW_FILE        108
#undef IDC_PUBLISH_CHECKBOX_LICENCE
#define IDC_PUBLISH_CHECKBOX_LICENCE          109
#undef IDC_PUBLISH_TEXT_MISSION_SIZE
#define IDC_PUBLISH_TEXT_MISSION_SIZE         110
#undef IDC_PUBLISH_TEXT_QUOTA
#define IDC_PUBLISH_TEXT_QUOTA                111
#undef IDC_PUBLISH_BUTTON_PUBLISH
#define IDC_PUBLISH_BUTTON_PUBLISH            112
#undef IDC_PUBLISH_BUTTON_UPDATE
#define IDC_PUBLISH_BUTTON_UPDATE             113
#undef IDC_PUBLISH_BUTTON_DELETE
#define IDC_PUBLISH_BUTTON_DELETE             114
#undef IDC_PUBLISH_BUTTON_EDIT_TAGS
#define IDC_PUBLISH_BUTTON_EDIT_TAGS          115
#undef IDC_PUBLISH_BUTTON_WORKSHOP
#define IDC_PUBLISH_BUTTON_WORKSHOP           116
#undef IDC_PUBLISH_BUTTON_WORKSHOP_LICENCE
#define IDC_PUBLISH_BUTTON_WORKSHOP_LICENCE   117
#undef IDC_PUBLISH_BUTTON_SELECT_PREVIEW
#define IDC_PUBLISH_BUTTON_SELECT_PREVIEW     118
#undef IDC_PUBLISH_BUTTON_DEFAULT_PREVIEW
#define IDC_PUBLISH_BUTTON_DEFAULT_PREVIEW    119
#undef IDC_PUBLISH_STORAGE_SLIDER
#define IDC_PUBLISH_STORAGE_SLIDER            120
// group that is hidden when new mission is selected and shown when already uploaded mission is selected
#undef IDC_PUBLISH_STEAM_HIDE_NEW_MISSION
#define IDC_PUBLISH_STEAM_HIDE_NEW_MISSION    121
// group that is shown when new mission is selected and hidden when already uploaded mission is selected
#undef IDC_PUBLISH_STEAM_SHOW_NEW_MISSION
#define IDC_PUBLISH_STEAM_SHOW_NEW_MISSION    122

// publish / update to Steam workshop - tags dialog
#undef IDC_PUBLISH_STEAM_TAGS_AVAILABLE
#define IDC_PUBLISH_STEAM_TAGS_AVAILABLE      101
#undef IDC_PUBLISH_STEAM_TAGS_SELECTED
#define IDC_PUBLISH_STEAM_TAGS_SELECTED       102
#undef IDC_PUBLISH_STEAM_TAGS_ADD
#define IDC_PUBLISH_STEAM_TAGS_ADD            103
#undef IDC_PUBLISH_STEAM_TAGS_REMOVE
#define IDC_PUBLISH_STEAM_TAGS_REMOVE         104
#undef IDC_PUBLISH_STEAM_TAGS_NEXT
#define IDC_PUBLISH_STEAM_TAGS_NEXT           105
#undef IDC_PUBLISH_STEAM_TAGS_BACK
#define IDC_PUBLISH_STEAM_TAGS_BACK           106
#undef IDC_PUBLISH_STEAM_TAGS_TITLE
#define IDC_PUBLISH_STEAM_TAGS_TITLE          107

// select file dialog
#undef IDC_FILE_SELECT_PATH
#define IDC_FILE_SELECT_PATH                  101
#undef IDC_FILE_SELECT_DIR_TREE
#define IDC_FILE_SELECT_DIR_TREE              102
#undef IDC_FILE_SELECT_FILE_LIST
#define IDC_FILE_SELECT_FILE_LIST             103
#undef IDC_FILE_SELECT_PREVIEW
#define IDC_FILE_SELECT_PREVIEW               104


//Login display
#undef IDC_LOGIN_USER_LIST
#define IDC_LOGIN_USER_LIST           101
#undef IDC_LOGIN_EDIT
#define IDC_LOGIN_EDIT                102
#undef IDC_LOGIN_NEW_USER
#define IDC_LOGIN_NEW_USER            103
#undef IDC_LOGIN_DELETE
#define IDC_LOGIN_DELETE              104
#undef IDC_LOGIN_NAME
#define IDC_LOGIN_NAME                105
#undef IDC_LOGIN_FACE
#define IDC_LOGIN_FACE                106
#undef IDC_LOGIN_SPEAKER
#define IDC_LOGIN_SPEAKER             107
#undef IDC_LOGIN_PITCH
#define IDC_LOGIN_PITCH               108
#undef IDC_LOGIN_HEAD
#define IDC_LOGIN_HEAD                109
#undef IDC_LOGIN_GLASSES
#define IDC_LOGIN_GLASSES             110
#undef IDC_LOGIN_ID
#define IDC_LOGIN_ID                  111
#undef IDC_LOGIN_SQUAD
#define IDC_LOGIN_SQUAD               112
#undef IDC_LOGIN_SQUAD_TEXT
#define IDC_LOGIN_SQUAD_TEXT          113
#undef IDC_LOGIN_DISCARD
#define IDC_LOGIN_DISCARD             114
#undef IDC_LOGIN_TAB_AVATAR
#define IDC_LOGIN_TAB_AVATAR          115
#undef IDC_LOGIN_TAB_UNIT
#define IDC_LOGIN_TAB_UNIT            116
#undef IDC_LOGIN_UNIT_SELECT
#define IDC_LOGIN_UNIT_SELECT         117
#undef IDC_LOGIN_UNIT_LOGO
#define IDC_LOGIN_UNIT_LOGO           118
#undef IDC_LOGIN_UNIT_NAME
#define IDC_LOGIN_UNIT_NAME           119
#undef IDC_LOGIN_UNIT_MOTTO
#define IDC_LOGIN_UNIT_MOTTO          120
#undef IDC_LOGIN_UNIT_DESCRIPTION
#define IDC_LOGIN_UNIT_DESCRIPTION    121
#undef IDC_LOGIN_ID_TEXT
#define IDC_LOGIN_ID_TEXT             122
#undef IDC_LOGIN_REFRESH
#define IDC_LOGIN_REFRESH             123

// Interrupt display
#undef IDC_INT_OPTIONS
#define IDC_INT_OPTIONS               101
#undef IDC_INT_LOAD
#define IDC_INT_LOAD                  102
#undef IDC_INT_SAVE
#define IDC_INT_SAVE                  103
#undef IDC_INT_ABORT
#define IDC_INT_ABORT                 104
#undef IDC_INT_RETRY
#define IDC_INT_RETRY                 105
#undef IDC_INT_TITLE
#define IDC_INT_TITLE                 106
#undef IDC_INT_SETTINGS
#define IDC_INT_SETTINGS              107
#undef IDC_INT_FRIENDS
#define IDC_INT_FRIENDS               108
#undef IDC_INT_PLAYERS
#define IDC_INT_PLAYERS               109
#undef IDC_INT_APPEAR_OFFLINE
#define IDC_INT_APPEAR_OFFLINE        110
#undef IDC_INT_MISSION
#define IDC_INT_MISSION               111
#undef IDC_INT_SIGN_IN_STATUS
#define IDC_INT_SIGN_IN_STATUS        112
#undef IDC_INT_EDIT_MAP
#define IDC_INT_EDIT_MAP              113
#undef IDC_INT_EDIT_3D
#define IDC_INT_EDIT_3D               114
#undef IDC_INT_EDIT_PREVIEW
#define IDC_INT_EDIT_PREVIEW          115
#undef IDC_INT_EDIT_REALTIME
#define IDC_INT_EDIT_REALTIME         116
#undef IDC_INT_RESTART
#define IDC_INT_RESTART               117
#undef IDC_INT_DIARY
#define IDC_INT_DIARY                 118
#undef IDC_INT_REVERT
#define IDC_INT_REVERT                119
#undef IDC_INT_MISSIONNAME
#define IDC_INT_MISSIONNAME           120
#undef IDC_INT_TRAFFIC_LIGHT
#define IDC_INT_TRAFFIC_LIGHT         121
#undef IDC_INT_FIELD_MANUAL
#define IDC_INT_FIELD_MANUAL          122

// Interrupt revert display
#undef IDC_INT_REVERT_TYPE
#define IDC_INT_REVERT_TYPE           101

// Select save display
#undef IDC_SELECT_SAVE_SLOTS
#define IDC_SELECT_SAVE_SLOTS         101

// Mission end display
#undef IDC_ME_SUBTITLE
#define IDC_ME_SUBTITLE               101
#undef IDC_ME_QUOTATION
#define IDC_ME_QUOTATION              102
#undef IDC_ME_AUTHOR
#define IDC_ME_AUTHOR                 103
#undef IDC_ME_RETRY
#define IDC_ME_RETRY                  104
#undef IDC_ME_LOAD
#define IDC_ME_LOAD                   105
#undef IDC_ME_RESTART
#define IDC_ME_RESTART                106
#undef IDC_ME_TEAM_SWITCH
#define IDC_ME_TEAM_SWITCH            107

// Get ready display
#undef IDC_GETREADY_NAME
#define IDC_GETREADY_NAME             101
#undef IDC_GETREADY_DESC
#define IDC_GETREADY_DESC             102
#undef IDC_GETREADY_PRIMARY
#define IDC_GETREADY_PRIMARY          105
#undef IDC_GETREADY_SECONDARY
#define IDC_GETREADY_SECONDARY        106
#undef IDC_GETREADY_PLAYER
#define IDC_GETREADY_PLAYER           107
#undef IDC_GETREADY_DATE
#define IDC_GETREADY_DATE             108
#undef IDC_GETREADY_MODE
#define IDC_GETREADY_MODE             110
#undef IDC_GETREADY_PRIMARY_TEXT
#define IDC_GETREADY_PRIMARY_TEXT     111
#undef IDC_GETREADY_SECONDARY_TEXT
#define IDC_GETREADY_SECONDARY_TEXT   112
#undef IDC_GETREADY_EDITMODE
#define IDC_GETREADY_EDITMODE         113
#undef IDC_GETREADY_TITLE
#define IDC_GETREADY_TITLE            114

#undef IDC_GEAR_UNIT
#define IDC_GEAR_UNIT                 101
#undef IDC_GEAR_SKILL
#define IDC_GEAR_SKILL                102
#undef IDC_GEAR_VEHICLE
#define IDC_GEAR_VEHICLE              103
#undef IDC_GEAR_POOL
#define IDC_GEAR_POOL                 105
#undef IDC_GEAR_OVERVIEW
#define IDC_GEAR_OVERVIEW             106
#undef IDC_GEAR_SLOT_PRIMARY
#define IDC_GEAR_SLOT_PRIMARY         107
#undef IDC_GEAR_SLOT_SECONDARY
#define IDC_GEAR_SLOT_SECONDARY       108
#undef IDC_GEAR_SLOT_ITEM1
#define IDC_GEAR_SLOT_ITEM1           109
#undef IDC_GEAR_SLOT_ITEM2
#define IDC_GEAR_SLOT_ITEM2           110
#undef IDC_GEAR_SLOT_ITEM3
#define IDC_GEAR_SLOT_ITEM3           111
#undef IDC_GEAR_SLOT_ITEM4
#define IDC_GEAR_SLOT_ITEM4           112
#undef IDC_GEAR_SLOT_ITEM5
#define IDC_GEAR_SLOT_ITEM5           113
#undef IDC_GEAR_SLOT_ITEM6
#define IDC_GEAR_SLOT_ITEM6           114
#undef IDC_GEAR_SLOT_ITEM7
#define IDC_GEAR_SLOT_ITEM7           115
#undef IDC_GEAR_SLOT_ITEM8
#define IDC_GEAR_SLOT_ITEM8           116
#undef IDC_GEAR_SLOT_ITEM9
#define IDC_GEAR_SLOT_ITEM9           117
#undef IDC_GEAR_SLOT_ITEM10
#define IDC_GEAR_SLOT_ITEM10          118
#undef IDC_GEAR_SLOT_ITEM11
#define IDC_GEAR_SLOT_ITEM11          119
#undef IDC_GEAR_SLOT_ITEM12
#define IDC_GEAR_SLOT_ITEM12          120
#undef IDC_GEAR_SLOT_HANDGUN
#define IDC_GEAR_SLOT_HANDGUN         121
#undef IDC_GEAR_SLOT_HANGUN_ITEM1
#define IDC_GEAR_SLOT_HANGUN_ITEM1    122
#undef IDC_GEAR_SLOT_HANGUN_ITEM2
#define IDC_GEAR_SLOT_HANGUN_ITEM2    123
#undef IDC_GEAR_SLOT_HANGUN_ITEM3
#define IDC_GEAR_SLOT_HANGUN_ITEM3    124
#undef IDC_GEAR_SLOT_HANGUN_ITEM4
#define IDC_GEAR_SLOT_HANGUN_ITEM4    125
#undef IDC_GEAR_SLOT_HANGUN_ITEM5
#define IDC_GEAR_SLOT_HANGUN_ITEM5    126
#undef IDC_GEAR_SLOT_HANGUN_ITEM6
#define IDC_GEAR_SLOT_HANGUN_ITEM6    127
#undef IDC_GEAR_SLOT_HANGUN_ITEM7
#define IDC_GEAR_SLOT_HANGUN_ITEM7    128
#undef IDC_GEAR_SLOT_HANGUN_ITEM8
#define IDC_GEAR_SLOT_HANGUN_ITEM8    129
#undef IDC_GEAR_SLOT_SPECIAL1
#define IDC_GEAR_SLOT_SPECIAL1        130
#undef IDC_GEAR_SLOT_SPECIAL2
#define IDC_GEAR_SLOT_SPECIAL2        131
#undef IDC_GEAR_REARM
#define IDC_GEAR_REARM                132
#undef IDC_GEAR_CONTINUE
#define IDC_GEAR_CONTINUE             133
#undef IDC_GEAR_SLOT_INVENTORY1
#define IDC_GEAR_SLOT_INVENTORY1      134
#undef IDC_GEAR_SLOT_INVENTORY2
#define IDC_GEAR_SLOT_INVENTORY2      135
#undef IDC_GEAR_SLOT_INVENTORY3
#define IDC_GEAR_SLOT_INVENTORY3      136
#undef IDC_GEAR_SLOT_INVENTORY4
#define IDC_GEAR_SLOT_INVENTORY4      137
#undef IDC_GEAR_SLOT_INVENTORY5
#define IDC_GEAR_SLOT_INVENTORY5      138
#undef IDC_GEAR_SLOT_INVENTORY6
#define IDC_GEAR_SLOT_INVENTORY6      139
#undef IDC_GEAR_SLOT_INVENTORY7
#define IDC_GEAR_SLOT_INVENTORY7      140
#undef IDC_GEAR_SLOT_INVENTORY8
#define IDC_GEAR_SLOT_INVENTORY8      141
#undef IDC_GEAR_SLOT_INVENTORY9
#define IDC_GEAR_SLOT_INVENTORY9      142
#undef IDC_GEAR_SLOT_INVENTORY10
#define IDC_GEAR_SLOT_INVENTORY10     143
#undef IDC_GEAR_SLOT_INVENTORY11
#define IDC_GEAR_SLOT_INVENTORY11     144
#undef IDC_GEAR_SLOT_INVENTORY12
#define IDC_GEAR_SLOT_INVENTORY12     145

#undef IDC_GEAR_ADD_ITEM
#define IDC_GEAR_ADD_ITEM             146
#undef IDC_GEAR_REMOVE_ITEM
#define IDC_GEAR_REMOVE_ITEM          147

#undef IDC_GEAR_FILTER
#define IDC_GEAR_FILTER 148
#undef IDC_GEAR_FILTER_ICON1
#define IDC_GEAR_FILTER_ICON1 149
#undef IDC_GEAR_FILTER_ICON2
#define IDC_GEAR_FILTER_ICON2 150
#undef IDC_GEAR_FILTER_ICON3
#define IDC_GEAR_FILTER_ICON3 151
#undef IDC_GEAR_FILTER_ICON4
#define IDC_GEAR_FILTER_ICON4 152
#undef IDC_GEAR_FILTER_ICON5
#define IDC_GEAR_FILTER_ICON5 153
#undef IDC_GEAR_FILTER_ICON6
#define IDC_GEAR_FILTER_ICON6 154

#undef IDC_GEAR_POOL_GROUP
#define IDC_GEAR_POOL_GROUP           155
#undef IDC_GEAR_SOURCE_NAME
#define IDC_GEAR_SOURCE_NAME          156
#undef IDC_GEAR_OPEN_BAG
#define IDC_GEAR_OPEN_BAG             157
#undef IDC_GEAR_CLOSE_BAG
#define IDC_GEAR_CLOSE_BAG            158
#undef IDC_GEAR_ADD_DEFAULT
#define IDC_GEAR_ADD_DEFAULT          255
#undef IDC_GEAR_CLEAR_ALL
#define IDC_GEAR_CLEAR_ALL            256
#undef IDC_BAG_ITEMS_GROUP
#define IDC_BAG_ITEMS_GROUP           159
#undef IDC_UNIT_ITEMS_GROUP
#define IDC_UNIT_ITEMS_GROUP          160

#undef IDC_GEAR_BAG_EMPTY
#define IDC_GEAR_BAG_EMPTY            5000
/*
#undef IDC_GEAR_BAG_EMPTY_SLOT1
#define IDC_GEAR_BAG_EMPTY_SLOT1      5000
#undef IDC_GEAR_BAG_EMPTY_SLOT2
#define IDC_GEAR_BAG_EMPTY_SLOT2      5001
#undef IDC_GEAR_BAG_EMPTY_SLOT3
#define IDC_GEAR_BAG_EMPTY_SLOT3      5002
.
.
.
#undef IDC_GEAR_BAG_EMPTY_SLOT499
#define IDC_GEAR_BAG_EMPTY_SLOT499    5498
#undef IDC_GEAR_BAG_EMPTY_SLOT500
#define IDC_GEAR_BAG_EMPTY_SLOT500    5499
*/
#undef IDC_GEAR_BAG_FULL
#define IDC_GEAR_BAG_FULL             5500

// Debriefing
/*
#undef IDC_DEBRIEFING_LEFT
#define IDC_DEBRIEFING_LEFT             101
#undef IDC_DEBRIEFING_RIGHT
#define IDC_DEBRIEFING_RIGHT            102
*/
#undef IDC_DEBRIEFING_STAT
#define IDC_DEBRIEFING_STAT             103
#undef IDC_DEBRIEFING_RESTART
#define IDC_DEBRIEFING_RESTART          104
#undef IDC_DEBRIEFING_PAD2
#define IDC_DEBRIEFING_PAD2             105
#undef IDC_DEBRIEFING_PLAYERS_TITLE_BG
#define IDC_DEBRIEFING_PLAYERS_TITLE_BG 106
#undef IDC_DEBRIEFING_PLAYERS_TITLE
#define IDC_DEBRIEFING_PLAYERS_TITLE    107
#undef IDC_DEBRIEFING_PLAYERS_BG
#define IDC_DEBRIEFING_PLAYERS_BG       108
#undef IDC_DEBRIEFING_PLAYERS
#define IDC_DEBRIEFING_PLAYERS          109
#undef IDC_DEBRIEFING_TIMEOUT
#define IDC_DEBRIEFING_TIMEOUT          110
#undef IDC_DEBRIEFING_RESULT
#define IDC_DEBRIEFING_RESULT           111
#undef IDC_DEBRIEFING_TITLE
#define IDC_DEBRIEFING_TITLE            112
#undef IDC_DEBRIEFING_DEBRIEFING
#define IDC_DEBRIEFING_DEBRIEFING       113
#undef IDC_DEBRIEFING_OBJECTIVES
#define IDC_DEBRIEFING_OBJECTIVES       114
#undef IDC_DEBRIEFING_INFO
#define IDC_DEBRIEFING_INFO             115
#undef IDC_DEBRIEFING_SHOW_PLAYERS
#define IDC_DEBRIEFING_SHOW_PLAYERS     116
#undef IDC_DEBRIEFING_SHOW_PAGE2
#define IDC_DEBRIEFING_SHOW_PAGE2       117
#undef IDC_DEBRIEFING_LIVE_STATS
#define IDC_DEBRIEFING_LIVE_STATS       118
#undef IDC_DEBRIEFING_PREV_PAGE
#define IDC_DEBRIEFING_PREV_PAGE        119
#undef IDC_DEBRIEFING_NEXT_PAGE
#define IDC_DEBRIEFING_NEXT_PAGE        120
#undef IDC_DEBRIEFING_LOAD
#define IDC_DEBRIEFING_LOAD             121
#undef IDC_DEBRIEFING_TEXT_GROUP
#define IDC_DEBRIEFING_TEXT_GROUP       122
#undef IDC_DEBRIEFING_OBJECTIVES_GROUP
#define IDC_DEBRIEFING_OBJECTIVES_GROUP 123
#undef IDC_DEBRIEFING_STATS_GROUP
#define IDC_DEBRIEFING_STATS_GROUP      124
#undef IDC_DEBRIEFING_MISSION_WORKSHOP
#define IDC_DEBRIEFING_MISSION_WORKSHOP 125
#undef IDC_DEBRIEFING_READY
#define IDC_DEBRIEFING_READY            126
#undef IDC_DEBRIEFING_DISCONNECT
#define IDC_DEBRIEFING_DISCONNECT       127

// Debug display
#undef IDC_DEBUG_EXP
#define IDC_DEBUG_EXP                 101
#undef IDC_DEBUG_APPLY
#define IDC_DEBUG_APPLY               102
#undef IDC_DEBUG_LOG
#define IDC_DEBUG_LOG                 103
#undef IDC_DEBUG_SEARCH
#define IDC_DEBUG_SEARCH              161
#undef IDC_DEBUG_SEARCH_BUTTON
#define IDC_DEBUG_SEARCH_BUTTON       162
#undef IDC_DEBUG_HISTORY
#define IDC_DEBUG_HISTORY             163

#undef IDC_DEBUG_EXP1
#define IDC_DEBUG_EXP1                121
#undef IDC_DEBUG_EXP2
#define IDC_DEBUG_EXP2                122
#undef IDC_DEBUG_EXP3
#define IDC_DEBUG_EXP3                123
#undef IDC_DEBUG_EXP4
#define IDC_DEBUG_EXP4                124

#undef IDC_DEBUG_RES1
#define IDC_DEBUG_RES1                141
#undef IDC_DEBUG_RES2
#define IDC_DEBUG_RES2                142
#undef IDC_DEBUG_RES3
#define IDC_DEBUG_RES3                143
#undef IDC_DEBUG_RES4
#define IDC_DEBUG_RES4                144

#undef IDC_DEBUG_CLEAR_LOG
#define IDC_DEBUG_CLEAR_LOG           151
#undef IDC_DEBUG_FILTER_EDIT
#define IDC_DEBUG_FILTER_EDIT         152

// Debug PhysX Display
#undef IDC_PHYSX_DEBUG_DIAGMODE
#define IDC_PHYSX_DEBUG_DIAGMODE      101
#undef IDC_PHYSX_DEBUG_DIAGMODEDRAW
#define IDC_PHYSX_DEBUG_DIAGMODEDRAW  102

#undef IDC_PHYSX_DEBUG_TERRAIN
#define IDC_PHYSX_DEBUG_TERRAIN       103
#undef IDC_PHYSX_DEBUG_STATIC
#define IDC_PHYSX_DEBUG_STATIC        104
#undef IDC_PHYSX_DEBUG_KINEMATIC
#define IDC_PHYSX_DEBUG_KINEMATIC     105
#undef IDC_PHYSX_DEBUG_DYNAMIC
#define IDC_PHYSX_DEBUG_DYNAMIC       106

#undef IDC_PHYSX_DEBUG_CHECK_BUTTONS_START
#define IDC_PHYSX_DEBUG_CHECK_BUTTONS_START     109
#undef IDC_PHYSX_DEBUG_WORLD_AXES
#define IDC_PHYSX_DEBUG_WORLD_AXES              110
#undef IDC_PHYSX_DEBUG_BODY_AXES
#define IDC_PHYSX_DEBUG_BODY_AXES               111
#undef IDC_PHYSX_DEBUG_BODY_MASS_AXES
#define IDC_PHYSX_DEBUG_BODY_MASS_AXES          112
#undef IDC_PHYSX_DEBUG_BODY_LIN_VELOCITY
#define IDC_PHYSX_DEBUG_BODY_LIN_VELOCITY       113
#undef IDC_PHYSX_DEBUG_BODY_ANG_VELOCITY
#define IDC_PHYSX_DEBUG_BODY_ANG_VELOCITY       114
#undef IDC_PHYSX_DEBUG_BODY_JOINT_GROUPS
#define IDC_PHYSX_DEBUG_BODY_JOINT_GROUPS       115
#undef IDC_PHYSX_DEBUG_JOINT_LOCAL_AXES
#define IDC_PHYSX_DEBUG_JOINT_LOCAL_AXES        116
#undef IDC_PHYSX_DEBUG_JOINT_WORLD_AXES
#define IDC_PHYSX_DEBUG_JOINT_WORLD_AXES        117
#undef IDC_PHYSX_DEBUG_JOINT_LIMITS
#define IDC_PHYSX_DEBUG_JOINT_LIMITS            118
#undef IDC_PHYSX_DEBUG_CONTACT_POINT
#define IDC_PHYSX_DEBUG_CONTACT_POINT           119
#undef IDC_PHYSX_DEBUG_CONTACT_NORMAL
#define IDC_PHYSX_DEBUG_CONTACT_NORMAL          120
#undef IDC_PHYSX_DEBUG_CONTACT_ERROR
#define IDC_PHYSX_DEBUG_CONTACT_ERROR           121
#undef IDC_PHYSX_DEBUG_CONTACT_FORCE
#define IDC_PHYSX_DEBUG_CONTACT_FORCE           122
#undef IDC_PHYSX_DEBUG_ACTOR_AXES
#define IDC_PHYSX_DEBUG_ACTOR_AXES              123
#undef IDC_PHYSX_DEBUG_COLLISION_AABBS
#define IDC_PHYSX_DEBUG_COLLISION_AABBS         124
#undef IDC_PHYSX_DEBUG_COLLISION_SHAPES
#define IDC_PHYSX_DEBUG_COLLISION_SHAPES        125
#undef IDC_PHYSX_DEBUG_COLLISION_AXES
#define IDC_PHYSX_DEBUG_COLLISION_AXES          126
#undef IDC_PHYSX_DEBUG_COLLISION_COMPOUNDS
#define IDC_PHYSX_DEBUG_COLLISION_COMPOUNDS     127
#undef IDC_PHYSX_DEBUG_COLLISION_VNORMALS
#define IDC_PHYSX_DEBUG_COLLISION_VNORMALS      128
#undef IDC_PHYSX_DEBUG_COLLISION_FNORMALS
#define IDC_PHYSX_DEBUG_COLLISION_FNORMALS      129
#undef IDC_PHYSX_DEBUG_COLLISION_EDGES
#define IDC_PHYSX_DEBUG_COLLISION_EDGES         130
#undef IDC_PHYSX_DEBUG_COLLISION_SPHERES
#define IDC_PHYSX_DEBUG_COLLISION_SPHERES       131
#undef IDC_PHYSX_DEBUG_COLLISION_STATIC
#define IDC_PHYSX_DEBUG_COLLISION_STATIC        132
#undef IDC_PHYSX_DEBUG_COLLISION_DYNAMIC
#define IDC_PHYSX_DEBUG_COLLISION_DYNAMIC       133
#undef IDC_PHYSX_DEBUG_COLLISION_FREE
#define IDC_PHYSX_DEBUG_COLLISION_FREE          134
#undef IDC_PHYSX_DEBUG_COLLISION_CCD
#define IDC_PHYSX_DEBUG_COLLISION_CCD           135
#undef IDC_PHYSX_DEBUG_COLLISION_SKELETONS
#define IDC_PHYSX_DEBUG_COLLISION_SKELETONS     136
#undef IDC_PHYSX_DEBUG_CHECK_BUTTONS_END
#define IDC_PHYSX_DEBUG_CHECK_BUTTONS_END       148

#undef IDC_PHYSX3_DEBUG_CHECK_BUTTONS_START
#define IDC_PHYSX3_DEBUG_CHECK_BUTTONS_START                  149
#undef IDC_PHYSX3_DEBUG_WORLD_AXES
#define IDC_PHYSX3_DEBUG_WORLD_AXES                           150
#undef IDC_PHYSX3_DEBUG_BODY_AXES
#define IDC_PHYSX3_DEBUG_BODY_AXES                            151
#undef IDC_PHYSX3_DEBUG_BODY_MASS_AXES
#define IDC_PHYSX3_DEBUG_BODY_MASS_AXES                       152
#undef IDC_PHYSX3_DEBUG_BODY_LIN_VELOCITY
#define IDC_PHYSX3_DEBUG_BODY_LIN_VELOCITY                    153
#undef IDC_PHYSX3_DEBUG_BODY_ANG_VELOCITY
#define IDC_PHYSX3_DEBUG_BODY_ANG_VELOCITY                    154
#undef IDC_PHYSX3_DEBUG_BODY_JOINT_GROUPS
#define IDC_PHYSX3_DEBUG_BODY_JOINT_GROUPS                    155
#undef IDC_PHYSX3_DEBUG_CONTACT_POINT
#define IDC_PHYSX3_DEBUG_CONTACT_POINT                        156
#undef IDC_PHYSX3_DEBUG_CONTACT_NORMAL
#define IDC_PHYSX3_DEBUG_CONTACT_NORMAL                       157
#undef IDC_PHYSX3_DEBUG_CONTACT_ERROR
#define IDC_PHYSX3_DEBUG_CONTACT_ERROR                        158
#undef IDC_PHYSX3_DEBUG_CONTACT_FORCE
#define IDC_PHYSX3_DEBUG_CONTACT_FORCE                        159
#undef IDC_PHYSX3_DEBUG_ACTOR_AXES
#define IDC_PHYSX3_DEBUG_ACTOR_AXES                           160
#undef IDC_PHYSX3_DEBUG_COLLISION_AABBS
#define IDC_PHYSX3_DEBUG_COLLISION_AABBS                      161
#undef IDC_PHYSX3_DEBUG_COLLISION_SHAPES
#define IDC_PHYSX3_DEBUG_COLLISION_SHAPES                     162
#undef IDC_PHYSX3_DEBUG_COLLISION_AXES
#define IDC_PHYSX3_DEBUG_COLLISION_AXES                       163
#undef IDC_PHYSX3_DEBUG_COLLISION_COMPOUNDS
#define IDC_PHYSX3_DEBUG_COLLISION_COMPOUNDS                  164
#undef IDC_PHYSX3_DEBUG_COLLISION_FNORMALS
#define IDC_PHYSX3_DEBUG_COLLISION_FNORMALS                   165
#undef IDC_PHYSX3_DEBUG_COLLISION_EDGES
#define IDC_PHYSX3_DEBUG_COLLISION_EDGES                      166
#undef IDC_PHYSX3_DEBUG_COLLISION_STATIC
#define IDC_PHYSX3_DEBUG_COLLISION_STATIC                     167
#undef IDC_PHYSX3_DEBUG_COLLISION_DYNAMIC
#define IDC_PHYSX3_DEBUG_COLLISION_DYNAMIC                    168
#undef IDC_PHYSX3_DEBUG_COLLISION_PAIRS
#define IDC_PHYSX3_DEBUG_COLLISION_PAIRS                      169
#undef IDC_PHYSX3_DEBUG_JOINT_LOCAL_AXES
#define IDC_PHYSX3_DEBUG_JOINT_LOCAL_AXES                     170
#undef IDC_PHYSX3_DEBUG_JOINT_LIMITS
#define IDC_PHYSX3_DEBUG_JOINT_LIMITS                         171
#undef IDC_PHYSX3_DEBUG_PARTICLE_SYSTEM_POSITION
#define IDC_PHYSX3_DEBUG_PARTICLE_SYSTEM_POSITION             172
#undef IDC_PHYSX3_DEBUG_PARTICLE_SYSTEM_VELOCITY
#define IDC_PHYSX3_DEBUG_PARTICLE_SYSTEM_VELOCITY             173
#undef IDC_PHYSX3_DEBUG_PARTICLE_SYSTEM_COLLISION_NORMAL
#define IDC_PHYSX3_DEBUG_PARTICLE_SYSTEM_COLLISION_NORMAL     174
#undef IDC_PHYSX3_DEBUG_PARTICLE_SYSTEM_BOUNDS
#define IDC_PHYSX3_DEBUG_PARTICLE_SYSTEM_BOUNDS               175
#undef IDC_PHYSX3_DEBUG_PARTICLE_SYSTEM_GRID
#define IDC_PHYSX3_DEBUG_PARTICLE_SYSTEM_GRID                 176
#undef IDC_PHYSX3_DEBUG_PARTICLE_SYSTEM_BROADPHASE_BOUNDS
#define IDC_PHYSX3_DEBUG_PARTICLE_SYSTEM_BROADPHASE_BOUNDS    177
#undef IDC_PHYSX3_DEBUG_PARTICLE_SYSTEM_MAX_MOTION_DISTANCE
#define IDC_PHYSX3_DEBUG_PARTICLE_SYSTEM_MAX_MOTION_DISTANCE  178
#undef IDC_PHYSX3_DEBUG_CHECK_BUTTONS_END
#define IDC_PHYSX3_DEBUG_CHECK_BUTTONS_END                    188

#undef IDC_PHYSX_DEBUG_ALL
#define IDC_PHYSX_DEBUG_ALL                     190
#undef IDC_PHYSX_DEBUG_NONE
#define IDC_PHYSX_DEBUG_NONE                    191
#undef IDC_PHYSX_DEBUG_DIAGMODEPERF
#define IDC_PHYSX_DEBUG_DIAGMODEPERF            192
#undef IDC_PHYSX_DEBUG_DIAGMODESTATS
#define IDC_PHYSX_DEBUG_DIAGMODESTATS           193

#undef IDC_PHYSX_DEBUG_USECONVEXSHAPES
#define IDC_PHYSX_DEBUG_USECONVEXSHAPES         194
#undef IDC_PHYSX_DEBUG_USEROADWAYS
#define IDC_PHYSX_DEBUG_USEROADWAYS             195
#undef IDC_PHYSX_DEBUG_USEONECAPSULE
#define IDC_PHYSX_DEBUG_USEONECAPSULE           196
#undef IDC_PHYSX_DEBUG_IMMEDIATEFETCH
#define IDC_PHYSX_DEBUG_IMMEDIATEFETCH          197

#undef IDC_PHYSX_DEBUG_BASIC
#define IDC_PHYSX_DEBUG_BASIC                   198

// DS interface display
#undef IDC_DSI_PLAYERLIST
#define IDC_DSI_PLAYERLIST            101
#undef IDC_DSI_MISSONLIST
#define IDC_DSI_MISSONLIST            102

// HintC display
#undef IDC_HINTC_BG
#define IDC_HINTC_BG                  101
#undef IDC_HINTC_HINT
#define IDC_HINTC_HINT                102
#undef IDC_HINTC_TITLE
#define IDC_HINTC_TITLE               103
#undef IDC_HINTC_CONTINUE
#define IDC_HINTC_CONTINUE            104
#undef IDC_HINTC_LINE1
#define IDC_HINTC_LINE1               105
#undef IDC_HINTC_LINE2
#define IDC_HINTC_LINE2               106

// Insert marker display
#undef IDC_INSERT_MARKER
#define IDC_INSERT_MARKER             101
#undef IDC_INSERT_MARKER_PICTURE
#define IDC_INSERT_MARKER_PICTURE     102
#undef IDC_INSERT_MARKER_CHANNELS
#define IDC_INSERT_MARKER_CHANNELS    103

// InGameUI
// - unit info
#undef IDC_IGUI_TIME
#define IDC_IGUI_TIME                 101
#undef IDC_IGUI_DATE
#define IDC_IGUI_DATE                 102
#undef IDC_IGUI_NAME
#define IDC_IGUI_NAME                 103
#undef IDC_IGUI_UNIT
#define IDC_IGUI_UNIT                 104
#undef IDC_IGUI_VALUE_EXP
#define IDC_IGUI_VALUE_EXP            106
#undef IDC_IGUI_COMBAT_MODE
#define IDC_IGUI_COMBAT_MODE          107
#undef IDC_IGUI_VALUE_HEALTH
#define IDC_IGUI_VALUE_HEALTH         109
#undef IDC_IGUI_HITZONES
#define IDC_IGUI_HITZONES             111
#undef IDC_IGUI_VALUE_FUEL
#define IDC_IGUI_VALUE_FUEL           113
#undef IDC_IGUI_CARGO_MAN
#define IDC_IGUI_CARGO_MAN            114
#undef IDC_IGUI_CARGO_FUEL
#define IDC_IGUI_CARGO_FUEL           115
#undef IDC_IGUI_CARGO_REPAIR
#define IDC_IGUI_CARGO_REPAIR         116
#undef IDC_IGUI_CARGO_AMMO
#define IDC_IGUI_CARGO_AMMO           117
#undef IDC_IGUI_WEAPON
#define IDC_IGUI_WEAPON               118
#undef IDC_IGUI_AMMO
#define IDC_IGUI_AMMO                 119
#undef IDC_IGUI_VEHICLE
#define IDC_IGUI_VEHICLE              120
#undef IDC_IGUI_SPEED
#define IDC_IGUI_SPEED                121
#undef IDC_IGUI_ALT
#define IDC_IGUI_ALT                  122
#undef IDC_IGUI_FORMATION
#define IDC_IGUI_FORMATION            123
#undef IDC_IGUI_BG
#define IDC_IGUI_BG                   124
#undef IDC_IGUI_COMMANDER
#define IDC_IGUI_COMMANDER            125
#undef IDC_IGUI_DRIVER
#define IDC_IGUI_DRIVER               126
#undef IDC_IGUI_GUNNER
#define IDC_IGUI_GUNNER               127

#undef IDC_IGUI_SPEED_FREEFALL
#define IDC_IGUI_SPEED_FREEFALL             380
#undef IDC_IGUI_SPEED_VERTICAL_FREEFALL
#define IDC_IGUI_SPEED_VERTICAL_FREEFALL    381
#undef IDC_IGUI_ALT_FREEFALL
#define IDC_IGUI_ALT_FREEFALL               382

#undef IDC_IGUI_ANALOGUE_HORIZON
#define IDC_IGUI_ANALOGUE_HORIZON           383
#undef IDC_IGUI_ANALOGUE_SPEED_LADDER
#define IDC_IGUI_ANALOGUE_SPEED_LADDER      384
#undef IDC_IGUI_ANALOGUE_ALT_LADDER
#define IDC_IGUI_ANALOGUE_ALT_LADDER        385

#undef IDC_IGUI_OPTICS_GROUP
#define IDC_IGUI_OPTICS_GROUP               390
#undef IDC_IGUI_DRIVER_GROUP
#define IDC_IGUI_DRIVER_GROUP               391
#undef IDC_IGUI_DRIVER_OPTICS_GROUP
#define IDC_IGUI_DRIVER_OPTICS_GROUP        392
#undef IDC_IGUI_VEHICLE_PITCH
#define IDC_IGUI_VEHICLE_PITCH              393


//AV_Terminal
#undef IDC_IGUI_AVT_NAME
#define IDC_IGUI_AVT_NAME          100
#undef IDC_IGUI_AVT_TAKE_CONTROL
#define IDC_IGUI_AVT_TAKE_CONTROL  101
#undef IDC_IGUI_AVT_STATUS
#define IDC_IGUI_AVT_STATUS        102
#undef IDC_IGUI_AVT_TARGET
#define IDC_IGUI_AVT_TARGET        103
#undef IDC_IGUI_AVT_POSITION
#define IDC_IGUI_AVT_POSITION      104
#undef IDC_IGUI_AVT_PIP1
#define IDC_IGUI_AVT_PIP1          105
#undef IDC_IGUI_AVT_PIP2
#define IDC_IGUI_AVT_PIP2          106
#undef IDC_IGUI_AVT_COUNT
#define IDC_IGUI_AVT_COUNT         107
#undef IDC_IGUI_AVT_EDITOR_MENU
#define IDC_IGUI_AVT_EDITOR_MENU   108
#undef IDC_IGUI_AVT_FUEL
#define IDC_IGUI_AVT_FUEL          109
#undef IDC_IGUI_AVT_WEAPON
#define IDC_IGUI_AVT_WEAPON        110
#undef IDC_IGUI_AVT_AMMO
#define IDC_IGUI_AVT_AMMO          111
#undef IDC_IGUI_AVT_WEAPON_SEC
#define IDC_IGUI_AVT_WEAPON_SEC    112
#undef IDC_IGUI_AVT_AMMO_SEC
#define IDC_IGUI_AVT_AMMO_SEC      113
#undef IDC_IGUI_AVT_TAKE_CONTROL_DRIVER
#define IDC_IGUI_AVT_TAKE_CONTROL_DRIVER  114
#undef IDC_IGUI_AVT_TAKE_CONTROL_GUNNER
#define IDC_IGUI_AVT_TAKE_CONTROL_GUNNER  115
#undef IDC_IGUI_AVT_AUTONOMOUS
#define IDC_IGUI_AVT_AUTONOMOUS           116
#undef IDC_IGUI_AVT_COMBO
#define IDC_IGUI_AVT_COMBO                117
#undef IDC_IGUI_AVT_ALLOW_LIGHTS
#define IDC_IGUI_AVT_ALLOW_LIGHTS         118

//AV Camera
#undef IDC_IGUI_AVC_PIP_DRIVER
#define IDC_IGUI_AVC_PIP_DRIVER         100
#undef IDC_IGUI_AVC_PIP_GUNNER
#define IDC_IGUI_AVC_PIP_GUNNER         101
#undef IDC_IGUI_AVC_PIP_SINGLE_VIEW
#define IDC_IGUI_AVC_PIP_SINGLE_VIEW    102
#undef IDC_IGUI_AVC_PIP_SOURCE
#define IDC_IGUI_AVC_PIP_SOURCE			103
#undef IDC_IGUI_AVC_PIP_HEADING
#define IDC_IGUI_AVC_PIP_HEADING		104
#undef IDC_IGUI_AVC_PIP_MODE
#define IDC_IGUI_AVC_PIP_MODE			105

//Sling Load Assistant
#undef IDC_SLA_MAP
#define IDC_SLA_MAP                     100
#undef IDC_SLA_HDIST
#define IDC_SLA_HDIST                   101
#undef IDC_SLA_VDIST
#define IDC_SLA_VDIST                   102
#undef IDC_SLA_STATUS
#define IDC_SLA_STATUS                  103
#undef IDC_SLA_LIFT_PROGRESS
#define IDC_SLA_LIFT_PROGRESS           104
#undef IDC_SLA_HEIGHT_BAR
#define IDC_SLA_HEIGHT_BAR              105
#undef IDC_SLA_MAX_ALT
#define IDC_SLA_MAX_ALT                 106
#undef IDC_SLA_VIEWPORT
#define IDC_SLA_VIEWPORT                107

//Sensors Display
#undef IDC_SENS_VIEWPORT
#define IDC_SENS_VIEWPORT               101
#undef IDC_SENS_CIRCLES
#define IDC_SENS_CIRCLES                102
#undef IDC_SENS_VEHICLE
#define IDC_SENS_VEHICLE                103
#undef IDC_SENS_RANGE
#define IDC_SENS_RANGE                  104
#undef IDC_SENS_RADARON
#define IDC_SENS_RADARON           		105
#undef IDC_SENS_RADAROFF
#define IDC_SENS_RADAROFF           	106
#undef IDC_SENS_TARGET
#define IDC_SENS_TARGET                 107
#undef IDC_SENS_TARGETRANGE
#define IDC_SENS_TARGETRANGE            108
#undef IDC_SENS_TARGETSPEED
#define IDC_SENS_TARGETSPEED            109
#undef IDC_SENS_TARGETALT
#define IDC_SENS_TARGETALT				110
#undef IDC_SENS_HEADING
#define IDC_SENS_HEADING				111

//Mine detector Display
#undef IDC_MINEDETECT_VIEWPORT
#define IDC_MINEDETECT_VIEWPORT               101
#undef IDC_MINEDETECT_CIRCLES
#define IDC_MINEDETECT_CIRCLES                102
#undef IDC_MINEDETECT_VEHICLE
#define IDC_MINEDETECT_VEHICLE                103
#undef IDC_MINEDETECT_RANGE
#define IDC_MINEDETECT_RANGE                  104

//Crew list
#undef IDC_CREW_VEHICLE
#define IDC_CREW_VEHICLE                101
#undef IDC_CREW_LIST
#define IDC_CREW_LIST					102

//MP Score Table
#undef IDC_MP_SCORE_TABLE_TITLE
#define IDC_MP_SCORE_TABLE_TITLE          101
#undef IDC_MP_SCORE_TABLE_PLAYERS_LIST
#define IDC_MP_SCORE_TABLE_PLAYERS_LIST   102
#undef IDC_MP_SCORE_TABLE_SIDES_LIST
#define IDC_MP_SCORE_TABLE_SIDES_LIST     103
#undef IDC_MP_SCORE_TABLE_LINE_TEMPLATE
#define IDC_MP_SCORE_TABLE_LINE_TEMPLATE  104
#undef IDC_MP_SCORE_TABLE_LINE_BACK
#define IDC_MP_SCORE_TABLE_LINE_BACK      105
#undef IDC_MP_SCORE_TABLE_ORDER
#define IDC_MP_SCORE_TABLE_ORDER          106
#undef IDC_MP_SCORE_TABLE_PLAYERSNAME
#define IDC_MP_SCORE_TABLE_PLAYERSNAME    107
#undef IDC_MP_SCORE_TABLE_KILLS_INF
#define IDC_MP_SCORE_TABLE_KILLS_INF      108
#undef IDC_MP_SCORE_TABLE_KILLS_SOFT
#define IDC_MP_SCORE_TABLE_KILLS_SOFT     109
#undef IDC_MP_SCORE_TABLE_KILLS_ARMOR
#define IDC_MP_SCORE_TABLE_KILLS_ARMOR    110
#undef IDC_MP_SCORE_TABLE_KILLS_AIR
#define IDC_MP_SCORE_TABLE_KILLS_AIR      111
#undef IDC_MP_SCORE_TABLE_KILLED
#define IDC_MP_SCORE_TABLE_KILLED         112
#undef IDC_MP_SCORE_TABLE_KILLSTOTAL
#define IDC_MP_SCORE_TABLE_KILLSTOTAL     113

//Vehicle MessageBox
#undef IDC_VEHICLEMSGBOX_BACKGROUND
#define IDC_VEHICLEMSGBOX_BACKGROUND    100
#undef IDC_VEHICLEMSGBOX_LOGO
#define IDC_VEHICLEMSGBOX_LOGO          101
#undef IDC_VEHICLEMSGBOX_TEXT
#define IDC_VEHICLEMSGBOX_TEXT          102
#undef IDC_VEHICLEMSGBOX_PURCHASE
#define IDC_VEHICLEMSGBOX_PURCHASE      103

//Action Notification
#undef IDC_DLC_ACTION_NOTIFICATION_GROUP
#define IDC_DLC_ACTION_NOTIFICATION_GROUP 11406
#undef IDC_DLC_ACTION_NOTIFICATION_LOGO
#define IDC_DLC_ACTION_NOTIFICATION_LOGO 100
#undef IDC_DLC_ACTION_NOTIFICATION_TEXT
#define IDC_DLC_ACTION_NOTIFICATION_TEXT 101
#undef IDC_DLC_ACTION_NOTIFICATION_TITLE
#define IDC_DLC_ACTION_NOTIFICATION_TITLE 102

//first aid icons
#undef IDC_IGUI_BLEEDING0
#define IDC_IGUI_BLEEDING0            401
#undef IDC_IGUI_BLEEDING1
#define IDC_IGUI_BLEEDING1            402
#undef IDC_IGUI_INJURED_HEAD0
#define IDC_IGUI_INJURED_HEAD0        403
#undef IDC_IGUI_INJURED_HEAD1
#define IDC_IGUI_INJURED_HEAD1        404
#undef IDC_IGUI_INJURED_HANDS0
#define IDC_IGUI_INJURED_HANDS0       405
#undef IDC_IGUI_INJURED_HANDS1
#define IDC_IGUI_INJURED_HANDS1       406
#undef IDC_IGUI_INJURED_HANDS2
#define IDC_IGUI_INJURED_HANDS2       407
#undef IDC_IGUI_INJURED_LEGS0
#define IDC_IGUI_INJURED_LEGS0        408
#undef IDC_IGUI_INJURED_LEGS1
#define IDC_IGUI_INJURED_LEGS1        409
#undef IDC_IGUI_INJURED_LEGS2
#define IDC_IGUI_INJURED_LEGS2        410
#undef IDC_IGUI_BODY
#define IDC_IGUI_BODY                 411
#undef IDC_IGUI_VALUE_OXYGEN
#define IDC_IGUI_VALUE_OXYGEN         412
#undef IDC_IGUI_BURNING
#define IDC_IGUI_BURNING              413

#undef IDC_IGUI_ALT_WANTED
#define IDC_IGUI_ALT_WANTED           128
#undef IDC_IGUI_SPEED_WANTED
#define IDC_IGUI_SPEED_WANTED         129
#undef IDC_IGUI_POSITION
#define IDC_IGUI_POSITION             130
#undef IDC_IGUI_OPTIC
#define IDC_IGUI_OPTIC                131

// _VBS3
  #undef IDC_IGUI_MAGAZINE
  #define IDC_IGUI_MAGAZINE             132
  #undef IDC_IGUI_OVR_STATUS
  #define IDC_IGUI_OVR_STATUS           133
  //TI
  #undef IDC_IGUI_TI_BACK
  #define IDC_IGUI_TI_BACK              134
  #undef IDC_IGUI_TI_MODE
  #define IDC_IGUI_TI_MODE              135
  #undef IDC_IGUI_TI_BRIGHTNESS_TXT
  #define IDC_IGUI_TI_BRIGHTNESS_TXT    136
  #undef IDC_IGUI_TI_BRIGHTNESS
  #define IDC_IGUI_TI_BRIGHTNESS        137
  #undef IDC_IGUI_TI_CONTRAST_TXT
  #define IDC_IGUI_TI_CONTRAST_TXT      138
  #undef IDC_IGUI_TI_CONTRAST
  #define IDC_IGUI_TI_CONTRAST          139
  #undef IDC_IGUI_TI_AUTO_CONTRAST
  #define IDC_IGUI_TI_AUTO_CONTRAST     140

  //LASE
  #undef IDC_IGLR_RANGE
  #define IDC_IGLR_RANGE                141
  #undef IDC_IGLR_BG
  #define IDC_IGLR_BG                   142
  #undef IDC_IGLR_RANGE_NUM
  #define IDC_IGLR_RANGE_NUM            143

  //AVRS
  #undef IDC_IGUI_NICK
  #define IDC_IGUI_NICK                 144
  #undef IDC_IGUI_NICK_VAL
  #define IDC_IGUI_NICK_VAL             145
  #undef IDC_IGUI_BANK
  #define IDC_IGUI_BANK                 146
  #undef IDC_IGUI_BANK_VAL
  #define IDC_IGUI_BANK_VAL             147
// !_VBS3
#undef IDC_IGUI_HEADING
#define IDC_IGUI_HEADING                148

// !new arrowhead
#undef IDC_IGUI_WEAPON_MODE
#define IDC_IGUI_WEAPON_MODE            149
#undef IDC_IGUI_WEAPON_GUNNER
#define IDC_IGUI_WEAPON_GUNNER          150
#undef IDC_IGUI_COUNTER_MEASURES_AMMO
#define IDC_IGUI_COUNTER_MEASURES_AMMO  151
#undef IDC_IGUI_COUNTER_MEASURES_MODE
#define IDC_IGUI_COUNTER_MEASURES_MODE  152

#undef IDC_IGUI_RADARRANGE
#define IDC_IGUI_RADARRANGE             153
#undef IDC_IGUI_VALUE_RELOAD
#define IDC_IGUI_VALUE_RELOAD           154
#undef IDC_IGUI_WEAPON_AMMO
#define IDC_IGUI_WEAPON_AMMO            155

// New Arma 3
#undef IDC_IGUI_STANCE_INDICATOR
#define IDC_IGUI_STANCE_INDICATOR       188
#undef IDC_IGUI_GPS_PLAYER
#define IDC_IGUI_GPS_PLAYER             189
#undef IDC_IGUI_SPEED2
#define IDC_IGUI_SPEED2                 190
#undef IDC_IGUI_ALT2
#define IDC_IGUI_ALT2                   191
#undef IDC_IGUI_PILOT_OPTIC_ZOOM
#define IDC_IGUI_PILOT_OPTIC_ZOOM       192
#undef IDC_IGUI_STAMINA_BAR
#define IDC_IGUI_STAMINA_BAR            193

// weapon/turret info controls
#undef IDC_IGUI_WEAPON_DISTANCE
#define IDC_IGUI_WEAPON_DISTANCE        151
#undef IDC_IGUI_WEAPON_VISION_MODE
#define IDC_IGUI_WEAPON_VISION_MODE     152
#undef IDC_IGUI_WEAPON_FLIR_MODE
#define IDC_IGUI_WEAPON_FLIR_MODE       153
#undef IDC_IGUI_WEAPON_FOV_MODE
#define IDC_IGUI_WEAPON_FOV_MODE        154
#undef IDC_IGUI_WEAPON_COMPASS
#define IDC_IGUI_WEAPON_COMPASS         155
#undef IDC_IGUI_WEAPON_HEADING
#define IDC_IGUI_WEAPON_HEADING         156
#undef IDC_IGUI_WEAPON_AUTOHOVER
#define IDC_IGUI_WEAPON_AUTOHOVER       157
#undef IDC_IGUI_WEAPON_LASER_MARKER_ON
#define IDC_IGUI_WEAPON_LASER_MARKER_ON 158
#undef IDC_IGUI_WEAPON_BALL_ENABLED
#define IDC_IGUI_WEAPON_BALL_ENABLED    159
#undef IDC_IGUI_WEAPON_JAVELIN_DAY
#define IDC_IGUI_WEAPON_JAVELIN_DAY     160
#undef IDC_IGUI_WEAPON_JAVELIN_FLTR
#define IDC_IGUI_WEAPON_JAVELIN_FLTR    161
#undef IDC_IGUI_WEAPON_JAVELIN_NFOV
#define IDC_IGUI_WEAPON_JAVELIN_NFOV    162
#undef IDC_IGUI_WEAPON_JAVELIN_WFOV
#define IDC_IGUI_WEAPON_JAVELIN_WFOV    163
#undef IDC_IGUI_WEAPON_BALL_RANGE
#define IDC_IGUI_WEAPON_BALL_RANGE      164
#undef IDC_IGUI_WEAPON_BALISTIC_COMP
#define IDC_IGUI_WEAPON_BALISTIC_COMP   165
#undef IDC_IGUI_WEAPON_JAVELIN_SEEK
#define IDC_IGUI_WEAPON_JAVELIN_SEEK    166
#undef IDC_IGUI_WEAPON_JAVELIN_MISSLE
#define IDC_IGUI_WEAPON_JAVELIN_MISSLE  167
#undef IDC_IGUI_WEAPON_ELEVATION
#define IDC_IGUI_WEAPON_ELEVATION       168
#undef IDC_IGUI_WEAPON_ELEVATION_TEXT
#define IDC_IGUI_WEAPON_ELEVATION_TEXT  169
#undef IDC_IGUI_WEAPON_STATIC_ITEMS
#define IDC_IGUI_WEAPON_STATIC_ITEMS    170
#undef IDC_IGUI_WEAPON_GPS_PLAYER
#define IDC_IGUI_WEAPON_GPS_PLAYER      171
#undef IDC_IGUI_WEAPON_GPS_TARGET
#define IDC_IGUI_WEAPON_GPS_TARGET      172
#undef IDC_IGUI_WEAPON_ARTI_DIST
#define IDC_IGUI_WEAPON_ARTI_DIST       173
#undef IDC_IGUI_WEAPON_ARTI_TIME
#define IDC_IGUI_WEAPON_ARTI_TIME       174
#undef IDC_IGUI_WEAPON_ARTI_ELEV
#define IDC_IGUI_WEAPON_ARTI_ELEV       175
#undef IDC_IGUI_WEAPON_ARTI_ELEV_NEED
#define IDC_IGUI_WEAPON_ARTI_ELEV_NEED  176
#undef IDC_IGUI_WEAPON_ARTI_OUT_RANGE
#define IDC_IGUI_WEAPON_ARTI_OUT_RANGE  177
#undef IDC_IGUI_WEAPON_ARTI_AUTO_ELEV
#define IDC_IGUI_WEAPON_ARTI_AUTO_ELEV  178
#undef IDC_IGUI_WEAPON_VISION_MODE2
#define IDC_IGUI_WEAPON_VISION_MODE2    179
#undef IDC_IGUI_WEAPON_OPTICS_ZOOM
#define IDC_IGUI_WEAPON_OPTICS_ZOOM     180
#undef IDC_IGUI_WEAPON_TARGET_UNIT
#define IDC_IGUI_WEAPON_TARGET_UNIT     181
#undef IDC_IGUI_WEAPON_OPTICS_PITCH
#define IDC_IGUI_WEAPON_OPTICS_PITCH    182
#undef IDC_IGUI_WEAPON_DISTANCE2
#define IDC_IGUI_WEAPON_DISTANCE2       183

// unit info (to preserve order) - new A3
#undef IDC_IGUI_AMMOCOUNT
#define IDC_IGUI_AMMOCOUNT              184
#undef IDC_IGUI_MAGCOUNT
#define IDC_IGUI_MAGCOUNT               185

#undef IDC_IGUI_DEPTH
#define IDC_IGUI_DEPTH                  186
#undef IDC_IGUI_WEAPON_MODE_TEXTURE
#define IDC_IGUI_WEAPON_MODE_TEXTURE    187
#undef IDC_IGUI_WEAPON_SPEED
#define IDC_IGUI_WEAPON_SPEED           188
#undef IDC_IGUI_WEAPON_ALT
#define IDC_IGUI_WEAPON_ALT             189
#undef IDC_IGUI_WEAPON_TIME
#define IDC_IGUI_WEAPON_TIME            190

#undef IDC_IGUI_WEAPON_CAM_TRACK_AREA
#define IDC_IGUI_WEAPON_CAM_TRACK_AREA        	194
#undef IDC_IGUI_WEAPON_CAM_TRACK_TARGET
#define IDC_IGUI_WEAPON_CAM_TRACK_TARGET      	195

#undef IDC_IGUI_WEAPON_JAVELIN_ATTACK_FROM_TOP
#define IDC_IGUI_WEAPON_JAVELIN_ATTACK_FROM_TOP 196
#undef IDC_IGUI_WEAPON_JAVELIN_ATTACK_DIRECT
#define IDC_IGUI_WEAPON_JAVELIN_ATTACK_DIRECT  	197

#undef IDC_IGUI_WEAPON_LASED_DISTANCE
#define IDC_IGUI_WEAPON_LASED_DISTANCE          198
#undef IDC_IGUI_WEAPON_LASED_SPEED
#define IDC_IGUI_WEAPON_LASED_SPEED             199
#undef IDC_IGUI_WEAPON_LASED_VALID
#define IDC_IGUI_WEAPON_LASED_VALID             200
#undef IDC_IGUI_WEAPON_LASED_ERR_LEAD
#define IDC_IGUI_WEAPON_LASED_ERR_LEAD 			201
#undef IDC_IGUI_WEAPON_LASED_ERR_ELEV
#define IDC_IGUI_WEAPON_LASED_ERR_ELEV 			202
#undef IDC_IGUI_WEAPON_LASED_ERR_OBJECT
#define IDC_IGUI_WEAPON_LASED_ERR_OBJECT 		203
#undef IDC_IGUI_WEAPON_LASER_ZEROING_DELAY
#define IDC_IGUI_WEAPON_LASER_ZEROING_DELAY     204

#undef IDC_IGUI_THROTTLE
#define IDC_IGUI_THROTTLE						205
#undef IDC_IGUI_VEHICLE_DIRECTION
#define IDC_IGUI_VEHICLE_DIRECTION 				206
#undef IDC_IGUI_VEHICLE_DIRECTION2
#define IDC_IGUI_VEHICLE_DIRECTION2				207





// helicopter unit info
#undef  IDC_IGUI_GMETER
#define  IDC_IGUI_GMETER                      501
#undef  IDC_IGUI_RADARALTIMETER
#define  IDC_IGUI_RADARALTIMETER              505
#undef  IDC_IGUI_RADARALTIMETER_BAR
#define  IDC_IGUI_RADARALTIMETER_BAR          506
#undef  IDC_IGUI_RADARALTIMETER_VALUE
#define  IDC_IGUI_RADARALTIMETER_VALUE        507
#undef  IDC_IGUI_TORQUE
#define  IDC_IGUI_TORQUE                      510
#undef  IDC_IGUI_WINDINDICATOR
#define  IDC_IGUI_WINDINDICATOR               515
#undef  IDC_IGUI_WINDINDICATOR_TEXT
#define  IDC_IGUI_WINDINDICATOR_TEXT          516
#undef  IDC_IGUI_WINDINDICATOR_IMAGE
#define  IDC_IGUI_WINDINDICATOR_IMAGE         517
#undef  IDC_IGUI_STABILITYINDICATOR
#define  IDC_IGUI_STABILITYINDICATOR          520
#undef  IDC_IGUI_STABILITYINDICATOR_AXIS
#define  IDC_IGUI_STABILITYINDICATOR_AXIS     521
#undef  IDC_IGUI_STABILITYINDICATOR_OFFSET
#define  IDC_IGUI_STABILITYINDICATOR_OFFSET   522
#undef  IDC_IGUI_COLLECTIVE
#define  IDC_IGUI_COLLECTIVE                  525
#undef  IDC_IGUI_AIRSPEEDINDICATOR
#define  IDC_IGUI_AIRSPEEDINDICATOR           530
#undef  IDC_IGUI_AIRSPEEDINDICATOR_AXIS
#define  IDC_IGUI_AIRSPEEDINDICATOR_AXIS      531
#undef  IDC_IGUI_AIRSPEEDINDICATOR_VALUE
#define  IDC_IGUI_AIRSPEEDINDICATOR_VALUE     532
#undef  IDC_IGUI_ALTIMETER
#define  IDC_IGUI_ALTIMETER                   535
#undef  IDC_IGUI_ALTIMETER_AXIS
#define  IDC_IGUI_ALTIMETER_AXIS              536
#undef  IDC_IGUI_ALTIMETER_VALUE
#define  IDC_IGUI_ALTIMETER_VALUE             537
#undef  IDC_IGUI_ATTITUDEINDICATOR
#define  IDC_IGUI_ATTITUDEINDICATOR           540
#undef  IDC_IGUI_ATTITUDEINDICATOR_LITE
#define  IDC_IGUI_ATTITUDEINDICATOR_LITE      541
#undef  IDC_IGUI_TRIMINDICATOR
#define  IDC_IGUI_TRIMINDICATOR               545
#undef  IDC_IGUI_AUTOHOVERNDICATOR
#define  IDC_IGUI_AUTOHOVERNDICATOR           546
#undef  IDC_IGUI_HELIHUD_MISCELLANEOUS
#define  IDC_IGUI_HELIHUD_MISCELLANEOUS       550

// helicopter Analogue unit info
#undef  IDC_IGUI_ANALOGUE_SPEED
#define  IDC_IGUI_ANALOGUE_SPEED              601
#undef  IDC_IGUI_ANALOGUE_SPEED_NEEDLE
#define  IDC_IGUI_ANALOGUE_SPEED_NEEDLE       602
#undef  IDC_IGUI_ANALOGUE_SPEED_MIN
#define  IDC_IGUI_ANALOGUE_SPEED_MIN          603
#undef  IDC_IGUI_ANALOGUE_SPEED_MAX
#define  IDC_IGUI_ANALOGUE_SPEED_MAX          604
#undef  IDC_IGUI_ANALOGUE_SPEED_TEXT
#define  IDC_IGUI_ANALOGUE_SPEED_TEXT         605
#undef  IDC_IGUI_ANALOGUE_SPEED_IMPERIAL
#define  IDC_IGUI_ANALOGUE_SPEED_IMPERIAL     606
#undef  IDC_IGUI_ANALOGUE_SPEED_METRIC
#define  IDC_IGUI_ANALOGUE_SPEED_METRIC       607

#undef  IDC_IGUI_ANALOGUE_ALTITUDE
#define  IDC_IGUI_ANALOGUE_ALTITUDE           611
#undef  IDC_IGUI_ANALOGUE_ALTITUDE_NEEDLE
#define  IDC_IGUI_ANALOGUE_ALTITUDE_NEEDLE    612
#undef  IDC_IGUI_ANALOGUE_ALTITUDE_MIN
#define  IDC_IGUI_ANALOGUE_ALTITUDE_MIN       613
#undef  IDC_IGUI_ANALOGUE_ALTITUDE_MAX
#define  IDC_IGUI_ANALOGUE_ALTITUDE_MAX       614
#undef  IDC_IGUI_ANALOGUE_ALTITUDE_TEXT
#define  IDC_IGUI_ANALOGUE_ALTITUDE_TEXT      615
#undef  IDC_IGUI_ANALOGUE_ALTITUDE_IMPERIAL
#define  IDC_IGUI_ANALOGUE_ALTITUDE_IMPERIAL  616
#undef  IDC_IGUI_ANALOGUE_ALTITUDE_METRIC
#define  IDC_IGUI_ANALOGUE_ALTITUDE_METRIC    617

#undef  IDC_IGUI_ANALOGUE_ATTITUDE
#define  IDC_IGUI_ANALOGUE_ATTITUDE           621
#undef  IDC_IGUI_ANALOGUE_ATTITUDE_HORIZON
#define  IDC_IGUI_ANALOGUE_ATTITUDE_HORIZON   622
#undef  IDC_IGUI_ANALOGUE_ATTITUDE_VALUE
#define  IDC_IGUI_ANALOGUE_ATTITUDE_VALUE     623

#undef  IDC_IGUI_ANALOGUE_COMPASS
#define  IDC_IGUI_ANALOGUE_COMPASS            631
#undef  IDC_IGUI_ANALOGUE_COMPASS_DIR
#define  IDC_IGUI_ANALOGUE_COMPASS_DIR        632
#undef  IDC_IGUI_ANALOGUE_COMPASS_WIND
#define  IDC_IGUI_ANALOGUE_COMPASS_WIND       633
#undef  IDC_IGUI_ANALOGUE_COMPASS_WAYPOINT
#define  IDC_IGUI_ANALOGUE_COMPASS_WAYPOINT   634
#undef  IDC_IGUI_ANALOGUE_COMPASS_MIN
#define  IDC_IGUI_ANALOGUE_COMPASS_MIN        635
#undef  IDC_IGUI_ANALOGUE_COMPASS_MAX
#define  IDC_IGUI_ANALOGUE_COMPASS_MAX        636
#undef  IDC_IGUI_ANALOGUE_COMPASS_TEXT
#define  IDC_IGUI_ANALOGUE_COMPASS_TEXT       637
#undef  IDC_IGUI_ANALOGUE_COMPASS_WIND_TEXT
#define  IDC_IGUI_ANALOGUE_COMPASS_WIND_TEXT  638

#undef  IDC_IGUI_ANALOGUE_STABILITY
#define  IDC_IGUI_ANALOGUE_STABILITY                641
#undef  IDC_IGUI_ANALOGUE_STABILITY_SPEED
#define  IDC_IGUI_ANALOGUE_STABILITY_SPEED          642
#undef  IDC_IGUI_ANALOGUE_STABILITY_TEXT
#define  IDC_IGUI_ANALOGUE_STABILITY_TEXT           643
#undef  IDC_IGUI_ANALOGUE_STABILITY_VSPEED_NEEDLE
#define  IDC_IGUI_ANALOGUE_STABILITY_VSPEED_NEEDLE  644
#undef  IDC_IGUI_ANALOGUE_STABILITY_COLLECTIVE
#define  IDC_IGUI_ANALOGUE_STABILITY_COLLECTIVE     645
#undef  IDC_IGUI_ANALOGUE_STABILITY_VSPEED
#define  IDC_IGUI_ANALOGUE_STABILITY_VSPEED         646
#undef  IDC_IGUI_ANALOGUE_STABILITY_IMPERIAL
#define  IDC_IGUI_ANALOGUE_STABILITY_IMPERIAL       647
#undef  IDC_IGUI_ANALOGUE_STABILITY_METRIC
#define  IDC_IGUI_ANALOGUE_STABILITY_METRIC         648

//damage
#undef  IDC_IGUI_DAMAGE_GROUP
#define  IDC_IGUI_DAMAGE_GROUP                      660
#undef  IDC_IGUI_DAMAGE_ENGINESRPM
#define  IDC_IGUI_DAMAGE_ENGINESRPM                 662
#undef  IDC_IGUI_DAMAGE_ENGINESDAMAGE
#define  IDC_IGUI_DAMAGE_ENGINESDAMAGE              663
#undef  IDC_IGUI_DAMAGE_TORQUE
#define  IDC_IGUI_DAMAGE_TORQUE                     664
#undef  IDC_IGUI_DAMAGE_ELECTRICITY
#define  IDC_IGUI_DAMAGE_ELECTRICITY                665
#undef  IDC_IGUI_DAMAGE_FUEL
#define  IDC_IGUI_DAMAGE_FUEL                       666
#undef  IDC_IGUI_DAMAGE_HYDRAULICS
#define  IDC_IGUI_DAMAGE_HYDRAULICS                 667
#undef  IDC_IGUI_DAMAGE_MAINROTOR
#define  IDC_IGUI_DAMAGE_MAINROTOR                  668
#undef  IDC_IGUI_DAMAGE_TAILROTOR
#define  IDC_IGUI_DAMAGE_TAILROTOR                  669
#undef  IDC_IGUI_DAMAGE_AUTOHOVER
#define  IDC_IGUI_DAMAGE_AUTOHOVER                  670
#undef  IDC_IGUI_DAMAGE_INSTALLATIONS
#define  IDC_IGUI_DAMAGE_INSTALLATIONS              671
#undef  IDC_IGUI_DAMAGE_HULL
#define  IDC_IGUI_DAMAGE_HULL                       672
#undef  IDC_IGUI_DAMAGE_WHEELBRAKE
#define  IDC_IGUI_DAMAGE_WHEELBRAKE                 673
#undef  IDC_IGUI_DAMAGE_ROTORBRAKE
#define  IDC_IGUI_DAMAGE_ROTORBRAKE                 674
#undef  IDC_IGUI_DAMAGE_WINCH
#define  IDC_IGUI_DAMAGE_WINCH                      675
#undef  IDC_IGUI_DAMAGE_GEAR
#define  IDC_IGUI_DAMAGE_GEAR                       676

// - hint
#undef IDC_IGHINT_BG
#define IDC_IGHINT_BG                 101
#undef IDC_IGHINT_HINT
#define IDC_IGHINT_HINT               102

// - task hint
#undef IDC_IGTASKHINT_BG
#define IDC_IGTASKHINT_BG             103
#undef IDC_IGTASKHINT_HINT
#define IDC_IGTASKHINT_HINT           104

// - load mission progress bar
#undef IDC_LOAD_MISSION_NAME
#define IDC_LOAD_MISSION_NAME         101
#undef IDC_LOAD_MISSION_DATE
#define IDC_LOAD_MISSION_DATE         102
#undef IDC_PROGRESS_TIME
#define IDC_PROGRESS_TIME             103
#undef IDC_PROGRESS_PROGRESS
#define IDC_PROGRESS_PROGRESS         104
#undef IDC_LOAD_MISSION_PICTURE
#define IDC_LOAD_MISSION_PICTURE      105
#undef IDC_LOAD_MISSION_TEXT
#define IDC_LOAD_MISSION_TEXT         106

// - dedicated server dialog
#undef IDC_DS_REPORT
#define IDC_DS_REPORT                 101
#undef IDC_DS_PLAYERS
#define IDC_DS_PLAYERS                102
#undef IDC_DS_FRIENDS
#define IDC_DS_FRIENDS                103

// - friend's missions dialog
#undef IDC_FRIEND_MISSIONS_LIST
#define IDC_FRIEND_MISSIONS_LIST      101

// - live statistics dialogs
#undef IDC_LIVE_STATS_BOARDS
#define IDC_LIVE_STATS_BOARDS         101

#undef IDC_LIVE_STATS_LIST
#define IDC_LIVE_STATS_LIST           101
#undef IDC_LIVE_STATS_COUNT
#define IDC_LIVE_STATS_COUNT          102
#undef IDC_LIVE_STATS_TITLE
#define IDC_LIVE_STATS_TITLE          103
#undef IDC_LIVE_STATS_PLAYER
#define IDC_LIVE_STATS_PLAYER         104
#undef IDC_LIVE_STATS_BEGIN
#define IDC_LIVE_STATS_BEGIN          105
#undef IDC_LIVE_STATS_END
#define IDC_LIVE_STATS_END            106
#undef IDC_LIVE_STATS_PREV
#define IDC_LIVE_STATS_PREV           107
#undef IDC_LIVE_STATS_NEXT
#define IDC_LIVE_STATS_NEXT           108
#undef IDC_LIVE_STATS_FRIENDS
#define IDC_LIVE_STATS_FRIENDS        109
#undef IDC_LIVE_STATS_GAMER_CARD
#define IDC_LIVE_STATS_GAMER_CARD     110

#undef IDC_RECEIVING_TEXT
#define IDC_RECEIVING_TEXT            101
#undef IDC_RECEIVING_TIME
#define IDC_RECEIVING_TIME            102

#undef IDC_MSG_BOX_MESSAGE
#define IDC_MSG_BOX_MESSAGE           101

#undef IDC_EDITOR_OBJECTS
#define IDC_EDITOR_OBJECTS            201
#undef IDC_EDITOR_ATTRIBUTES
#define IDC_EDITOR_ATTRIBUTES         202
#undef IDC_EDITOR_BACKGROUND
#define IDC_EDITOR_BACKGROUND         203
#undef IDC_EDITOR_MENU
#define IDC_EDITOR_MENU               204
#undef IDC_EDITOR_SAVE
#define IDC_EDITOR_SAVE               205
#undef IDC_EDITOR_LOAD
#define IDC_EDITOR_LOAD               206
#undef IDC_EDITOR_RESTART
#define IDC_EDITOR_RESTART            207
#undef IDC_EDITOR_PREVIEW
#define IDC_EDITOR_PREVIEW            208
#undef IDC_EDITOR_MAP
#define IDC_EDITOR_MAP                209
#undef IDC_EDITOR_CLEAR
#define IDC_EDITOR_CLEAR              210
#undef IDC_EDITOR_TYPE_LIST
#define IDC_EDITOR_TYPE_LIST          211

// editor menu system
#undef IDC_EDITOR_FILE
#define IDC_EDITOR_FILE               212
#undef IDC_EDITOR_VIEW
#define IDC_EDITOR_VIEW               213
#undef IDC_EDITOR_USER
#define IDC_EDITOR_USER               214
#undef IDC_EDITOR_MENU_FILE
#define IDC_EDITOR_MENU_FILE          216
#undef IDC_EDITOR_MENU_VIEW
#define IDC_EDITOR_MENU_VIEW          217
#undef IDC_EDITOR_MENU_USER
#define IDC_EDITOR_MENU_USER          218

#undef IDC_EDITOR_CONTROLS_HELP
#define IDC_EDITOR_CONTROLS_HELP      220
#undef IDC_EDITOR_LOAD_AAR
#define IDC_EDITOR_LOAD_AAR           221

#undef IDC_EDITOR_ADDOBJ_TYPES
#define IDC_EDITOR_ADDOBJ_TYPES       222
#undef IDC_EDITOR_ADDOBJ_CATEGORIES
#define IDC_EDITOR_ADDOBJ_CATEGORIES  223
#undef IDC_EDITOR_ADDOBJ_LISTING
#define IDC_EDITOR_ADDOBJ_LISTING     224

#undef IDC_MINI_MAP
#define IDC_MINI_MAP                  225

// editor tree filtering
#undef IDC_EDITOR_OBJECTS_FILTER
#define IDC_EDITOR_OBJECTS_FILTER         236
#undef IDC_EDITOR_TREE_EXPAND_ALL
#define IDC_EDITOR_TREE_EXPAND_ALL        237
#undef IDC_EDITOR_TREE_EXPAND_ALL_BACK
#define IDC_EDITOR_TREE_EXPAND_ALL_BACK   238
#undef IDC_EDITOR_TREE_COLLAPSE_ALL
#define IDC_EDITOR_TREE_COLLAPSE_ALL      239
#undef IDC_EDITOR_TREE_COLLAPSE_ALL_BACK
#define IDC_EDITOR_TREE_COLLAPSE_ALL_BACK 240

#undef IDC_EDIT_OBJECT_CONTROLS
#define IDC_EDIT_OBJECT_CONTROLS      101
#undef IDC_EDIT_OBJECT_TOGGLE_BUTTON
#define IDC_EDIT_OBJECT_TOGGLE_BUTTON 102

#undef IDC_NEW_OBJECT_TYPE
#define IDC_NEW_OBJECT_TYPE           101
#undef IDC_NEW_OBJECT_PARENT
#define IDC_NEW_OBJECT_PARENT         102

#undef IDC_MISSION_LOAD_ISLAND
#define IDC_MISSION_LOAD_ISLAND       101
#undef IDC_MISSION_LOAD_MISSION
#define IDC_MISSION_LOAD_MISSION      102

#undef IDC_MISSION_SAVE_MISSION
#define IDC_MISSION_SAVE_MISSION      101
#undef IDC_MISSION_SAVE_TITLE
#define IDC_MISSION_SAVE_TITLE        102
#undef IDC_MISSION_SAVE_DESCRIPTION
#define IDC_MISSION_SAVE_DESCRIPTION  103
#undef IDC_MISSION_SAVE_PLACEMENT
#define IDC_MISSION_SAVE_PLACEMENT    104

#undef IDC_OVERLAY_CREATE_NAME
#define IDC_OVERLAY_CREATE_NAME       101
#undef IDC_OVERLAY_LOAD_NAME
#define IDC_OVERLAY_LOAD_NAME         101
#undef IDC_OVERLAY_LOAD_MISSION
#define IDC_OVERLAY_LOAD_MISSION      102

#undef IDC_EDIT_DIARY_RECORD
#define IDC_EDIT_DIARY_RECORD         101
#undef IDC_EDIT_DIARY_TITLE
#define IDC_EDIT_DIARY_TITLE          102

#undef IDC_LOAD_AAR_NAME
#define IDC_LOAD_AAR_NAME             101

#undef IDC_EDITOR_EB_PLAN
#define IDC_EDITOR_EB_PLAN            101
#undef IDC_EDITOR_EB_NOTES
#define IDC_EDITOR_EB_NOTES           102
#undef IDC_EDITOR_EB_SIDE
#define IDC_EDITOR_EB_SIDE            103
#undef IDC_EDITOR_EB_OBJECTIVES
#define IDC_EDITOR_EB_OBJECTIVES      104
#undef IDC_EDITOR_EB_NEW_OBJECTIVE
#define IDC_EDITOR_EB_NEW_OBJECTIVE   105
#undef IDC_EDITOR_EB_ADD_OBJECTIVE
#define IDC_EDITOR_EB_ADD_OBJECTIVE   106
#undef IDC_EDITOR_EB_DEL_OBJECTIVE
#define IDC_EDITOR_EB_DEL_OBJECTIVE   107

// - team switch display

#undef IDC_TEAM_SWITCH_ROLES
#define IDC_TEAM_SWITCH_ROLES         101

// - configure action display

#undef IDC_CONFIGURE_ACTION_TITLE
#define IDC_CONFIGURE_ACTION_TITLE    101
#undef IDC_CONFIGURE_ACTION_KEYS
#define IDC_CONFIGURE_ACTION_KEYS     102
#undef IDC_CONFIGURE_ACTION_SPECIAL
#define IDC_CONFIGURE_ACTION_SPECIAL  103
#undef IDC_CONFIGURE_ACTION_DELETE
#define IDC_CONFIGURE_ACTION_DELETE   104
#undef IDC_CONFIGURE_ACTION_DEFAULT
#define IDC_CONFIGURE_ACTION_DEFAULT  105
#undef IDC_CONFIGURE_ACTION_CLEAR
#define IDC_CONFIGURE_ACTION_CLEAR    106
#undef IDC_CONFIGURE_ACTION_CANCEL
#define IDC_CONFIGURE_ACTION_CANCEL   107
#undef IDC_CONFIGURE_ACTION_PREV
#define IDC_CONFIGURE_ACTION_PREV     108
#undef IDC_CONFIGURE_ACTION_NEXT
#define IDC_CONFIGURE_ACTION_NEXT     109

// - controls display
#undef IDC_CONTROLS_TYPE
#define IDC_CONTROLS_TYPE             101
#undef IDC_CONTROLS_CONFIGURE
#define IDC_CONTROLS_CONFIGURE        102

// - miniMap display

#undef IDC_MINIMAP
#define IDC_MINIMAP                   101
#undef IDC_MINIMAP_VIEWPORT
#define IDC_MINIMAP_VIEWPORT    	  102
#undef IDC_MINIMAP_GRID
#define IDC_MINIMAP_GRID	    	  197
#undef IDC_MINIMAP_HEADING
#define IDC_MINIMAP_HEADING	    	  198
#undef IDC_MINIMAP_TIME
#define IDC_MINIMAP_TIME	    	  199


// - scripting help display
#undef IDC_SCRITING_HELP
#define IDC_SCRITING_HELP             101
#undef IDC_SCRITING_HELP_BACK
#define IDC_SCRITING_HELP_BACK        102
#undef IDC_SCRITING_HELP_FORWARD
#define IDC_SCRITING_HELP_FORWARD     103
#undef IDC_SCRITING_HELP_EXAMPLE
#define IDC_SCRITING_HELP_EXAMPLE     104

// - performance display
#undef IDC_PERF_INDEX
#define IDC_PERF_INDEX                101
#undef IDC_PERF_ENABLE
#define IDC_PERF_ENABLE               102
#undef IDC_PERF_GRAPH
#define IDC_PERF_GRAPH                103
#undef IDC_PERF_GRAPH_TITLE
#define IDC_PERF_GRAPH_TITLE          104
#undef IDC_PERF_MAXTIME
#define IDC_PERF_MAXTIME              105

// - capture display
#undef IDC_CAPTURE_INDEX
#define IDC_CAPTURE_INDEX             101
#undef IDC_CAPTURE_TIMELINES
#define IDC_CAPTURE_TIMELINES         102
#undef IDC_CAPTURE_ZOOMIN
#define IDC_CAPTURE_ZOOMIN            103
#undef IDC_CAPTURE_ZOOMOUT
#define IDC_CAPTURE_ZOOMOUT           104
#undef IDC_CAPTURE_EXPORT
#define IDC_CAPTURE_EXPORT            105
#undef IDC_CAPTURE_INFO
#define IDC_CAPTURE_INFO              106
#undef IDC_CAPTURE_EXPORT_ALL
#define IDC_CAPTURE_EXPORT_ALL        107
#undef IDC_CAPTURE_IMPORT_ALL
#define IDC_CAPTURE_IMPORT_ALL        108
#undef IDC_CAPTURE_PREVIOUS_DATA
#define IDC_CAPTURE_PREVIOUS_DATA     109
#undef IDC_CAPTURE_AVERAGES
#define IDC_CAPTURE_AVERAGES          110
#undef IDC_CAPTURE_SAVE_ARCHIVE
#define IDC_CAPTURE_SAVE_ARCHIVE      111
#undef IDC_CAPTURE_SEARCH
#define IDC_CAPTURE_SEARCH            112


// - joysticks configuration display
#undef IDC_CONTROLLER_CUSTOMIZE
#define IDC_CONTROLLER_CUSTOMIZE      101
#undef IDC_CONTROLLER_ENABLE
#define IDC_CONTROLLER_ENABLE         102
#undef IDC_CONTROLLER_XINPUT_LIST
#define IDC_CONTROLLER_XINPUT_LIST    103
#undef IDC_CONTROLLER_LIST
#define IDC_CONTROLLER_LIST           104
#undef IDC_CONTROLLER_REFRESH
#define IDC_CONTROLLER_REFRESH        105

// - customize controllers
#undef IDC_CUSTOMIZE_CTRL_SENSITIVITIES
#define IDC_CUSTOMIZE_CTRL_SENSITIVITIES    101
#undef IDC_CUSTOMIZE_CTRL_UNMAP
#define IDC_CUSTOMIZE_CTRL_UNMAP            102
#undef IDC_CUSTOMIZE_CTRL_DEFAULT
#define IDC_CUSTOMIZE_CTRL_DEFAULT          103
#undef IDC_CUSTOMIZE_CTRL_TITLE
#define IDC_CUSTOMIZE_CTRL_TITLE            104
#undef IDC_CUSTOMIZE_CTRL_DEFAULT_BINDING
#define IDC_CUSTOMIZE_CTRL_DEFAULT_BINDING  105
#undef IDC_CUSTOMIZE_CTRL_ADVANCED
#define IDC_CUSTOMIZE_CTRL_ADVANCED         106
#undef IDC_SENSITIVITY_SLIDER
#define IDC_SENSITIVITY_SLIDER              120
#undef IDC_DEADZONE_SLIDER
#define IDC_DEADZONE_SLIDER                 220
#undef IDC_CUSTOMIZE_CTRL_ACTIVE_AXIS_ICON
#define IDC_CUSTOMIZE_CTRL_ACTIVE_AXIS_ICON 320
#undef IDC_CUSTOMIZE_CTRL_STEEPNESS
#define IDC_CUSTOMIZE_CTRL_STEEPNESS        420
#undef IDC_CUSTOMIZE_CTRL_VALUE
#define IDC_CUSTOMIZE_CTRL_VALUE            520

// - joystick schemes
#undef IDC_JOY_SCHEMES_TITLE
#define IDC_JOY_SCHEMES_TITLE               101
#undef IDC_JOY_SCHEMES_LIST
#define IDC_JOY_SCHEMES_LIST                102
#undef IDC_JOY_SCHEMES_MAP
#define IDC_JOY_SCHEMES_MAP                 103

// - helper IDC for DisplayCampaignLoadLight
#undef IDC_MP_CAMPAIGN_RESTART
#define IDC_MP_CAMPAIGN_RESTART          150
#undef IDC_MP_CAMPAIGN_REPLAY
#define IDC_MP_CAMPAIGN_REPLAY           151
#undef IDC_MP_CAMPAIGN_LOAD
#define IDC_MP_CAMPAIGN_LOAD             152

// - addon actions display
#undef IDC_ADDON_ACTIONS
#define IDC_ADDON_ACTIONS                101
#undef IDC_ADDON_ACTIONS_NEW_MOD
#define IDC_ADDON_ACTIONS_NEW_MOD        102

// - mod launcher
#undef IDC_MOD_LAUNCHER_MODS
#define IDC_MOD_LAUNCHER_MODS            101
#undef IDC_MOD_LAUNCHER_PICTURE
#define IDC_MOD_LAUNCHER_PICTURE         102
#undef IDC_MOD_LAUNCHER_UP
#define IDC_MOD_LAUNCHER_UP              103
#undef IDC_MOD_LAUNCHER_DOWN
#define IDC_MOD_LAUNCHER_DOWN            104
#undef IDC_MOD_LAUNCHER_DISABLE
#define IDC_MOD_LAUNCHER_DISABLE         105
#undef IDC_MOD_LAUNCHER_ACTION
#define IDC_MOD_LAUNCHER_ACTION          106
#undef IDC_MOD_LAUNCHER_PURCHASE
#define IDC_MOD_LAUNCHER_PURCHASE        107
#undef IDC_MOD_LAUNCHER_DESCRIPTION
#define IDC_MOD_LAUNCHER_DESCRIPTION     108

// - create new mod
#undef IDC_MOD_NAME
#define IDC_MOD_NAME                     101
#undef IDC_MOD_DIR
#define IDC_MOD_DIR                      102


//A3 credits
#undef ONBUTTONCLICK_START_CREDITS
#define ONBUTTONCLICK_START_CREDITS "0 = _this spawn (uinamespace getvariable 'bis_fnc_credits');"


// Hitzone types
#undef HZ_AIRPLANE_HULL
#define HZ_AIRPLANE_HULL    0
#undef HZ_AIRPLANE_ENG
#define HZ_AIRPLANE_ENG    22
#undef HZ_AIRPLANE_FUEL
#define HZ_AIRPLANE_FUEL   23
#undef HZ_AIRPLANE_GEAR
#define HZ_AIRPLANE_GEAR   24
#undef HZ_AIRPLANE_WINGS
#define HZ_AIRPLANE_WINGS  25
#undef HZ_AIRPLANE_INST
#define HZ_AIRPLANE_INST   26

#undef HZ_HELICOPTER_HULL
#define HZ_HELICOPTER_HULL  1
#undef HZ_HELICOPTER_ENG
#define HZ_HELICOPTER_ENG   2
#undef HZ_HELICOPTER_INST
#define HZ_HELICOPTER_INST  3
#undef HZ_HELICOPTER_ATRQ
#define HZ_HELICOPTER_ATRQ  4
#undef HZ_HELICOPTER_MROT
#define HZ_HELICOPTER_MROT  5
#undef HZ_HELICOPTER_WINCH
#define HZ_HELICOPTER_WINCH 6

#undef HZ_CAR_HULL
#define HZ_CAR_HULL         7
#undef HZ_CAR_ENG
#define HZ_CAR_ENG          8
#undef HZ_CAR_FUEL
#define HZ_CAR_FUEL         9
#undef HZ_CAR_WHL
#define HZ_CAR_WHL         10

#undef HZ_MOTORCYCLE_HULL
#define HZ_MOTORCYCLE_HULL 11
#undef HZ_MOTORCYCLE_ENG
#define HZ_MOTORCYCLE_ENG  12
#undef HZ_MOTORCYCLE_FUEL
#define HZ_MOTORCYCLE_FUEL 13
#undef HZ_MOTORCYCLE_WHL
#define HZ_MOTORCYCLE_WHL  14

#undef HZ_TANK_HULL
#define HZ_TANK_HULL       15
#undef HZ_TANK_ENG
#define HZ_TANK_ENG        16
#undef HZ_TANK_GUN
#define HZ_TANK_GUN        17
#undef HZ_TANK_LTR
#define HZ_TANK_LTR        18
#undef HZ_TANK_RTR
#define HZ_TANK_RTR        19
#undef HZ_TANK_TRRT
#define HZ_TANK_TRRT       20

#undef HZ_VEH_GUN
#define HZ_VEH_GUN        HZ_TANK_GUN
#undef HZ_VEH_TRRT
#define HZ_VEH_TRRT       HZ_TANK_TRRT

#undef HZ_SHIP_ENG
#define HZ_SHIP_ENG        21

#undef HZ_VEH_TOTAL
#define HZ_VEH_TOTAL      27

#undef HZ_TANK_CMDGUN
#define HZ_TANK_CMDGUN     28
#undef HZ_TANK_CMDTRRT
#define HZ_TANK_CMDTRRT    29
#undef HZ_VEH_CMDGUN
#define HZ_VEH_CMDGUN     HZ_TANK_CMDGUN
#undef HZ_VEH_CMDTRRT
#define HZ_VEH_CMDTRRT    HZ_TANK_CMDTRRT

#undef HZ_VEH_TRRT_TOTAL
#define HZ_VEH_TRRT_TOTAL    30
#undef HZ_VEH_CMDTRRT_TOTAL
#define HZ_VEH_CMDTRRT_TOTAL 31

#undef HZ_TANK_BOTH_TRACKS
#define HZ_TANK_BOTH_TRACKS 32


#endif
