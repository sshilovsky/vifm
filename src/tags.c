const char *tags[] = {
	"vifm-!!",
	"vifm-$",
	"vifm-$HOME",
	"vifm-$MYVIFMRC",
	"vifm-$VIFM",
	"vifm-%",
	"vifm-%C",
	"vifm-%D",
	"vifm-%F",
	"vifm-%M",
	"vifm-%S",
	"vifm-%a",
	"vifm-%b",
	"vifm-%c",
	"vifm-%d",
	"vifm-%f",
	"vifm-%i",
	"vifm-%m",
	"vifm-%n",
	"vifm-%r",
	"vifm-%s",
	"vifm-'",
	"vifm-'aproposprg'",
	"vifm-'autochpos'",
	"vifm-'cd'",
	"vifm-'cdpath'",
	"vifm-'cf'",
	"vifm-'classify'",
	"vifm-'co'",
	"vifm-'columns'",
	"vifm-'confirm'",
	"vifm-'cpo'",
	"vifm-'cpoptions'",
	"vifm-'dotdirs'",
	"vifm-'fastrun'",
	"vifm-'findprg'",
	"vifm-'followlinks'",
	"vifm-'fusehome'",
	"vifm-'gdefault'",
	"vifm-'grepprg'",
	"vifm-'hi'",
	"vifm-'history'",
	"vifm-'hls'",
	"vifm-'hlsearch'",
	"vifm-'ic'",
	"vifm-'iec'",
	"vifm-'ignorecase'",
	"vifm-'incsearch'",
	"vifm-'is'",
	"vifm-'laststatus'",
	"vifm-'lines'",
	"vifm-'locateprg'",
	"vifm-'ls'",
	"vifm-'lsview'",
	"vifm-'nu'",
	"vifm-'number'",
	"vifm-'numberwidth'",
	"vifm-'nuw'",
	"vifm-'relativenumber'",
	"vifm-'rnu'",
	"vifm-'ruf'",
	"vifm-'rulerformat'",
	"vifm-'runexec'",
	"vifm-'scb'",
	"vifm-'scrollbind'",
	"vifm-'scrolloff'",
	"vifm-'scs'",
	"vifm-'sh'",
	"vifm-'shell'",
	"vifm-'shm'",
	"vifm-'shortmess'",
	"vifm-'slowfs'",
	"vifm-'smartcase'",
	"vifm-'so'",
	"vifm-'sort'",
	"vifm-'sortnumbers'",
	"vifm-'sortorder'",
	"vifm-'statusline'",
	"vifm-'stl'",
	"vifm-'syscalls'",
	"vifm-'tabstop'",
	"vifm-'timefmt'",
	"vifm-'timeoutlen'",
	"vifm-'tm'",
	"vifm-'trash'",
	"vifm-'trashdir'",
	"vifm-'ts'",
	"vifm-'ul'",
	"vifm-'undolevels'",
	"vifm-'vicmd'",
	"vifm-'viewcolumns'",
	"vifm-'vifminfo'",
	"vifm-'vimhelp'",
	"vifm-'vixcmd'",
	"vifm-'wildmenu'",
	"vifm-'wmnu'",
	"vifm-'wrap'",
	"vifm-'wrapscan'",
	"vifm-'ws'",
	"vifm-(",
	"vifm-)",
	"vifm-,",
	"vifm--+c",
	"vifm---help",
	"vifm---logging",
	"vifm---no-configs",
	"vifm---remote",
	"vifm---select",
	"vifm---version",
	"vifm--c",
	"vifm--f",
	"vifm--h",
	"vifm--v",
	"vifm-.",
	"vifm-/",
	"vifm-0",
	"vifm-:",
	"vifm-:!",
	"vifm-:!!",
	"vifm-:alink",
	"vifm-:apropos",
	"vifm-:bar",
	"vifm-:c",
	"vifm-:cd",
	"vifm-:change",
	"vifm-:chmod",
	"vifm-:chown",
	"vifm-:clone",
	"vifm-:cm",
	"vifm-:cmap",
	"vifm-:cno",
	"vifm-:cnoremap",
	"vifm-:co",
	"vifm-:colo",
	"vifm-:colorscheme",
	"vifm-:com",
	"vifm-:comc",
	"vifm-:comclear",
	"vifm-:command",
	"vifm-:copy",
	"vifm-:cu",
	"vifm-:cunmap",
	"vifm-:d",
	"vifm-:delc",
	"vifm-:delcommand",
	"vifm-:delete",
	"vifm-:delm",
	"vifm-:delmarks",
	"vifm-:di",
	"vifm-:dirs",
	"vifm-:display",
	"vifm-:e",
	"vifm-:ec",
	"vifm-:echo",
	"vifm-:edit",
	"vifm-:el",
	"vifm-:else",
	"vifm-:empty",
	"vifm-:en",
	"vifm-:endif",
	"vifm-:exe",
	"vifm-:execute",
	"vifm-:exi",
	"vifm-:exit",
	"vifm-:f",
	"vifm-:file",
	"vifm-:filet",
	"vifm-:filetype",
	"vifm-:filev",
	"vifm-:fileviewer",
	"vifm-:filex",
	"vifm-:filextype",
	"vifm-:filter",
	"vifm-:fin",
	"vifm-:find",
	"vifm-:fini",
	"vifm-:finish",
	"vifm-:gr",
	"vifm-:grep",
	"vifm-:h",
	"vifm-:help",
	"vifm-:hi",
	"vifm-:highlight",
	"vifm-:his",
	"vifm-:history",
	"vifm-:if",
	"vifm-:invert",
	"vifm-:jobs",
	"vifm-:let",
	"vifm-:locate",
	"vifm-:ls",
	"vifm-:lstrash",
	"vifm-:m",
	"vifm-:ma",
	"vifm-:map",
	"vifm-:mark",
	"vifm-:marks",
	"vifm-:mes",
	"vifm-:messages",
	"vifm-:mkdir",
	"vifm-:mm",
	"vifm-:mmap",
	"vifm-:mn",
	"vifm-:mnoremap",
	"vifm-:move",
	"vifm-:mu",
	"vifm-:munmap",
	"vifm-:nm",
	"vifm-:nmap",
	"vifm-:nn",
	"vifm-:nnoremap",
	"vifm-:no",
	"vifm-:noh",
	"vifm-:nohlsearch",
	"vifm-:noremap",
	"vifm-:norm",
	"vifm-:normal",
	"vifm-:nun",
	"vifm-:nunmap",
	"vifm-:on",
	"vifm-:only",
	"vifm-:popd",
	"vifm-:pushd",
	"vifm-:pw",
	"vifm-:pwd",
	"vifm-:q",
	"vifm-:qm",
	"vifm-:qmap",
	"vifm-:qn",
	"vifm-:qnoremap",
	"vifm-:quit",
	"vifm-:qun",
	"vifm-:qunmap",
	"vifm-:range",
	"vifm-:reg",
	"vifm-:registers",
	"vifm-:rename",
	"vifm-:restart",
	"vifm-:restore",
	"vifm-:rlink",
	"vifm-:s",
	"vifm-:screen",
	"vifm-:se",
	"vifm-:set",
	"vifm-:sh",
	"vifm-:shell",
	"vifm-:so",
	"vifm-:sor",
	"vifm-:sort",
	"vifm-:source",
	"vifm-:sp",
	"vifm-:split",
	"vifm-:substitute",
	"vifm-:sync",
	"vifm-:touch",
	"vifm-:tr",
	"vifm-:trashes",
	"vifm-:undol",
	"vifm-:undolist",
	"vifm-:unl",
	"vifm-:unlet",
	"vifm-:unm",
	"vifm-:unmap",
	"vifm-:ve",
	"vifm-:version",
	"vifm-:vie",
	"vifm-:view",
	"vifm-:vifm",
	"vifm-:vm",
	"vifm-:vmap",
	"vifm-:vn",
	"vifm-:vnoremap",
	"vifm-:volume",
	"vifm-:vs",
	"vifm-:vsplit",
	"vifm-:vu",
	"vifm-:vunmap",
	"vifm-:w",
	"vifm-:windo",
	"vifm-:winrun",
	"vifm-:wq",
	"vifm-:write",
	"vifm-:x",
	"vifm-:xit",
	"vifm-:y",
	"vifm-:yank",
	"vifm-;",
	"vifm-=",
	"vifm-?",
	"vifm-C",
	"vifm-CTRL-A",
	"vifm-CTRL-B",
	"vifm-CTRL-C",
	"vifm-CTRL-D",
	"vifm-CTRL-E",
	"vifm-CTRL-F",
	"vifm-CTRL-G",
	"vifm-CTRL-I",
	"vifm-CTRL-L",
	"vifm-CTRL-N",
	"vifm-CTRL-O",
	"vifm-CTRL-P",
	"vifm-CTRL-R",
	"vifm-CTRL-U",
	"vifm-CTRL-W_+",
	"vifm-CTRL-W_-",
	"vifm-CTRL-W_<",
	"vifm-CTRL-W_=",
	"vifm-CTRL-W_>",
	"vifm-CTRL-W_H",
	"vifm-CTRL-W_J",
	"vifm-CTRL-W_K",
	"vifm-CTRL-W_L",
	"vifm-CTRL-W__",
	"vifm-CTRL-W_b",
	"vifm-CTRL-W_h",
	"vifm-CTRL-W_j",
	"vifm-CTRL-W_k",
	"vifm-CTRL-W_l",
	"vifm-CTRL-W_o",
	"vifm-CTRL-W_p",
	"vifm-CTRL-W_s",
	"vifm-CTRL-W_t",
	"vifm-CTRL-W_v",
	"vifm-CTRL-W_w",
	"vifm-CTRL-W_x",
	"vifm-CTRL-W_z",
	"vifm-CTRL-X",
	"vifm-CTRL-Y",
	"vifm-D",
	"vifm-DD",
	"vifm-Enter",
	"vifm-Escape",
	"vifm-F",
	"vifm-FUSE_MOUNT",
	"vifm-FUSE_MOUNT2",
	"vifm-G",
	"vifm-H",
	"vifm-L",
	"vifm-M",
	"vifm-N",
	"vifm-P",
	"vifm-PageDown",
	"vifm-PageUp",
	"vifm-SHIFT-Tab",
	"vifm-Space",
	"vifm-Tab",
	"vifm-V",
	"vifm-Y",
	"vifm-ZQ",
	"vifm-ZZ",
	"vifm-[count]",
	"vifm-^",
	"vifm-al",
	"vifm-av",
	"vifm-cW",
	"vifm-c_ALT-.",
	"vifm-c_ALT-B",
	"vifm-c_ALT-D",
	"vifm-c_ALT-F",
	"vifm-c_Backspace",
	"vifm-c_CTRL-A",
	"vifm-c_CTRL-B",
	"vifm-c_CTRL-C",
	"vifm-c_CTRL-D",
	"vifm-c_CTRL-E",
	"vifm-c_CTRL-F",
	"vifm-c_CTRL-G",
	"vifm-c_CTRL-H",
	"vifm-c_CTRL-I",
	"vifm-c_CTRL-K",
	"vifm-c_CTRL-M",
	"vifm-c_CTRL-N",
	"vifm-c_CTRL-P",
	"vifm-c_CTRL-T",
	"vifm-c_CTRL-U",
	"vifm-c_CTRL-W",
	"vifm-c_CTRL-X_=",
	"vifm-c_CTRL-X_CTRL-X_c",
	"vifm-c_CTRL-X_CTRL-X_d",
	"vifm-c_CTRL-X_CTRL-X_e",
	"vifm-c_CTRL-X_CTRL-X_r",
	"vifm-c_CTRL-X_CTRL-X_t",
	"vifm-c_CTRL-X_a",
	"vifm-c_CTRL-X_c",
	"vifm-c_CTRL-X_d",
	"vifm-c_CTRL-X_e",
	"vifm-c_CTRL-X_m",
	"vifm-c_CTRL-X_r",
	"vifm-c_CTRL-X_t",
	"vifm-c_CTRL-_",
	"vifm-c_Delete",
	"vifm-c_Down",
	"vifm-c_End",
	"vifm-c_Enter",
	"vifm-c_Esc",
	"vifm-c_Home",
	"vifm-c_Left",
	"vifm-c_Right",
	"vifm-c_SHIFT-Tab",
	"vifm-c_Tab",
	"vifm-c_Up",
	"vifm-cancellation",
	"vifm-cg",
	"vifm-cl",
	"vifm-clientserver",
	"vifm-co",
	"vifm-color-schemes",
	"vifm-colors",
	"vifm-column-view",
	"vifm-command-line",
	"vifm-command-line-edit",
	"vifm-commands",
	"vifm-commands-and-selection",
	"vifm-commands-bg",
	"vifm-configure",
	"vifm-count",
	"vifm-cp",
	"vifm-cpo-f",
	"vifm-cpo-s",
	"vifm-cpo-t",
	"vifm-cw",
	"vifm-d",
	"vifm-dd",
	"vifm-e",
	"vifm-env-vars",
	"vifm-executable()",
	"vifm-expand()",
	"vifm-expr-!=",
	"vifm-expr-'",
	"vifm-expr-.",
	"vifm-expr-<",
	"vifm-expr-<=",
	"vifm-expr-==",
	"vifm-expr->",
	"vifm-expr->=",
	"vifm-expr-env",
	"vifm-expr-function",
	"vifm-expr-number",
	"vifm-expr-option",
	"vifm-expr-quote",
	"vifm-expr-string",
	"vifm-expr-unary-+",
	"vifm-expr-unary--",
	"vifm-expr1",
	"vifm-expr2",
	"vifm-expr3",
	"vifm-expr4",
	"vifm-expression-syntax",
	"vifm-f",
	"vifm-filetype()",
	"vifm-filters",
	"vifm-functions",
	"vifm-fuse",
	"vifm-gA",
	"vifm-gU",
	"vifm-gUU",
	"vifm-gUgU",
	"vifm-ga",
	"vifm-general-keys",
	"vifm-gf",
	"vifm-gg",
	"vifm-gh",
	"vifm-gj",
	"vifm-gk",
	"vifm-gl",
	"vifm-globs",
	"vifm-gr",
	"vifm-gs",
	"vifm-gu",
	"vifm-gugu",
	"vifm-guu",
	"vifm-gv",
	"vifm-h",
	"vifm-i",
	"vifm-j",
	"vifm-k",
	"vifm-l",
	"vifm-literal-string",
	"vifm-local-options",
	"vifm-ls-view",
	"vifm-m",
	"vifm-m_/",
	"vifm-m_:",
	"vifm-m_?",
	"vifm-m_CTRL-B",
	"vifm-m_CTRL-C",
	"vifm-m_CTRL-D",
	"vifm-m_CTRL-E",
	"vifm-m_CTRL-F",
	"vifm-m_CTRL-L",
	"vifm-m_CTRL-N",
	"vifm-m_CTRL-P",
	"vifm-m_CTRL-U",
	"vifm-m_CTRL-Y",
	"vifm-m_Enter",
	"vifm-m_Escape",
	"vifm-m_G",
	"vifm-m_H",
	"vifm-m_L",
	"vifm-m_M",
	"vifm-m_N",
	"vifm-m_ZQ",
	"vifm-m_ZZ",
	"vifm-m_e",
	"vifm-m_gf",
	"vifm-m_gg",
	"vifm-m_j",
	"vifm-m_k",
	"vifm-m_l",
	"vifm-m_n",
	"vifm-m_zH",
	"vifm-m_zL",
	"vifm-m_zb",
	"vifm-m_zh",
	"vifm-m_zl",
	"vifm-m_zt",
	"vifm-m_zz",
	"vifm-macros",
	"vifm-mappings",
	"vifm-menus-and-dialogs",
	"vifm-n",
	"vifm-normal",
	"vifm-options",
	"vifm-p",
	"vifm-plugin",
	"vifm-q/",
	"vifm-q:",
	"vifm-q=",
	"vifm-q?",
	"vifm-q_%",
	"vifm-q_/",
	"vifm-q_<",
	"vifm-q_>",
	"vifm-q_?",
	"vifm-q_ALT-<",
	"vifm-q_ALT->",
	"vifm-q_ALT-Space",
	"vifm-q_ALT-V",
	"vifm-q_CTRL-B",
	"vifm-q_CTRL-D",
	"vifm-q_CTRL-E",
	"vifm-q_CTRL-F",
	"vifm-q_CTRL-K",
	"vifm-q_CTRL-L",
	"vifm-q_CTRL-N",
	"vifm-q_CTRL-P",
	"vifm-q_CTRL-R",
	"vifm-q_CTRL-U",
	"vifm-q_CTRL-V",
	"vifm-q_CTRL-W_+",
	"vifm-q_CTRL-W_-",
	"vifm-q_CTRL-W_<",
	"vifm-q_CTRL-W_=",
	"vifm-q_CTRL-W_>",
	"vifm-q_CTRL-W_H",
	"vifm-q_CTRL-W_J",
	"vifm-q_CTRL-W_K",
	"vifm-q_CTRL-W_L",
	"vifm-q_CTRL-W__",
	"vifm-q_CTRL-W_b",
	"vifm-q_CTRL-W_h",
	"vifm-q_CTRL-W_j",
	"vifm-q_CTRL-W_k",
	"vifm-q_CTRL-W_l",
	"vifm-q_CTRL-W_o",
	"vifm-q_CTRL-W_p",
	"vifm-q_CTRL-W_s",
	"vifm-q_CTRL-W_t",
	"vifm-q_CTRL-W_v",
	"vifm-q_CTRL-W_w",
	"vifm-q_CTRL-W_x",
	"vifm-q_CTRL-W_z",
	"vifm-q_CTRL-Y",
	"vifm-q_Enter",
	"vifm-q_G",
	"vifm-q_N",
	"vifm-q_Q",
	"vifm-q_R",
	"vifm-q_SHIFT-Tab",
	"vifm-q_Space",
	"vifm-q_Tab",
	"vifm-q_ZZ",
	"vifm-q_b",
	"vifm-q_d",
	"vifm-q_e",
	"vifm-q_f",
	"vifm-q_g",
	"vifm-q_j",
	"vifm-q_k",
	"vifm-q_n",
	"vifm-q_p",
	"vifm-q_q",
	"vifm-q_r",
	"vifm-q_u",
	"vifm-q_v",
	"vifm-q_w",
	"vifm-q_y",
	"vifm-q_z",
	"vifm-ranges",
	"vifm-registers",
	"vifm-reserved",
	"vifm-rl",
	"vifm-scripts",
	"vifm-see-also",
	"vifm-selectors",
	"vifm-set-options",
	"vifm-startup",
	"vifm-t",
	"vifm-trash",
	"vifm-u",
	"vifm-v",
	"vifm-v_:",
	"vifm-v_CTRL-C",
	"vifm-v_CTRL-G",
	"vifm-v_Enter",
	"vifm-v_Escape",
	"vifm-v_O",
	"vifm-v_U",
	"vifm-v_V",
	"vifm-v_av",
	"vifm-v_gU",
	"vifm-v_gu",
	"vifm-v_gv",
	"vifm-v_o",
	"vifm-v_u",
	"vifm-v_v",
	"vifm-view",
	"vifm-view-look",
	"vifm-vifminfo",
	"vifm-vifmrc",
	"vifm-visual",
	"vifm-y",
	"vifm-yy",
	"vifm-zM",
	"vifm-zO",
	"vifm-zR",
	"vifm-za",
	"vifm-zb",
	"vifm-zf",
	"vifm-zm",
	"vifm-zo",
	"vifm-zt",
	"vifm-zz",
	"vifm.txt",
	0,
};
