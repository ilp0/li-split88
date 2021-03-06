#ifndef LI_SPLIT88_H
#define LI_SPLIT88_H

#include "quantum.h"

#define KEYMAP( \
	      K001, K002, K003, K004, 	K005, K006, K007, K008, K009, K010, K012,		 K013, K015, K016, K017, K018, K019, K020, 			K021, \
	      K101, K102, K103, K104, 	K105, K107, K108, K109, K110, K112, 			K113, K114, K115, K116, K117, K118, K119, K120, 	K121, \
	      K201, K202, K203,       	K205, 	K207, K208, K209, K210, K212, 			  K213, K214, K215, K216, K217, K218, K219,             \
	      K301, K302, K303, K304, 	K305, K307, K308, K309, K310, K312, 			K313, K314, K315, K316, K317, K318, 	 	  K319, K320, K321, \
	      K401,  	  K403,       	K405, K407, K408, 		K409, K410,	K412,			K413, 			K416, K417, K418, K419, K420, K421  \
) { \
	{ K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010, K012 	 		},\
	{ K101,  K102,  K103,  K104,  K105,  KC_NO, K107,  K108,  K109,  K110, K112 	 		},\
	{ K201,  K202,  K203,  KC_NO, K205,  KC_NO, K207,  K208,  K209,  K210, K212		 		},\
	{ K301,  K302,  K303,  K304,  K305,  KC_NO, K307,  K308,  K309,  K310, K312    	},\
	{ K401,  KC_NO, K403,  KC_NO, K405,  KC_NO, K407,  K408,  K409,  K410, K412,					},\
	{ K013,  KC_NO, K015,  K016,  K017,  K018,  K019,  K020,  K021 }, \
	{ K113,  K114,  K115,  K116,  K117,  K118,  K119,  K120,  K121 }, \
	{ K213,  K214,  K215,  K216,  K217,  K218,  K219,  KC_NO, KC_NO }, \
	{ K313, K314,  K315,  K316,  K317,  K318,  K319,  K320,  K321 }, \
	{   K413, KC_NO, KC_NO, K416,  K417,  K418,  K419,  K420,  K421 }  \
}

#endif