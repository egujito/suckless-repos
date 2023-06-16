static const char norm_fg[] = "#e8e1cd";
static const char norm_bg[] = "#0e1011";
static const char norm_border[] = "#a29d8f";

static const char sel_fg[] = "#e8e1cd";
static const char sel_bg[] = "#7B6E63";
static const char sel_border[] = "#e8e1cd";

static const char urg_fg[] = "#e8e1cd";
static const char urg_bg[] = "#6F645B";
static const char urg_border[] = "#6F645B";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
