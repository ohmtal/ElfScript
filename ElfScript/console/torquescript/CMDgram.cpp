/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         CMDparse
#define yylex           CMDlex
#define yyerror         CMDerror
#define yydebug         CMDdebug
#define yynerrs         CMDnerrs
#define yylval          CMDlval
#define yychar          CMDchar
#define yylloc          CMDlloc

/* First part of user prologue.  */
#line 6 "CMDgram.y"


// bison -d -v -p CMD -o CMDgram.cpp -HCMDgram.h CMDgram.y
// OLD: bison --defines=cmdgram.h --verbose -o cmdgram.cpp -p CMD CMDgram.y

// Make sure we don't get gram.h twice.
#define _CMDGRAM_H_

#include <stdlib.h>
#include <stdio.h>
#include "console/console.h"
#include "console/torquescript/compiler.h"
#include "console/consoleInternal.h"
#include "core/strings/stringFunctions.h"

#ifndef YYDEBUG
#define YYDEBUG 0
#endif

#define YYSSIZE 350

int outtext(char *fmt, ...);
extern int serrors;
extern Vector<String> lines;

#define nil 0
#undef YY_ARGS
#define YY_ARGS(x)   x

int CMDlex();
void CMDerror(const char *, ...);


#ifdef alloca
#undef alloca
#endif
#define alloca dMalloc

template< typename T >
struct Token
{
   T value;
//    U32 lineNumber;
   S32 lineNumber;
};

#line 54 "CMDgram.y"

   /* Reserved word token definitions */
#line 73 "CMDgram.y"

   /* Constant and identifier token definitions */
#line 88 "CMDgram.y"

   /* Operator token definitions */

#line 136 "CMDgram.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "CMDgram.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_rwDEFINE = 3,                   /* rwDEFINE  */
  YYSYMBOL_rwENDDEF = 4,                   /* rwENDDEF  */
  YYSYMBOL_rwDECLARE = 5,                  /* rwDECLARE  */
  YYSYMBOL_rwDECLARESINGLETON = 6,         /* rwDECLARESINGLETON  */
  YYSYMBOL_rwBREAK = 7,                    /* rwBREAK  */
  YYSYMBOL_rwELSE = 8,                     /* rwELSE  */
  YYSYMBOL_rwCONTINUE = 9,                 /* rwCONTINUE  */
  YYSYMBOL_rwGLOBAL = 10,                  /* rwGLOBAL  */
  YYSYMBOL_rwIF = 11,                      /* rwIF  */
  YYSYMBOL_rwNIL = 12,                     /* rwNIL  */
  YYSYMBOL_rwRETURN = 13,                  /* rwRETURN  */
  YYSYMBOL_rwWHILE = 14,                   /* rwWHILE  */
  YYSYMBOL_rwDO = 15,                      /* rwDO  */
  YYSYMBOL_rwENDIF = 16,                   /* rwENDIF  */
  YYSYMBOL_rwENDWHILE = 17,                /* rwENDWHILE  */
  YYSYMBOL_rwENDFOR = 18,                  /* rwENDFOR  */
  YYSYMBOL_rwDEFAULT = 19,                 /* rwDEFAULT  */
  YYSYMBOL_rwFOR = 20,                     /* rwFOR  */
  YYSYMBOL_rwFOREACH = 21,                 /* rwFOREACH  */
  YYSYMBOL_rwFOREACHSTR = 22,              /* rwFOREACHSTR  */
  YYSYMBOL_rwIN = 23,                      /* rwIN  */
  YYSYMBOL_rwDATABLOCK = 24,               /* rwDATABLOCK  */
  YYSYMBOL_rwSWITCH = 25,                  /* rwSWITCH  */
  YYSYMBOL_rwCASE = 26,                    /* rwCASE  */
  YYSYMBOL_rwSWITCHSTR = 27,               /* rwSWITCHSTR  */
  YYSYMBOL_rwCASEOR = 28,                  /* rwCASEOR  */
  YYSYMBOL_rwPACKAGE = 29,                 /* rwPACKAGE  */
  YYSYMBOL_rwASSERT = 30,                  /* rwASSERT  */
  YYSYMBOL_ILLEGAL_TOKEN = 31,             /* ILLEGAL_TOKEN  */
  YYSYMBOL_CHRCONST = 32,                  /* CHRCONST  */
  YYSYMBOL_INTCONST = 33,                  /* INTCONST  */
  YYSYMBOL_TTAG = 34,                      /* TTAG  */
  YYSYMBOL_VAR = 35,                       /* VAR  */
  YYSYMBOL_IDENT = 36,                     /* IDENT  */
  YYSYMBOL_TYPEIDENT = 37,                 /* TYPEIDENT  */
  YYSYMBOL_DOCBLOCK = 38,                  /* DOCBLOCK  */
  YYSYMBOL_STRATOM = 39,                   /* STRATOM  */
  YYSYMBOL_TAGATOM = 40,                   /* TAGATOM  */
  YYSYMBOL_FLTCONST = 41,                  /* FLTCONST  */
  YYSYMBOL_42_ = 42,                       /* '+'  */
  YYSYMBOL_43_ = 43,                       /* '-'  */
  YYSYMBOL_44_ = 44,                       /* '*'  */
  YYSYMBOL_45_ = 45,                       /* '/'  */
  YYSYMBOL_46_ = 46,                       /* '<'  */
  YYSYMBOL_47_ = 47,                       /* '>'  */
  YYSYMBOL_48_ = 48,                       /* '='  */
  YYSYMBOL_49_ = 49,                       /* '.'  */
  YYSYMBOL_50_ = 50,                       /* '|'  */
  YYSYMBOL_51_ = 51,                       /* '&'  */
  YYSYMBOL_52_ = 52,                       /* '%'  */
  YYSYMBOL_53_ = 53,                       /* '('  */
  YYSYMBOL_54_ = 54,                       /* ')'  */
  YYSYMBOL_55_ = 55,                       /* ','  */
  YYSYMBOL_56_ = 56,                       /* ':'  */
  YYSYMBOL_57_ = 57,                       /* ';'  */
  YYSYMBOL_58_ = 58,                       /* '{'  */
  YYSYMBOL_59_ = 59,                       /* '}'  */
  YYSYMBOL_60_ = 60,                       /* '^'  */
  YYSYMBOL_61_ = 61,                       /* '~'  */
  YYSYMBOL_62_ = 62,                       /* '!'  */
  YYSYMBOL_63_ = 63,                       /* '@'  */
  YYSYMBOL_opINTNAME = 64,                 /* opINTNAME  */
  YYSYMBOL_opINTNAMER = 65,                /* opINTNAMER  */
  YYSYMBOL_opMINUSMINUS = 66,              /* opMINUSMINUS  */
  YYSYMBOL_opPLUSPLUS = 67,                /* opPLUSPLUS  */
  YYSYMBOL_opSHL = 68,                     /* opSHL  */
  YYSYMBOL_opSHR = 69,                     /* opSHR  */
  YYSYMBOL_opPLASN = 70,                   /* opPLASN  */
  YYSYMBOL_opMIASN = 71,                   /* opMIASN  */
  YYSYMBOL_opMLASN = 72,                   /* opMLASN  */
  YYSYMBOL_opDVASN = 73,                   /* opDVASN  */
  YYSYMBOL_opMODASN = 74,                  /* opMODASN  */
  YYSYMBOL_opANDASN = 75,                  /* opANDASN  */
  YYSYMBOL_opXORASN = 76,                  /* opXORASN  */
  YYSYMBOL_opORASN = 77,                   /* opORASN  */
  YYSYMBOL_opSLASN = 78,                   /* opSLASN  */
  YYSYMBOL_opSRASN = 79,                   /* opSRASN  */
  YYSYMBOL_opCAT = 80,                     /* opCAT  */
  YYSYMBOL_opEQ = 81,                      /* opEQ  */
  YYSYMBOL_opNE = 82,                      /* opNE  */
  YYSYMBOL_opGE = 83,                      /* opGE  */
  YYSYMBOL_opLE = 84,                      /* opLE  */
  YYSYMBOL_opAND = 85,                     /* opAND  */
  YYSYMBOL_opOR = 86,                      /* opOR  */
  YYSYMBOL_opSTREQ = 87,                   /* opSTREQ  */
  YYSYMBOL_opSTRNE = 88,                   /* opSTRNE  */
  YYSYMBOL_opCOLONCOLON = 89,              /* opCOLONCOLON  */
  YYSYMBOL_opDOTDOT = 90,                  /* opDOTDOT  */
  YYSYMBOL_rwRANGE = 91,                   /* rwRANGE  */
  YYSYMBOL_rwSTEP = 92,                    /* rwSTEP  */
  YYSYMBOL_rwPRINT = 93,                   /* rwPRINT  */
  YYSYMBOL_rwRANDOMF = 94,                 /* rwRANDOMF  */
  YYSYMBOL_rwFLOOR = 95,                   /* rwFLOOR  */
  YYSYMBOL_rwCEIL = 96,                    /* rwCEIL  */
  YYSYMBOL_rwFABS = 97,                    /* rwFABS  */
  YYSYMBOL_rwSIN = 98,                     /* rwSIN  */
  YYSYMBOL_rwCOS = 99,                     /* rwCOS  */
  YYSYMBOL_rwATAN = 100,                   /* rwATAN  */
  YYSYMBOL_rwTANH = 101,                   /* rwTANH  */
  YYSYMBOL_rwSQRT = 102,                   /* rwSQRT  */
  YYSYMBOL_rwISZERO = 103,                 /* rwISZERO  */
  YYSYMBOL_rwFMOD = 104,                   /* rwFMOD  */
  YYSYMBOL_rwMIN = 105,                    /* rwMIN  */
  YYSYMBOL_rwMAX = 106,                    /* rwMAX  */
  YYSYMBOL_rwATAN2 = 107,                  /* rwATAN2  */
  YYSYMBOL_rwPOW = 108,                    /* rwPOW  */
  YYSYMBOL_rwCLAMPF = 109,                 /* rwCLAMPF  */
  YYSYMBOL_rwLERP = 110,                   /* rwLERP  */
  YYSYMBOL_rwSMOOTHSTEP = 111,             /* rwSMOOTHSTEP  */
  YYSYMBOL_112_ = 112,                     /* '['  */
  YYSYMBOL_113_ = 113,                     /* '?'  */
  YYSYMBOL_UNARY = 114,                    /* UNARY  */
  YYSYMBOL_115_ = 115,                     /* ']'  */
  YYSYMBOL_YYACCEPT = 116,                 /* $accept  */
  YYSYMBOL_start = 117,                    /* start  */
  YYSYMBOL_decl_list = 118,                /* decl_list  */
  YYSYMBOL_decl = 119,                     /* decl  */
  YYSYMBOL_package_decl = 120,             /* package_decl  */
  YYSYMBOL_fn_decl_list = 121,             /* fn_decl_list  */
  YYSYMBOL_statement_list = 122,           /* statement_list  */
  YYSYMBOL_stmt = 123,                     /* stmt  */
  YYSYMBOL_fn_decl_stmt = 124,             /* fn_decl_stmt  */
  YYSYMBOL_var_list_decl = 125,            /* var_list_decl  */
  YYSYMBOL_var_list = 126,                 /* var_list  */
  YYSYMBOL_param = 127,                    /* param  */
  YYSYMBOL_datablock_decl = 128,           /* datablock_decl  */
  YYSYMBOL_object_decl = 129,              /* object_decl  */
  YYSYMBOL_parent_block = 130,             /* parent_block  */
  YYSYMBOL_object_name = 131,              /* object_name  */
  YYSYMBOL_object_args = 132,              /* object_args  */
  YYSYMBOL_object_declare_block = 133,     /* object_declare_block  */
  YYSYMBOL_object_decl_list = 134,         /* object_decl_list  */
  YYSYMBOL_stmt_block = 135,               /* stmt_block  */
  YYSYMBOL_switch_stmt = 136,              /* switch_stmt  */
  YYSYMBOL_case_block = 137,               /* case_block  */
  YYSYMBOL_case_expr = 138,                /* case_expr  */
  YYSYMBOL_if_stmt = 139,                  /* if_stmt  */
  YYSYMBOL_while_stmt = 140,               /* while_stmt  */
  YYSYMBOL_for_stmt = 141,                 /* for_stmt  */
  YYSYMBOL_foreach_stmt = 142,             /* foreach_stmt  */
  YYSYMBOL_expression_stmt = 143,          /* expression_stmt  */
  YYSYMBOL_expr = 144,                     /* expr  */
  YYSYMBOL_slot_acc = 145,                 /* slot_acc  */
  YYSYMBOL_intslot_acc = 146,              /* intslot_acc  */
  YYSYMBOL_class_name_expr = 147,          /* class_name_expr  */
  YYSYMBOL_assign_op_struct = 148,         /* assign_op_struct  */
  YYSYMBOL_stmt_expr = 149,                /* stmt_expr  */
  YYSYMBOL_funcall_expr = 150,             /* funcall_expr  */
  YYSYMBOL_func_arg_item = 151,            /* func_arg_item  */
  YYSYMBOL_func_arg_list = 152,            /* func_arg_list  */
  YYSYMBOL_func_arg_list_decl = 153,       /* func_arg_list_decl  */
  YYSYMBOL_assert_expr = 154,              /* assert_expr  */
  YYSYMBOL_inline_command_expr = 155,      /* inline_command_expr  */
  YYSYMBOL_expr_list = 156,                /* expr_list  */
  YYSYMBOL_slot_assign_list_opt = 157,     /* slot_assign_list_opt  */
  YYSYMBOL_slot_assign_list = 158,         /* slot_assign_list  */
  YYSYMBOL_slot_assign = 159,              /* slot_assign  */
  YYSYMBOL_aidx_expr = 160                 /* aidx_expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5049

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  116
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  207
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  536

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   345


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,     2,     2,     2,    52,    51,     2,
      53,    54,    44,    42,    55,    43,    49,    45,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    56,    57,
      46,    48,    47,   113,    63,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   112,     2,   115,    60,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,    50,    59,    61,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   114
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   216,   216,   222,   223,   228,   230,   232,   237,   242,
     244,   250,   251,   256,   257,   258,   259,   260,   261,   262,
     264,   266,   268,   271,   281,   283,   285,   287,   293,   296,
     302,   303,   308,   310,   327,   329,   331,   333,   338,   343,
     345,   347,   349,   351,   353,   359,   360,   366,   367,   373,
     374,   380,   381,   383,   385,   390,   392,   397,   399,   404,
     406,   414,   416,   418,   423,   425,   430,   432,   437,   439,
     444,   446,   448,   450,   452,   454,   456,   458,   462,   465,
     468,   471,   474,   485,   488,   491,   494,   497,   500,   503,
     508,   513,   515,   517,   519,   521,   523,   525,   527,   529,
     531,   533,   535,   537,   539,   541,   543,   545,   547,   549,
     551,   553,   555,   557,   559,   561,   563,   571,   573,   575,
     577,   579,   581,   583,   585,   587,   589,   591,   593,   595,
     601,   603,   608,   610,   615,   617,   622,   624,   626,   628,
     630,   632,   634,   636,   638,   640,   642,   644,   650,   652,
     654,   656,   658,   662,   670,   674,   682,   684,   686,   688,
     690,   722,   725,   728,   734,   736,   748,   750,   756,   757,
     778,   780,   787,   789,   791,   793,   795,   797,   799,   801,
     803,   805,   807,   809,   811,   813,   815,   817,   819,   821,
     823,   825,   837,   839,   845,   846,   851,   853,   859,   863,
     874,   878,   889,   891,   895,   906,   929,   931
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  static const char *const yy_sname[] =
  {
  "end of file", "error", "invalid token", "rwDEFINE", "rwENDDEF",
  "rwDECLARE", "rwDECLARESINGLETON", "rwBREAK", "rwELSE", "rwCONTINUE",
  "rwGLOBAL", "rwIF", "rwNIL", "rwRETURN", "rwWHILE", "rwDO", "rwENDIF",
  "rwENDWHILE", "rwENDFOR", "rwDEFAULT", "rwFOR", "rwFOREACH",
  "rwFOREACHSTR", "rwIN", "rwDATABLOCK", "rwSWITCH", "rwCASE",
  "rwSWITCHSTR", "rwCASEOR", "rwPACKAGE", "rwASSERT", "ILLEGAL_TOKEN",
  "CHRCONST", "INTCONST", "TTAG", "VAR", "IDENT", "TYPEIDENT", "DOCBLOCK",
  "STRATOM", "TAGATOM", "FLTCONST", "'+'", "'-'", "'*'", "'/'", "'<'",
  "'>'", "'='", "'.'", "'|'", "'&'", "'%'", "'('", "')'", "','", "':'",
  "';'", "'{'", "'}'", "'^'", "'~'", "'!'", "'@'", "opINTNAME",
  "opINTNAMER", "opMINUSMINUS", "opPLUSPLUS", "opSHL", "opSHR", "opPLASN",
  "opMIASN", "opMLASN", "opDVASN", "opMODASN", "opANDASN", "opXORASN",
  "opORASN", "opSLASN", "opSRASN", "opCAT", "opEQ", "opNE", "opGE", "opLE",
  "opAND", "opOR", "opSTREQ", "opSTRNE", "opCOLONCOLON", "opDOTDOT",
  "rwRANGE", "rwSTEP", "rwPRINT", "rwRANDOMF", "rwFLOOR", "rwCEIL",
  "rwFABS", "rwSIN", "rwCOS", "rwATAN", "rwTANH", "rwSQRT", "rwISZERO",
  "rwFMOD", "rwMIN", "rwMAX", "rwATAN2", "rwPOW", "rwCLAMPF", "rwLERP",
  "rwSMOOTHSTEP", "'['", "'?'", "UNARY", "']'", "$accept", "start",
  "decl_list", "decl", "package_decl", "fn_decl_list", "statement_list",
  "stmt", "fn_decl_stmt", "var_list_decl", "var_list", "param",
  "datablock_decl", "object_decl", "parent_block", "object_name",
  "object_args", "object_declare_block", "object_decl_list", "stmt_block",
  "switch_stmt", "case_block", "case_expr", "if_stmt", "while_stmt",
  "for_stmt", "foreach_stmt", "expression_stmt", "expr", "slot_acc",
  "intslot_acc", "class_name_expr", "assign_op_struct", "stmt_expr",
  "funcall_expr", "func_arg_item", "func_arg_list", "func_arg_list_decl",
  "assert_expr", "inline_command_expr", "expr_list",
  "slot_assign_list_opt", "slot_assign_list", "slot_assign", "aidx_expr", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-408)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-91)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -408,    50,   251,  -408,    30,    29,    29,    18,    21,    33,
    1503,    35,   993,    41,    66,    70,    29,    77,    90,    72,
      92,  -408,   103,   -15,    -8,  -408,  -408,  -408,  -408,  2979,
    2979,  2979,  2979,  2979,    96,   128,   139,   146,   175,   178,
     190,   200,   202,   206,   208,   215,   216,   221,   224,   226,
     229,   230,   240,  -408,  -408,  -408,  -408,  -408,  -408,  -408,
    -408,  -408,  -408,  -408,    83,  4867,   353,  -408,    99,  -408,
    -408,  -408,    -4,  -408,  2979,   249,   252,  -408,  -408,  2979,
    -408,  -408,  -408,  2979,  3500,  -408,  2979,  -408,  -408,   293,
    1585,   273,   274,   257,  2979,  2979,   253,  2979,  2979,  1667,
    -408,  -408,  2979,  2979,  2979,  2979,  2979,  2979,  2979,  2979,
    2979,  2979,  2979,  -408,  1749,   168,    64,    64,  3547,    64,
      64,  2979,  1831,  2979,  2979,  2979,  2979,  2979,  2979,  2979,
    2979,  2979,  2979,  2979,  2979,  2979,  2979,  2979,  2979,  2979,
    -408,  2979,  2979,  2979,  2979,  2979,  2979,   278,  2979,  2979,
    2979,  2979,  2979,    29,    29,  2979,  2979,  2979,  2979,  2979,
    2979,  2979,  2979,  2979,  2979,  2979,  1913,  -408,   280,   284,
    3594,   885,  2979,  3641,  4867,    12,  -408,  3688,  1100,   263,
      93,  1995,  3735,   298,   301,  2979,  3782,  3829,   322,  3049,
    3096,  2979,  4867,  4867,  4867,  4867,  4867,  4867,  4867,  4867,
    4867,  4867,  4867,  4867,   -42,  2979,  4867,  -408,   271,   275,
     277,  -408,    78,  -408,   107,   119,   124,   132,   134,   136,
     153,   155,   158,   163,   167,   169,   171,   182,   186,   191,
     193,   195,   329,   329,    64,    64,   430,   430,    -7,   151,
     996,    64,   753,   323,  -408,  -408,   656,   656,   254,   254,
     430,   430,   815,  4961,   323,   323,  3876,  2979,  4867,   -36,
     279,   272,  -408,   281,  -408,  2979,   276,  4867,   276,   993,
    2979,   282,   993,  -408,  -408,  2979,  2077,  2159,  3923,  2241,
    2323,  2979,  3970,   270,   285,    36,  -408,  -408,   292,  2979,
    -408,    13,  2979,   559,    34,  1749,  -408,  1749,  -408,  -408,
    -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,
    -408,  -408,  -408,  -408,  -408,  -408,  -408,  1749,  2979,  2979,
      55,  2979,   288,   305,   280,   280,   225,   328,   314,   314,
     362,  4867,  -408,  -408,  4017,  2979,  4064,   993,  4115,  2405,
    2487,  4162,  2979,  3143,  4209,   326,   356,   356,   327,  -408,
     335,  4256,  -408,  4867,  2569,  -408,  -408,  -408,   336,   341,
     -19,  4914,  -408,  4867,  2979,  -408,  -408,   342,   276,  -408,
    2979,   343,   344,   993,  -408,  3194,  2979,  -408,   993,   993,
    4303,   993,  4350,  2651,  3245,   993,  2979,   993,   345,  2979,
     346,   348,  -408,  -408,  -408,  2979,  4867,  -408,  -408,  -408,
    4867,  1207,   350,   314,   347,   351,   352,  -408,   993,  2979,
    3296,  -408,  -408,   993,  -408,   993,   993,  4397,   993,  2979,
    -408,  3347,  -408,   101,    14,  4867,  -408,  -408,    56,  -408,
    -408,   358,    85,    85,  -408,  3398,   993,  2979,  -408,  -408,
    -408,   993,  -408,  3449,   993,  2979,   367,   -13,   381,   363,
     101,  -408,  2979,  -408,  -408,  1314,   375,   364,   376,   246,
      85,   377,   993,  2979,  -408,  4444,  -408,   993,  2979,  -408,
    4491,  2979,  2733,  2979,   -10,   380,  -408,  4867,   642,  -408,
      85,  -408,  -408,   383,   246,  -408,  -408,  4538,   993,  -408,
    4585,   993,  4632,  2979,  4679,   -14,  2815,  2979,  -408,   382,
    -408,   384,  -408,   993,  -408,   993,  -408,  -408,    80,  -408,
     393,  2979,  4726,   -11,  -408,  -408,  -408,  -408,   387,  2897,
      87,  -408,   397,  1421,  -408,  2979,  4773,   389,  2979,    89,
    -408,  -408,  4820,   391,  -408,  -408
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     2,     1,     0,     0,     0,   123,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,   103,   128,   126,    27,   127,   120,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     7,     5,     6,    17,   151,    18,
      13,    14,    15,    16,     0,     0,   124,   125,    91,   148,
     149,   150,     0,   134,     0,     0,     0,    19,    20,     0,
     123,   103,    21,     0,     0,    91,     0,    11,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     137,   136,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   156,   168,     0,   101,   102,     0,   119,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   158,    30,     0,
       0,    47,    47,     0,   192,     0,    22,     0,     0,     0,
     128,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   206,     0,     0,   164,   166,   169,     0,
       0,    92,     0,   173,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,    98,    99,   100,   105,   106,   130,    96,
      95,    94,    93,   117,   132,   133,   112,   113,   109,   110,
     107,   108,   114,   111,   115,   116,     0,     0,   159,    34,
       0,    31,    32,     0,   135,    47,    45,    48,    45,     0,
       0,     0,     0,    57,    12,     0,     0,     0,     0,     0,
       0,     0,    45,     0,     0,     0,     9,   170,     0,     0,
      25,     0,     0,   129,     0,     0,   161,   168,   172,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   168,     0,     0,
       0,     0,    35,     0,     0,    30,     0,     0,    49,    49,
      66,   193,    23,    68,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,   153,   207,     0,   157,   165,   167,     0,     0,
       0,   104,   160,    36,     0,    11,    33,     0,    45,    46,
       0,     0,     0,     0,    69,     0,     0,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,   171,    26,     0,   154,   162,   163,   131,
      37,     0,     0,    49,    50,    40,    44,    67,     0,     0,
       0,    76,    75,     0,    73,     0,     0,     0,     0,     0,
      83,     0,    84,   194,     0,    64,    59,    60,     0,    28,
      11,     0,    51,    51,    82,     0,     0,     0,    74,    72,
      71,     0,    89,     0,     0,     0,     0,     0,     0,     0,
     195,   196,     0,    11,   155,     0,    42,     0,     0,    53,
      52,     0,     0,     0,    78,     0,    70,     0,     0,    85,
       0,     0,     0,     0,     0,     0,   197,    65,    61,    29,
      51,    55,    39,     0,    54,    43,    79,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
      63,     0,    56,     0,    80,     0,    87,   202,     0,   198,
       0,     0,     0,     0,    11,    41,    81,    88,     0,     0,
       0,   200,     0,    62,   199,     0,     0,     0,     0,     0,
     203,   201,     0,     0,   205,   204
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -408,  -408,  -408,  -408,  -408,  -408,  -361,    -1,  -182,   125,
    -408,   127,  -408,  -353,  -234,  -165,  -320,  -393,    -5,  -261,
    -408,  -342,  -408,  -408,  -408,  -408,  -408,  -408,   437,  -408,
    -408,    31,   -64,    -2,  -408,   154,  -408,  -243,  -408,  -408,
    -107,  -408,    38,  -407,  -315
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    53,    54,   285,   178,    88,    56,   260,
     261,   262,    57,    58,   328,   266,   371,   458,   459,    89,
      59,   390,   424,    60,    61,    62,    63,    64,    65,    66,
      67,    75,   113,    85,    69,   207,   208,   209,    70,    71,
     175,   449,   460,   451,   204
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,    55,   167,   360,   401,   391,   286,   268,   330,   372,
      68,   333,   321,   292,   212,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,    99,   329,   472,   292,    76,   496,     4,
     461,   292,   452,   476,   292,   114,   317,    93,   345,   168,
       3,   100,   101,   476,   358,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    73,    72,   270,   270,   455,
     453,   271,   352,   293,   359,    77,   377,   322,    78,   457,
     457,   115,    74,   431,   291,   169,    79,   501,    86,   270,
       5,     6,   478,   356,    90,   348,   399,   112,   294,   473,
     326,   510,   497,   349,   522,   318,   483,   457,    96,   446,
     270,   270,   407,   147,   362,   454,   276,   411,   412,    91,
     414,   447,   448,    92,   420,   446,   422,   457,   153,   154,
      94,   483,   298,   270,   403,   270,   500,   447,   448,   518,
     140,    99,   270,    95,   270,    97,   527,   434,   533,   121,
     320,    98,   438,   523,   439,   440,   -90,   442,   495,   100,
     101,   299,   270,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   300,   270,   464,    68,   274,   301,   270,
     466,   122,   513,   469,   244,   245,   302,   270,   303,   270,
     304,   270,   123,   141,   142,   143,   144,   145,   146,   124,
     147,   486,   149,   150,   210,   112,   489,   305,   270,   306,
     270,   151,   307,   270,   152,   153,   154,   308,   270,   155,
     156,   309,   270,   310,   270,   311,   270,   504,   125,   355,
     506,   126,   157,   158,   159,   160,   312,   270,   163,   164,
     313,   270,   516,   127,   517,   314,   270,   315,   270,   316,
     270,     5,     6,   128,     4,   129,     5,     6,     7,   130,
       8,   131,     9,   404,    10,    11,    12,    68,   132,   133,
      68,    13,    14,    15,   134,    16,    17,   135,    18,   136,
      19,    20,   137,   138,    21,    22,    23,    24,   428,    25,
      26,    27,    28,   139,    29,    30,   141,   142,   143,   144,
     145,   146,   171,   147,    31,   172,   150,   179,   183,   184,
     185,   188,    32,    33,   238,   259,   275,   152,   153,   154,
     263,   280,   155,   156,   281,     4,   295,   324,   346,   296,
     297,   350,   327,   323,   325,    68,   364,   159,   160,   332,
     368,   163,   164,   347,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,   365,   369,   141,   142,   143,   144,   370,
     373,    68,   147,   143,   144,   150,    68,    68,   147,    68,
     388,   150,   389,    68,   392,    68,   508,   153,   154,   393,
     397,   155,   156,   153,   154,   398,   402,   405,   406,    68,
     274,   166,   270,   423,   520,   426,    68,   427,   430,   432,
     433,    68,   456,    68,    68,   471,    68,   474,   529,   100,
     101,   481,   475,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   480,    68,   482,   485,   498,   514,    68,
     502,   519,    68,   515,   524,   528,   531,    84,   535,   357,
     367,   366,     0,    68,   274,   484,     0,     0,     0,     0,
      68,   450,     0,     0,     0,    68,   116,   117,   118,   119,
     120,     0,   141,   142,   143,   144,    68,   274,     0,   147,
       0,     0,   150,     0,     0,     0,    68,     0,     0,    68,
       0,     0,     0,   152,   153,   154,     0,     0,   155,   156,
       0,    68,     0,    68,     0,     0,     0,     0,     0,     0,
       0,   170,     0,     0,     0,     0,   173,   163,   164,     0,
     174,    68,   274,   177,     0,     0,     0,   182,     0,     0,
       0,   186,   187,     0,   189,   190,   192,     0,     0,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
       0,   206,     0,     0,     0,     0,     0,     0,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,     0,   232,   233,
     234,   235,   236,   237,     0,   239,   240,   241,   242,   243,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   258,     0,     0,     0,   354,   267,   267,
       0,     0,     0,     0,     0,     0,     0,     0,   278,     0,
       0,     0,   282,     0,     0,   100,   101,     0,   174,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,     0,
       0,     0,   174,     0,     0,     0,     0,     5,     6,     7,
       0,     8,     0,     9,     0,    10,    11,    12,     0,     0,
       0,   499,    13,    14,    15,     0,    16,    17,   389,    18,
       0,     0,    20,     0,     0,    21,    22,    23,    24,     0,
      25,    26,    27,    28,     0,    29,    30,     0,     0,     0,
       0,     0,     0,     0,   174,    31,     0,     0,   141,   142,
     143,   144,   267,    32,    33,   147,     0,   331,   150,     0,
       0,     0,   334,   336,   338,     0,   341,   343,   344,     0,
     153,   154,     0,     0,     0,     0,   351,     0,     0,   353,
       0,     0,   206,     0,   206,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,   206,   203,   361,     0,   363,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   375,     0,     0,     0,   380,   382,     0,   384,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   396,     0,     0,     0,   141,   142,   143,   144,   145,
     146,   400,   147,     0,   149,   150,     0,   174,     0,     0,
       0,     0,     0,   410,     0,     0,   152,   153,   154,     0,
     417,   155,   156,   421,     0,     0,   425,     0,     0,     0,
       0,     0,   174,     0,   157,   158,   159,   160,     0,     0,
     163,   164,     0,     0,     0,     0,   435,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   443,   141,   142,   143,
     144,   145,   146,     0,   147,   148,   149,   150,     0,     0,
       0,     0,     0,     0,   465,   151,     0,     0,   152,   153,
     154,     0,   470,   155,   156,     0,     0,     0,     0,   477,
       5,     6,    80,     0,     0,     0,   157,   158,   159,   160,
     487,     0,   163,   164,     0,   490,     0,     0,   492,   494,
     203,     0,     0,     0,     0,    20,     0,     0,    21,    81,
      23,    24,     0,     0,    26,    27,    28,     0,    29,    30,
     174,     0,     0,   512,   203,     0,     0,     0,    31,     0,
       0,     0,     0,     0,     0,     0,    32,    33,   174,     0,
       0,     0,     0,     0,     0,     0,   526,     0,     0,     0,
       0,     0,   174,     0,     0,   532,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,   265,     5,     6,
       7,     0,     8,     0,     9,     0,    10,    11,    12,     0,
       0,     0,     0,    13,    14,    15,     0,    16,    17,     0,
      18,     0,     0,    20,     0,     0,    21,    22,    23,    24,
       0,    25,    26,    27,    28,     0,    29,    30,   141,   142,
     143,   144,   145,   146,     0,   147,    31,     0,   150,     0,
       0,    87,     0,     0,    32,    33,     0,     0,     0,   152,
     153,   154,     0,     0,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   157,   158,   159,
     160,     0,     0,   163,   164,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     5,     6,     7,     0,     8,
       0,     9,     0,    10,    11,    12,     0,     0,     0,     0,
      13,    14,    15,     0,    16,    17,     0,    18,     0,     0,
      20,     0,     0,    21,    22,    23,    24,     0,    25,    26,
      27,    28,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,     0,     0,   273,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     5,     6,     7,     0,     8,     0,     9,     0,
      10,    11,    12,     0,     0,     0,     0,    13,    14,    15,
       0,    16,    17,     0,    18,     0,     0,    20,     0,     0,
      21,    22,    23,    24,     0,    25,    26,    27,    28,     0,
      29,    30,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,     0,     0,     0,     0,   429,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,     5,
       6,     7,     0,     8,     0,     9,     0,    10,    11,    12,
       0,     0,     0,     0,    13,    14,    15,     0,    16,    17,
       0,    18,     0,     0,    20,     0,     0,    21,    22,    23,
      24,     0,    25,    26,    27,    28,     0,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
       0,     0,     0,   479,     0,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     5,     6,     7,     0,
       8,     0,     9,     0,    10,    11,    12,     0,     0,     0,
       0,    13,    14,    15,     0,    16,    17,     0,    18,     0,
       0,    20,     0,     0,    21,    22,    23,    24,     0,    25,
      26,    27,    28,     0,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,     0,     0,     0,     0,
       0,     0,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
      80,     0,     0,     0,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    20,     0,     0,    21,    81,    23,    24,
       0,     0,    26,    27,    28,     0,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,     0,
      82,    83,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,    80,     0,     0,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    20,     0,     0,    21,    81,
     180,    24,     0,     0,    26,    27,    28,     0,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,   181,     0,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,    80,     0,     0,     0,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    20,     0,     0,
      21,    81,    23,    24,     0,     0,    26,    27,    28,     0,
      29,    30,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,     0,     0,     0,   191,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,    80,     0,     0,     0,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    20,
       0,     0,    21,    81,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,   205,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,    80,     0,
       0,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    20,     0,     0,    21,    81,    23,    24,     0,     0,
      26,    27,    28,     0,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,    31,   213,     0,     0,     0,     0,
       0,     0,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
      80,     0,     0,     0,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    20,     0,     0,    21,    81,    23,    24,
       0,     0,    26,    27,    28,     0,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,     0,
       0,   257,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,    80,     0,     0,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    20,     0,     0,    21,    81,
      23,    24,     0,     0,    26,    27,    28,     0,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,   277,     0,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,    80,     0,     0,     0,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    20,     0,     0,
      21,    81,    23,    24,     0,     0,    26,    27,    28,     0,
      29,    30,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,     0,     0,     0,     0,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,    80,     0,   335,     0,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    20,
       0,     0,    21,    81,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    31,   337,     0,     0,     0,     0,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,    80,     0,
       0,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    20,     0,     0,    21,    81,    23,    24,     0,     0,
      26,    27,    28,     0,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,     0,     0,   340,     0,
       0,     0,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
      80,     0,     0,     0,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    20,     0,     0,    21,    81,    23,    24,
       0,     0,    26,    27,    28,     0,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,     0,
       0,     0,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,    80,     0,   342,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    20,     0,     0,    21,    81,
      23,    24,     0,     0,    26,    27,    28,     0,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    31,   379,
       0,     0,     0,     0,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,    80,     0,     0,     0,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    20,     0,     0,
      21,    81,    23,    24,     0,     0,    26,    27,    28,     0,
      29,    30,     0,     0,     0,     0,     0,     0,     0,     0,
      31,   381,     0,     0,     0,     0,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,    80,     0,     0,     0,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    20,
       0,     0,    21,    81,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,   395,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,    80,     0,
       0,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    20,     0,     0,    21,    81,    23,    24,     0,     0,
      26,    27,    28,     0,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,    31,   416,     0,     0,     0,     0,
       0,     0,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
      80,     0,     0,     0,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    20,     0,     0,    21,    81,    23,    24,
       0,     0,    26,    27,    28,     0,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,     0,
       0,   493,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,    80,     0,     0,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    20,     0,     0,    21,    81,
      23,    24,     0,     0,    26,    27,    28,     0,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,     0,   511,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,    80,     0,     0,     0,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    20,     0,     0,
      21,    81,    23,    24,     0,     0,    26,    27,    28,     0,
      29,    30,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,     0,     0,     0,   525,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,    80,     0,     0,     0,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    20,
       0,     0,    21,    81,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,     0,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,   141,   142,   143,   144,   145,   146,     0,   147,   148,
     149,   150,     0,   287,   288,     0,     0,     0,     0,   151,
       0,     0,   152,   153,   154,     0,     0,   155,   156,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     157,   158,   159,   160,   161,   162,   163,   164,   141,   142,
     143,   144,   145,   146,     0,   147,   148,   149,   150,     0,
       0,   289,     0,   290,     0,     0,   151,     0,     0,   152,
     153,   154,   165,     0,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   157,   158,   159,
     160,   161,   162,   163,   164,   141,   142,   143,   144,   145,
     146,     0,   147,   148,   149,   150,     0,   385,     0,     0,
       0,     0,     0,   151,     0,     0,   152,   153,   154,   165,
       0,   155,   156,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   157,   158,   159,   160,   161,   162,
     163,   164,     0,   386,     0,     0,   141,   142,   143,   144,
     145,   146,     0,   147,   148,   149,   150,     0,   408,     0,
       0,     0,     0,     0,   151,     0,   165,   152,   153,   154,
       0,     0,   155,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   157,   158,   159,   160,   161,
     162,   163,   164,     0,   409,     0,     0,   141,   142,   143,
     144,   145,   146,     0,   147,   148,   149,   150,     0,   418,
       0,     0,     0,     0,     0,   151,     0,   165,   152,   153,
     154,     0,     0,   155,   156,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   157,   158,   159,   160,
     161,   162,   163,   164,     0,   419,     0,     0,   141,   142,
     143,   144,   145,   146,     0,   147,   148,   149,   150,     0,
     436,     0,     0,     0,     0,     0,   151,     0,   165,   152,
     153,   154,     0,     0,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   157,   158,   159,
     160,   161,   162,   163,   164,     0,     0,     0,   437,   141,
     142,   143,   144,   145,   146,     0,   147,   148,   149,   150,
       0,   444,     0,     0,     0,     0,     0,   151,     0,   165,
     152,   153,   154,     0,     0,   155,   156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   157,   158,
     159,   160,   161,   162,   163,   164,     0,     0,     0,   445,
     141,   142,   143,   144,   145,   146,     0,   147,   148,   149,
     150,     0,   462,     0,     0,     0,     0,     0,   151,     0,
     165,   152,   153,   154,     0,     0,   155,   156,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   157,
     158,   159,   160,   161,   162,   163,   164,     0,     0,     0,
     463,   141,   142,   143,   144,   145,   146,     0,   147,   148,
     149,   150,     0,   467,     0,     0,     0,     0,     0,   151,
       0,   165,   152,   153,   154,     0,     0,   155,   156,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     157,   158,   159,   160,   161,   162,   163,   164,     0,     0,
       0,   468,   141,   142,   143,   144,   145,   146,     0,   147,
     148,   149,   150,     0,     0,     0,     0,   176,     0,     0,
     151,     0,   165,   152,   153,   154,     0,     0,   155,   156,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   157,   158,   159,   160,   161,   162,   163,   164,   141,
     142,   143,   144,   145,   146,     0,   147,   148,   149,   150,
       0,   211,     0,     0,     0,     0,     0,   151,     0,     0,
     152,   153,   154,   165,     0,   155,   156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   157,   158,
     159,   160,   161,   162,   163,   164,   141,   142,   143,   144,
     145,   146,     0,   147,   148,   149,   150,     0,   264,     0,
       0,     0,     0,     0,   151,     0,     0,   152,   153,   154,
     165,     0,   155,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   157,   158,   159,   160,   161,
     162,   163,   164,   141,   142,   143,   144,   145,   146,     0,
     147,   148,   149,   150,     0,   269,     0,     0,     0,     0,
       0,   151,     0,     0,   152,   153,   154,   165,     0,   155,
     156,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   157,   158,   159,   160,   161,   162,   163,   164,
     141,   142,   143,   144,   145,   146,     0,   147,   148,   149,
     150,     0,   272,     0,     0,     0,     0,     0,   151,     0,
       0,   152,   153,   154,   165,     0,   155,   156,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   157,
     158,   159,   160,   161,   162,   163,   164,   141,   142,   143,
     144,   145,   146,     0,   147,   148,   149,   150,     0,     0,
       0,     0,   279,     0,     0,   151,     0,     0,   152,   153,
     154,   165,     0,   155,   156,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   157,   158,   159,   160,
     161,   162,   163,   164,   141,   142,   143,   144,   145,   146,
       0,   147,   148,   149,   150,     0,   283,     0,     0,     0,
       0,     0,   151,     0,     0,   152,   153,   154,   165,     0,
     155,   156,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   157,   158,   159,   160,   161,   162,   163,
     164,   141,   142,   143,   144,   145,   146,     0,   147,   148,
     149,   150,     0,   284,     0,     0,     0,     0,     0,   151,
       0,     0,   152,   153,   154,   165,     0,   155,   156,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     157,   158,   159,   160,   161,   162,   163,   164,   141,   142,
     143,   144,   145,   146,     0,   147,   148,   149,   150,     0,
       0,     0,   319,     0,     0,     0,   151,     0,     0,   152,
     153,   154,   165,     0,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   157,   158,   159,
     160,   161,   162,   163,   164,   141,   142,   143,   144,   145,
     146,     0,   147,   148,   149,   150,     0,     0,     0,     0,
     339,     0,     0,   151,     0,     0,   152,   153,   154,   165,
       0,   155,   156,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   157,   158,   159,   160,   161,   162,
     163,   164,   141,   142,   143,   144,   145,   146,     0,   147,
     148,   149,   150,     0,     0,     0,   327,     0,     0,     0,
     151,     0,     0,   152,   153,   154,   165,     0,   155,   156,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   157,   158,   159,   160,   161,   162,   163,   164,   141,
     142,   143,   144,   145,   146,     0,   147,   148,   149,   150,
       0,   374,     0,     0,     0,     0,     0,   151,     0,     0,
     152,   153,   154,   165,     0,   155,   156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   157,   158,
     159,   160,   161,   162,   163,   164,   141,   142,   143,   144,
     145,   146,     0,   147,   148,   149,   150,     0,     0,     0,
       0,     0,     0,     0,   151,     0,     0,   152,   153,   154,
     165,     0,   155,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   157,   158,   159,   160,   161,
     162,   163,   164,     0,   376,     0,     0,   141,   142,   143,
     144,   145,   146,     0,   147,   148,   149,   150,     0,   378,
       0,     0,     0,     0,     0,   151,     0,   165,   152,   153,
     154,     0,     0,   155,   156,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   157,   158,   159,   160,
     161,   162,   163,   164,   141,   142,   143,   144,   145,   146,
       0,   147,   148,   149,   150,     0,     0,     0,     0,   383,
       0,     0,   151,     0,     0,   152,   153,   154,   165,     0,
     155,   156,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   157,   158,   159,   160,   161,   162,   163,
     164,   141,   142,   143,   144,   145,   146,     0,   147,   148,
     149,   150,     0,   387,     0,     0,     0,     0,     0,   151,
       0,     0,   152,   153,   154,   165,     0,   155,   156,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     157,   158,   159,   160,   161,   162,   163,   164,   141,   142,
     143,   144,   145,   146,     0,   147,   148,   149,   150,     0,
       0,     0,     0,   394,     0,     0,   151,     0,     0,   152,
     153,   154,   165,     0,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   157,   158,   159,
     160,   161,   162,   163,   164,   141,   142,   143,   144,   145,
     146,     0,   147,   148,   149,   150,     0,   413,     0,     0,
       0,     0,     0,   151,     0,     0,   152,   153,   154,   165,
       0,   155,   156,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   157,   158,   159,   160,   161,   162,
     163,   164,   141,   142,   143,   144,   145,   146,     0,   147,
     148,   149,   150,     0,   415,     0,     0,     0,     0,     0,
     151,     0,     0,   152,   153,   154,   165,     0,   155,   156,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   157,   158,   159,   160,   161,   162,   163,   164,   141,
     142,   143,   144,   145,   146,     0,   147,   148,   149,   150,
       0,   441,     0,     0,     0,     0,     0,   151,     0,     0,
     152,   153,   154,   165,     0,   155,   156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   157,   158,
     159,   160,   161,   162,   163,   164,   141,   142,   143,   144,
     145,   146,     0,   147,   148,   149,   150,     0,   488,     0,
       0,     0,     0,     0,   151,     0,     0,   152,   153,   154,
     165,     0,   155,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   157,   158,   159,   160,   161,
     162,   163,   164,   141,   142,   143,   144,   145,   146,     0,
     147,   148,   149,   150,     0,   491,     0,     0,     0,     0,
       0,   151,     0,     0,   152,   153,   154,   165,     0,   155,
     156,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   157,   158,   159,   160,   161,   162,   163,   164,
     141,   142,   143,   144,   145,   146,     0,   147,   148,   149,
     150,     0,   503,     0,     0,     0,     0,     0,   151,     0,
       0,   152,   153,   154,   165,     0,   155,   156,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   157,
     158,   159,   160,   161,   162,   163,   164,   141,   142,   143,
     144,   145,   146,     0,   147,   148,   149,   150,     0,   505,
       0,     0,     0,     0,     0,   151,     0,     0,   152,   153,
     154,   165,     0,   155,   156,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   157,   158,   159,   160,
     161,   162,   163,   164,   141,   142,   143,   144,   145,   146,
       0,   147,   148,   149,   150,     0,     0,     0,     0,   507,
       0,     0,   151,     0,     0,   152,   153,   154,   165,     0,
     155,   156,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   157,   158,   159,   160,   161,   162,   163,
     164,   141,   142,   143,   144,   145,   146,     0,   147,   148,
     149,   150,     0,     0,     0,     0,   509,     0,     0,   151,
       0,     0,   152,   153,   154,   165,     0,   155,   156,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     157,   158,   159,   160,   161,   162,   163,   164,   141,   142,
     143,   144,   145,   146,     0,   147,   148,   149,   150,     0,
       0,     0,     0,   521,     0,     0,   151,     0,     0,   152,
     153,   154,   165,     0,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   157,   158,   159,
     160,   161,   162,   163,   164,   141,   142,   143,   144,   145,
     146,     0,   147,   148,   149,   150,     0,     0,     0,     0,
     530,     0,     0,   151,     0,     0,   152,   153,   154,   165,
       0,   155,   156,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   157,   158,   159,   160,   161,   162,
     163,   164,   141,   142,   143,   144,   145,   146,     0,   147,
     148,   149,   150,     0,     0,     0,     0,   534,     0,     0,
     151,     0,     0,   152,   153,   154,   165,     0,   155,   156,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   157,   158,   159,   160,   161,   162,   163,   164,   141,
     142,   143,   144,   145,   146,     0,   147,   148,   149,   150,
       0,     0,     0,     0,     0,     0,     0,   151,     0,     0,
     152,   153,   154,   165,     0,   155,   156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   157,   158,
     159,   160,   161,   162,   163,   164,   141,   142,   143,   144,
     145,   146,     0,   147,   148,   149,   150,     0,     0,     0,
       0,     0,     0,     0,   151,     0,     0,   152,   153,   154,
     165,     0,   155,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   157,   158,   159,   160,   161,
     162,   163,   164,   141,   142,   143,   144,   145,   146,     0,
     147,   148,   149,   150,     0,     0,     0,     0,     0,     0,
       0,   151,     0,     0,   152,   153,   154,     0,     0,   155,
     156,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   157,   158,   159,   160,   161,     0,   163,   164
};

static const yytype_int16 yycheck[] =
{
       2,     2,    66,   318,   365,   347,   188,   172,   269,   329,
      12,   272,    48,    55,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,    48,   268,    48,    55,     6,    48,     3,
     433,    55,    28,   450,    55,    53,    53,    16,   282,    53,
       0,    66,    67,   460,   297,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    36,    36,    55,    55,   430,
      56,    59,    59,   115,   317,    57,   337,   113,    57,   432,
     433,    89,    53,   403,   191,    89,    53,   480,    53,    55,
       5,     6,   453,    59,    53,    59,   115,   112,   205,   112,
     265,   115,   112,   285,   115,   112,   459,   460,    36,    24,
      55,    55,   373,    49,    59,    59,    23,   378,   379,    53,
     381,    36,    37,    53,   385,    24,   387,   480,    64,    65,
      53,   484,    54,    55,   368,    55,   478,    36,    37,    59,
      57,    48,    55,    53,    55,    53,    59,   408,    59,    53,
     257,    48,   413,   514,   415,   416,    57,   418,   473,    66,
      67,    54,    55,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    54,    55,   436,   178,   178,    54,    55,
     441,    53,   497,   444,   153,   154,    54,    55,    54,    55,
      54,    55,    53,    42,    43,    44,    45,    46,    47,    53,
      49,   462,    51,    52,    36,   112,   467,    54,    55,    54,
      55,    60,    54,    55,    63,    64,    65,    54,    55,    68,
      69,    54,    55,    54,    55,    54,    55,   488,    53,   293,
     491,    53,    81,    82,    83,    84,    54,    55,    87,    88,
      54,    55,   503,    53,   505,    54,    55,    54,    55,    54,
      55,     5,     6,    53,     3,    53,     5,     6,     7,    53,
       9,    53,    11,   370,    13,    14,    15,   269,    53,    53,
     272,    20,    21,    22,    53,    24,    25,    53,    27,    53,
      29,    30,    53,    53,    33,    34,    35,    36,   395,    38,
      39,    40,    41,    53,    43,    44,    42,    43,    44,    45,
      46,    47,    53,    49,    53,    53,    52,    14,    35,    35,
      53,    58,    61,    62,    36,    35,    53,    63,    64,    65,
      36,    23,    68,    69,    23,     3,    55,    55,    58,    54,
      53,    39,    56,    54,    53,   337,    48,    83,    84,    57,
     115,    87,    88,    58,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    58,    36,    42,    43,    44,    45,    55,
       8,   373,    49,    44,    45,    52,   378,   379,    49,   381,
      54,    52,    26,   385,    57,   387,   493,    64,    65,    54,
      54,    68,    69,    64,    65,    54,    54,    54,    54,   401,
     401,    48,    55,    58,   511,    59,   408,    59,    58,    58,
      58,   413,    54,   415,   416,    48,   418,    36,   525,    66,
      67,    57,    59,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    58,   436,    59,    59,    57,    56,   441,
      57,    48,   444,    59,    57,    48,    57,    10,    57,   295,
     325,   324,    -1,   455,   455,   460,    -1,    -1,    -1,    -1,
     462,   423,    -1,    -1,    -1,   467,    29,    30,    31,    32,
      33,    -1,    42,    43,    44,    45,   478,   478,    -1,    49,
      -1,    -1,    52,    -1,    -1,    -1,   488,    -1,    -1,   491,
      -1,    -1,    -1,    63,    64,    65,    -1,    -1,    68,    69,
      -1,   503,    -1,   505,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    79,    87,    88,    -1,
      83,   523,   523,    86,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    94,    95,    -1,    97,    98,    99,    -1,    -1,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,   141,   142,
     143,   144,   145,   146,    -1,   148,   149,   150,   151,   152,
      -1,    -1,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,    -1,    -1,    -1,    48,   171,   172,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,    -1,
      -1,    -1,   185,    -1,    -1,    66,    67,    -1,   191,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      -1,    -1,   205,    -1,    -1,    -1,    -1,     5,     6,     7,
      -1,     9,    -1,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,    22,    -1,    24,    25,    26,    27,
      -1,    -1,    30,    -1,    -1,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   257,    53,    -1,    -1,    42,    43,
      44,    45,   265,    61,    62,    49,    -1,   270,    52,    -1,
      -1,    -1,   275,   276,   277,    -1,   279,   280,   281,    -1,
      64,    65,    -1,    -1,    -1,    -1,   289,    -1,    -1,   292,
      -1,    -1,   295,    -1,   297,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   317,   318,   319,    -1,   321,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   335,    -1,    -1,    -1,   339,   340,    -1,   342,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   354,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      47,   364,    49,    -1,    51,    52,    -1,   370,    -1,    -1,
      -1,    -1,    -1,   376,    -1,    -1,    63,    64,    65,    -1,
     383,    68,    69,   386,    -1,    -1,   389,    -1,    -1,    -1,
      -1,    -1,   395,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    88,    -1,    -1,    -1,    -1,   409,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   419,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,   437,    60,    -1,    -1,    63,    64,
      65,    -1,   445,    68,    69,    -1,    -1,    -1,    -1,   452,
       5,     6,     7,    -1,    -1,    -1,    81,    82,    83,    84,
     463,    -1,    87,    88,    -1,   468,    -1,    -1,   471,   472,
     473,    -1,    -1,    -1,    -1,    30,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    -1,    43,    44,
     493,    -1,    -1,   496,   497,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,   511,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   519,    -1,    -1,    -1,
      -1,    -1,   525,    -1,    -1,   528,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,     5,     6,
       7,    -1,     9,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,    -1,
      27,    -1,    -1,    30,    -1,    -1,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    -1,    43,    44,    42,    43,
      44,    45,    46,    47,    -1,    49,    53,    -1,    52,    -1,
      -1,    58,    -1,    -1,    61,    62,    -1,    -1,    -1,    63,
      64,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    -1,    -1,    87,    88,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,     5,     6,     7,    -1,     9,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,    24,    25,    -1,    27,    -1,    -1,
      30,    -1,    -1,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,     5,     6,     7,    -1,     9,    -1,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    -1,    20,    21,    22,
      -1,    24,    25,    -1,    27,    -1,    -1,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    38,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    59,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,     5,
       6,     7,    -1,     9,    -1,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,
      -1,    27,    -1,    -1,    30,    -1,    -1,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,     5,     6,     7,    -1,
       9,    -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    24,    25,    -1,    27,    -1,
      -1,    30,    -1,    -1,    33,    34,    35,    36,    -1,    38,
      39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    -1,    -1,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    30,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      57,    58,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    -1,    -1,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    30,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     6,     7,    -1,    -1,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,    -1,
      -1,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    30,    -1,    -1,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    -1,    -1,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    30,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    -1,    -1,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    30,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     6,     7,    -1,    -1,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    -1,    91,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,    -1,
      -1,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    30,    -1,    -1,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    -1,    -1,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    30,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    -1,    91,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    30,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     6,     7,    -1,    -1,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,    -1,
      -1,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    30,    -1,    -1,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    -1,    -1,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    30,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    -1,    -1,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    30,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     6,     7,    -1,    -1,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    54,    55,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    63,    64,    65,    -1,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      -1,    55,    -1,    57,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,   113,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,   113,
      -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    -1,    -1,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    60,    -1,   113,    63,    64,    65,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    -1,    -1,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    60,    -1,   113,    63,    64,
      65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    -1,    -1,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    60,    -1,   113,    63,
      64,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    92,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,   113,
      63,    64,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    -1,    92,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,
     113,    63,    64,    65,    -1,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      92,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,
      -1,   113,    63,    64,    65,    -1,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
      -1,    92,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      60,    -1,   113,    63,    64,    65,    -1,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      63,    64,    65,   113,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
     113,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    63,    64,    65,   113,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,   113,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    60,    -1,    -1,    63,    64,
      65,   113,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,   113,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    63,    64,    65,   113,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,   113,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    60,    -1,    -1,    63,    64,    65,   113,
      -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,   113,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      63,    64,    65,   113,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
     113,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    -1,    -1,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    60,    -1,   113,    63,    64,
      65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,   113,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    63,    64,    65,   113,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,   113,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,   113,
      -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,   113,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      63,    64,    65,   113,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
     113,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    63,    64,    65,   113,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,   113,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,
      65,   113,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,   113,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,
      -1,    -1,    63,    64,    65,   113,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,   113,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    60,    -1,    -1,    63,    64,    65,   113,
      -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,   113,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      63,    64,    65,   113,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
     113,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    63,    64,    65,    -1,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    -1,    87,    88
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   117,   118,     0,     3,     5,     6,     7,     9,    11,
      13,    14,    15,    20,    21,    22,    24,    25,    27,    29,
      30,    33,    34,    35,    36,    38,    39,    40,    41,    43,
      44,    53,    61,    62,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   119,   120,   123,   124,   128,   129,   136,
     139,   140,   141,   142,   143,   144,   145,   146,   149,   150,
     154,   155,    36,    36,    53,   147,   147,    57,    57,    53,
       7,    34,    57,    58,   144,   149,    53,    58,   123,   135,
      53,    53,    53,   147,    53,    53,    36,    53,    48,    48,
      66,    67,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,   112,   148,    53,    89,   144,   144,   144,   144,
     144,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      57,    42,    43,    44,    45,    46,    47,    49,    50,    51,
      52,    60,    63,    64,    65,    68,    69,    81,    82,    83,
      84,    85,    86,    87,    88,   113,    48,   148,    53,    89,
     144,    53,    53,   144,   144,   156,    57,   144,   122,    14,
      35,    57,   144,    35,    35,    53,   144,   144,    58,   144,
     144,    58,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   160,    58,   144,   151,   152,   153,
      36,    54,   156,    54,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   144,   144,   144,   144,   144,   144,    36,   144,
     144,   144,   144,   144,   147,   147,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,    58,   144,    35,
     125,   126,   127,    36,    54,   112,   131,   144,   131,    54,
      55,    59,    54,    59,   123,    53,    23,    57,   144,    57,
      23,    23,   144,    54,    54,   121,   124,    54,    55,    55,
      57,   156,    55,   115,   156,    55,    54,    53,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    53,   112,    56,
     156,    48,   113,    54,    55,    53,   131,    56,   130,   130,
     135,   144,    57,   135,   144,    91,   144,    54,   144,    57,
      57,   144,    91,   144,   144,   130,    58,    58,    59,   124,
      39,   144,    59,   144,    48,   148,    59,   151,   153,   153,
     160,   144,    59,   144,    48,    58,   127,   125,   115,    36,
      55,   132,   132,     8,    54,   144,    90,   135,    54,    54,
     144,    54,   144,    57,   144,    54,    90,    54,    54,    26,
     137,   137,    57,    54,    57,    58,   144,    54,    54,   115,
     144,   122,    54,   130,   156,    54,    54,   135,    54,    90,
     144,   135,   135,    54,   135,    54,    54,   144,    54,    90,
     135,   144,   135,    58,   138,   144,    59,    59,   156,    59,
      58,   132,    58,    58,   135,   144,    54,    92,   135,   135,
     135,    54,   135,   144,    54,    92,    24,    36,    37,   157,
     158,   159,    28,    56,    59,   122,    54,   129,   133,   134,
     158,   133,    54,    92,   135,   144,   135,    54,    92,   135,
     144,    48,    48,   112,    36,    59,   159,   144,   122,    59,
      58,    57,    59,   129,   134,    59,   135,   144,    54,   135,
     144,    54,   144,    58,   144,   160,    48,   112,    57,    19,
     137,   133,    57,    54,   135,    54,   135,    57,   156,    57,
     115,    58,   144,   160,    56,    59,   135,   135,    59,    48,
     156,    57,   115,   122,    57,    58,   144,    59,    48,   156,
      57,    57,   144,    59,    57,    57
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   116,   117,   118,   118,   119,   119,   119,   120,   121,
     121,   122,   122,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   124,   124,
     125,   125,   126,   126,   127,   127,   127,   127,   128,   129,
     129,   129,   129,   129,   129,   130,   130,   131,   131,   132,
     132,   133,   133,   133,   133,   134,   134,   135,   135,   136,
     136,   137,   137,   137,   138,   138,   139,   139,   140,   140,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   142,   142,   142,   142,   142,   142,   142,
     143,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     145,   145,   146,   146,   147,   147,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   150,   150,   150,   151,   151,   152,   152,   153,   153,
     154,   154,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   156,   156,   157,   157,   158,   158,   159,   159,
     159,   159,   159,   159,   159,   159,   160,   160
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     6,     1,
       2,     0,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     3,     5,     2,     4,     6,     1,     8,    10,
       0,     1,     1,     3,     1,     2,     3,     4,    10,    10,
       7,    12,     9,    10,     7,     0,     2,     0,     1,     0,
       2,     0,     1,     1,     2,     2,     3,     3,     1,     7,
       7,     4,     7,     5,     1,     3,     5,     7,     5,     6,
       9,     8,     8,     7,     8,     7,     7,     6,     9,    10,
      11,    12,     8,     7,     7,     9,    10,    11,    12,     8,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     1,     5,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     6,     3,     3,     1,     3,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     3,     5,     6,     8,     2,     5,     2,     3,
       5,     4,     6,     6,     1,     3,     1,     3,     0,     1,
       4,     6,     4,     3,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     1,     3,     0,     1,     1,     2,     4,     6,
       5,     7,     4,     7,     9,     8,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




/* The kind of the lookahead of this context.  */
static yysymbol_kind_t
yypcontext_token (const yypcontext_t *yyctx) YY_ATTRIBUTE_UNUSED;

static yysymbol_kind_t
yypcontext_token (const yypcontext_t *yyctx)
{
  return yyctx->yytoken;
}

/* The location of the lookahead of this context.  */
static YYLTYPE *
yypcontext_location (const yypcontext_t *yyctx) YY_ATTRIBUTE_UNUSED;

static YYLTYPE *
yypcontext_location (const yypcontext_t *yyctx)
{
  return yyctx->yylloc;
}

/* User defined function to report a syntax error.  */
static int
yyreport_syntax_error (const yypcontext_t *yyctx);

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* start: decl_list  */
#line 217 "CMDgram.y"
      { }
#line 2723 "CMDgram.cpp"
    break;

  case 3: /* decl_list: %empty  */
#line 222 "CMDgram.y"
      { (yyval.stmt) = nil; }
#line 2729 "CMDgram.cpp"
    break;

  case 4: /* decl_list: decl_list decl  */
#line 224 "CMDgram.y"
      { if(!Script::gStatementList) { Script::gStatementList = (yyvsp[0].stmt); } else { Script::gStatementList->append((yyvsp[0].stmt)); } }
#line 2735 "CMDgram.cpp"
    break;

  case 5: /* decl: stmt  */
#line 229 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2741 "CMDgram.cpp"
    break;

  case 6: /* decl: fn_decl_stmt  */
#line 231 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2747 "CMDgram.cpp"
    break;

  case 7: /* decl: package_decl  */
#line 233 "CMDgram.y"
     { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2753 "CMDgram.cpp"
    break;

  case 8: /* package_decl: rwPACKAGE IDENT '{' fn_decl_list '}' ';'  */
#line 238 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-2].stmt); for(StmtNode *walk = ((yyvsp[-2].stmt));walk;walk = walk->getNext() ) walk->setPackage((yyvsp[-4].s).value); }
#line 2759 "CMDgram.cpp"
    break;

  case 9: /* fn_decl_list: fn_decl_stmt  */
#line 243 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2765 "CMDgram.cpp"
    break;

  case 10: /* fn_decl_list: fn_decl_list fn_decl_stmt  */
#line 245 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].stmt); ((yyvsp[-1].stmt))->append((yyvsp[0].stmt));  }
#line 2771 "CMDgram.cpp"
    break;

  case 11: /* statement_list: %empty  */
#line 250 "CMDgram.y"
      { (yyval.stmt) = nil; }
#line 2777 "CMDgram.cpp"
    break;

  case 12: /* statement_list: statement_list stmt  */
#line 252 "CMDgram.y"
      { if(!(yyvsp[-1].stmt)) { (yyval.stmt) = (yyvsp[0].stmt); } else { ((yyvsp[-1].stmt))->append((yyvsp[0].stmt)); (yyval.stmt) = (yyvsp[-1].stmt); } }
#line 2783 "CMDgram.cpp"
    break;

  case 19: /* stmt: rwBREAK ';'  */
#line 263 "CMDgram.y"
      { (yyval.stmt) = BreakStmtNode::alloc( (yyvsp[-1].i).lineNumber ); }
#line 2789 "CMDgram.cpp"
    break;

  case 20: /* stmt: rwCONTINUE ';'  */
#line 265 "CMDgram.y"
      { (yyval.stmt) = ContinueStmtNode::alloc( (yyvsp[-1].i).lineNumber ); }
#line 2795 "CMDgram.cpp"
    break;

  case 21: /* stmt: rwRETURN ';'  */
#line 267 "CMDgram.y"
      { (yyval.stmt) = ReturnStmtNode::alloc( (yyvsp[-1].i).lineNumber, NULL ); }
#line 2801 "CMDgram.cpp"
    break;

  case 22: /* stmt: rwRETURN expr ';'  */
#line 269 "CMDgram.y"
      { (yyval.stmt) = ReturnStmtNode::alloc( (yyvsp[-2].i).lineNumber, (yyvsp[-1].expr) ); }
#line 2807 "CMDgram.cpp"
    break;

  case 23: /* stmt: rwRETURN '{' expr_list '}' ';'  */
#line 272 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-4].i).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
//          for (ExprNode* expr = (ExprNode*)$3; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.stmt) = ReturnStmtNode::alloc( (yyvsp[-4].i).lineNumber, vecNode );
      }
#line 2820 "CMDgram.cpp"
    break;

  case 24: /* stmt: expression_stmt ';'  */
#line 282 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 2826 "CMDgram.cpp"
    break;

  case 25: /* stmt: TTAG '=' expr ';'  */
#line 284 "CMDgram.y"
      { (yyval.stmt) = TTagSetStmtNode::alloc( (yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[-1].expr), NULL ); }
#line 2832 "CMDgram.cpp"
    break;

  case 26: /* stmt: TTAG '=' expr ',' expr ';'  */
#line 286 "CMDgram.y"
      { (yyval.stmt) = TTagSetStmtNode::alloc( (yyvsp[-5].s).lineNumber, (yyvsp[-5].s).value, (yyvsp[-3].expr), (yyvsp[-1].expr) ); }
#line 2838 "CMDgram.cpp"
    break;

  case 27: /* stmt: DOCBLOCK  */
#line 288 "CMDgram.y"
      { (yyval.stmt) = StrConstNode::alloc( (yyvsp[0].str).lineNumber, (yyvsp[0].str).value, false, true ); }
#line 2844 "CMDgram.cpp"
    break;

  case 28: /* fn_decl_stmt: rwDEFINE IDENT '(' var_list_decl ')' '{' statement_list '}'  */
#line 294 "CMDgram.y"
      { (yyval.stmt) = FunctionDeclStmtNode::alloc( (yyvsp[-7].i).lineNumber, (yyvsp[-6].s).value, NULL, (yyvsp[-4].var), (yyvsp[-1].stmt) ); }
#line 2850 "CMDgram.cpp"
    break;

  case 29: /* fn_decl_stmt: rwDEFINE IDENT opCOLONCOLON IDENT '(' var_list_decl ')' '{' statement_list '}'  */
#line 297 "CMDgram.y"
      { (yyval.stmt) = FunctionDeclStmtNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-6].s).value, (yyvsp[-8].s).value, (yyvsp[-4].var), (yyvsp[-1].stmt) ); }
#line 2856 "CMDgram.cpp"
    break;

  case 30: /* var_list_decl: %empty  */
#line 302 "CMDgram.y"
      { (yyval.var) = NULL; }
#line 2862 "CMDgram.cpp"
    break;

  case 31: /* var_list_decl: var_list  */
#line 304 "CMDgram.y"
      { (yyval.var) = (yyvsp[0].var); }
#line 2868 "CMDgram.cpp"
    break;

  case 32: /* var_list: param  */
#line 309 "CMDgram.y"
      { (yyval.var) = (yyvsp[0].var); }
#line 2874 "CMDgram.cpp"
    break;

  case 33: /* var_list: var_list ',' param  */
#line 311 "CMDgram.y"
      { (yyval.var) = (yyvsp[-2].var); ((StmtNode*)((yyvsp[-2].var)))->append((StmtNode*)(yyvsp[0].var) ); }
#line 2880 "CMDgram.cpp"
    break;

  case 34: /* param: VAR  */
#line 328 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[0].s).lineNumber, (yyvsp[0].s).value, NULL); }
#line 2886 "CMDgram.cpp"
    break;

  case 35: /* param: VAR '?'  */
#line 330 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[-1].s).lineNumber, (yyvsp[-1].s).value, NULL); }
#line 2892 "CMDgram.cpp"
    break;

  case 36: /* param: VAR '=' expr  */
#line 332 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[-2].s).lineNumber, (yyvsp[-2].s).value, (yyvsp[0].expr)); }
#line 2898 "CMDgram.cpp"
    break;

  case 37: /* param: VAR '?' '=' expr  */
#line 334 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[0].expr)); }
#line 2904 "CMDgram.cpp"
    break;

  case 38: /* datablock_decl: rwDATABLOCK class_name_expr '(' expr parent_block ')' '{' slot_assign_list_opt '}' ';'  */
#line 339 "CMDgram.y"
      { (yyval.stmt) = ObjectDeclNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-8].expr), (yyvsp[-6].expr), NULL, (yyvsp[-5].s).value, (yyvsp[-2].slist), NULL, true, false, false); }
#line 2910 "CMDgram.cpp"
    break;

  case 39: /* object_decl: rwDECLARE class_name_expr '(' object_name parent_block object_args ')' '{' object_declare_block '}'  */
#line 344 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-8].expr), (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-5].s).value, (yyvsp[-1].odcl).slots, (yyvsp[-1].odcl).decls, false, false, false); }
#line 2916 "CMDgram.cpp"
    break;

  case 40: /* object_decl: rwDECLARE class_name_expr '(' object_name parent_block object_args ')'  */
#line 346 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[-2].s).value, NULL, NULL, false, false, false); }
#line 2922 "CMDgram.cpp"
    break;

  case 41: /* object_decl: rwDECLARE class_name_expr '(' '[' object_name ']' parent_block object_args ')' '{' object_declare_block '}'  */
#line 348 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-11].i).lineNumber, (yyvsp[-10].expr), (yyvsp[-7].expr), (yyvsp[-4].expr), (yyvsp[-5].s).value, (yyvsp[-1].odcl).slots, (yyvsp[-1].odcl).decls, false, true, false); }
#line 2928 "CMDgram.cpp"
    break;

  case 42: /* object_decl: rwDECLARE class_name_expr '(' '[' object_name ']' parent_block object_args ')'  */
#line 350 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-8].i).lineNumber, (yyvsp[-7].expr), (yyvsp[-4].expr), (yyvsp[-1].expr), (yyvsp[-2].s).value, NULL, NULL, false, true, false); }
#line 2934 "CMDgram.cpp"
    break;

  case 43: /* object_decl: rwDECLARESINGLETON class_name_expr '(' object_name parent_block object_args ')' '{' object_declare_block '}'  */
#line 352 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-8].expr), (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-5].s).value, (yyvsp[-1].odcl).slots, (yyvsp[-1].odcl).decls, false, false, true); }
#line 2940 "CMDgram.cpp"
    break;

  case 44: /* object_decl: rwDECLARESINGLETON class_name_expr '(' object_name parent_block object_args ')'  */
#line 354 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[-2].s).value, NULL, NULL, false, false, true); }
#line 2946 "CMDgram.cpp"
    break;

  case 45: /* parent_block: %empty  */
#line 359 "CMDgram.y"
      { (yyval.s).value = NULL; }
#line 2952 "CMDgram.cpp"
    break;

  case 46: /* parent_block: ':' IDENT  */
#line 361 "CMDgram.y"
      { (yyval.s) = (yyvsp[0].s); }
#line 2958 "CMDgram.cpp"
    break;

  case 47: /* object_name: %empty  */
#line 366 "CMDgram.y"
      { (yyval.expr) = StrConstNode::alloc( CodeBlock::smCurrentParser->getCurrentLine(), "", false); }
#line 2964 "CMDgram.cpp"
    break;

  case 48: /* object_name: expr  */
#line 368 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 2970 "CMDgram.cpp"
    break;

  case 49: /* object_args: %empty  */
#line 373 "CMDgram.y"
      { (yyval.expr) = NULL; }
#line 2976 "CMDgram.cpp"
    break;

  case 50: /* object_args: ',' expr_list  */
#line 375 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 2982 "CMDgram.cpp"
    break;

  case 51: /* object_declare_block: %empty  */
#line 380 "CMDgram.y"
      { (yyval.odcl).slots = NULL; (yyval.odcl).decls = NULL; }
#line 2988 "CMDgram.cpp"
    break;

  case 52: /* object_declare_block: slot_assign_list  */
#line 382 "CMDgram.y"
      { (yyval.odcl).slots = (yyvsp[0].slist); (yyval.odcl).decls = NULL; }
#line 2994 "CMDgram.cpp"
    break;

  case 53: /* object_declare_block: object_decl_list  */
#line 384 "CMDgram.y"
      { (yyval.odcl).slots = NULL; (yyval.odcl).decls = (yyvsp[0].od); }
#line 3000 "CMDgram.cpp"
    break;

  case 54: /* object_declare_block: slot_assign_list object_decl_list  */
#line 386 "CMDgram.y"
      { (yyval.odcl).slots = (yyvsp[-1].slist); (yyval.odcl).decls = (yyvsp[0].od); }
#line 3006 "CMDgram.cpp"
    break;

  case 55: /* object_decl_list: object_decl ';'  */
#line 391 "CMDgram.y"
      { (yyval.od) = (yyvsp[-1].od); }
#line 3012 "CMDgram.cpp"
    break;

  case 56: /* object_decl_list: object_decl_list object_decl ';'  */
#line 393 "CMDgram.y"
      { (yyvsp[-2].od)->append((yyvsp[-1].od)); (yyval.od) = (yyvsp[-2].od); }
#line 3018 "CMDgram.cpp"
    break;

  case 57: /* stmt_block: '{' statement_list '}'  */
#line 398 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 3024 "CMDgram.cpp"
    break;

  case 58: /* stmt_block: stmt  */
#line 400 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 3030 "CMDgram.cpp"
    break;

  case 59: /* switch_stmt: rwSWITCH '(' expr ')' '{' case_block '}'  */
#line 405 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].ifnode); (yyvsp[-1].ifnode)->propagateSwitchExpr((yyvsp[-4].expr), false); }
#line 3036 "CMDgram.cpp"
    break;

  case 60: /* switch_stmt: rwSWITCHSTR '(' expr ')' '{' case_block '}'  */
#line 407 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].ifnode); (yyvsp[-1].ifnode)->propagateSwitchExpr((yyvsp[-4].expr), true); }
#line 3042 "CMDgram.cpp"
    break;

  case 61: /* case_block: rwCASE case_expr ':' statement_list  */
#line 415 "CMDgram.y"
      { (yyval.ifnode) = IfStmtNode::alloc( (yyvsp[-3].i).lineNumber, (yyvsp[-2].expr), (yyvsp[0].stmt), NULL, false); }
#line 3048 "CMDgram.cpp"
    break;

  case 62: /* case_block: rwCASE case_expr ':' statement_list rwDEFAULT ':' statement_list  */
#line 417 "CMDgram.y"
      { (yyval.ifnode) = IfStmtNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].stmt), (yyvsp[0].stmt), false); }
#line 3054 "CMDgram.cpp"
    break;

  case 63: /* case_block: rwCASE case_expr ':' statement_list case_block  */
#line 419 "CMDgram.y"
      { (yyval.ifnode) = IfStmtNode::alloc( (yyvsp[-4].i).lineNumber, (yyvsp[-3].expr), (yyvsp[-1].stmt), (yyvsp[0].ifnode), true); }
#line 3060 "CMDgram.cpp"
    break;

  case 64: /* case_expr: expr  */
#line 424 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3066 "CMDgram.cpp"
    break;

  case 65: /* case_expr: case_expr rwCASEOR expr  */
#line 426 "CMDgram.y"
      { ((yyvsp[-2].expr))->append((yyvsp[0].expr)); (yyval.expr) = (yyvsp[-2].expr); }
#line 3072 "CMDgram.cpp"
    break;

  case 66: /* if_stmt: rwIF '(' expr ')' stmt_block  */
#line 431 "CMDgram.y"
      { (yyval.stmt) = IfStmtNode::alloc((yyvsp[-4].i).lineNumber, (yyvsp[-2].expr), (yyvsp[0].stmt), NULL, false); }
#line 3078 "CMDgram.cpp"
    break;

  case 67: /* if_stmt: rwIF '(' expr ')' stmt_block rwELSE stmt_block  */
#line 433 "CMDgram.y"
      { (yyval.stmt) = IfStmtNode::alloc((yyvsp[-6].i).lineNumber, (yyvsp[-4].expr), (yyvsp[-2].stmt), (yyvsp[0].stmt), false); }
#line 3084 "CMDgram.cpp"
    break;

  case 68: /* while_stmt: rwWHILE '(' expr ')' stmt_block  */
#line 438 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-4].i).lineNumber, nil, (yyvsp[-2].expr), nil, (yyvsp[0].stmt), false); }
#line 3090 "CMDgram.cpp"
    break;

  case 69: /* while_stmt: rwDO stmt_block rwWHILE '(' expr ')'  */
#line 440 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-3].i).lineNumber, nil, (yyvsp[-1].expr), nil, (yyvsp[-4].stmt), true); }
#line 3096 "CMDgram.cpp"
    break;

  case 70: /* for_stmt: rwFOR '(' expr ';' expr ';' expr ')' stmt_block  */
#line 445 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-8].i).lineNumber, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 3102 "CMDgram.cpp"
    break;

  case 71: /* for_stmt: rwFOR '(' expr ';' expr ';' ')' stmt_block  */
#line 447 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].expr), NULL, (yyvsp[0].stmt), false); }
#line 3108 "CMDgram.cpp"
    break;

  case 72: /* for_stmt: rwFOR '(' expr ';' ';' expr ')' stmt_block  */
#line 449 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].expr), NULL, (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 3114 "CMDgram.cpp"
    break;

  case 73: /* for_stmt: rwFOR '(' expr ';' ';' ')' stmt_block  */
#line 451 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-6].i).lineNumber, (yyvsp[-4].expr), NULL, NULL, (yyvsp[0].stmt), false); }
#line 3120 "CMDgram.cpp"
    break;

  case 74: /* for_stmt: rwFOR '(' ';' expr ';' expr ')' stmt_block  */
#line 453 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-7].i).lineNumber, NULL, (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 3126 "CMDgram.cpp"
    break;

  case 75: /* for_stmt: rwFOR '(' ';' expr ';' ')' stmt_block  */
#line 455 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-6].i).lineNumber, NULL, (yyvsp[-3].expr), NULL, (yyvsp[0].stmt), false); }
#line 3132 "CMDgram.cpp"
    break;

  case 76: /* for_stmt: rwFOR '(' ';' ';' expr ')' stmt_block  */
#line 457 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-6].i).lineNumber, NULL, NULL, (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 3138 "CMDgram.cpp"
    break;

  case 77: /* for_stmt: rwFOR '(' ';' ';' ')' stmt_block  */
#line 459 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-5].i).lineNumber, NULL, NULL, NULL, (yyvsp[0].stmt), false); }
#line 3144 "CMDgram.cpp"
    break;

  case 78: /* for_stmt: rwFOR '(' VAR rwIN expr opDOTDOT expr ')' stmt_block  */
#line 463 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-8].i).lineNumber, (yyvsp[-6].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 2 ); }
#line 3150 "CMDgram.cpp"
    break;

  case 79: /* for_stmt: rwFOR '(' VAR rwIN rwRANGE expr opDOTDOT expr ')' stmt_block  */
#line 466 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-9].i).lineNumber, (yyvsp[-7].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 102 ); }
#line 3156 "CMDgram.cpp"
    break;

  case 80: /* for_stmt: rwFOR '(' VAR rwIN expr opDOTDOT expr rwSTEP expr ')' stmt_block  */
#line 469 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-10].i).lineNumber, (yyvsp[-8].s).value, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 3 ); }
#line 3162 "CMDgram.cpp"
    break;

  case 81: /* for_stmt: rwFOR '(' VAR rwIN rwRANGE expr opDOTDOT expr rwSTEP expr ')' stmt_block  */
#line 472 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-11].i).lineNumber, (yyvsp[-9].s).value, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 103 ); }
#line 3168 "CMDgram.cpp"
    break;

  case 82: /* for_stmt: rwFOR '(' VAR rwIN rwRANGE expr ')' stmt_block  */
#line 475 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].s).value, (yyvsp[-2].expr), NULL, NULL, (yyvsp[0].stmt), 104 ); }
#line 3174 "CMDgram.cpp"
    break;

  case 83: /* foreach_stmt: rwFOREACH '(' VAR rwIN expr ')' stmt_block  */
#line 486 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-4].s).value, (yyvsp[-2].expr), NULL,NULL, (yyvsp[0].stmt), 0 ); }
#line 3180 "CMDgram.cpp"
    break;

  case 84: /* foreach_stmt: rwFOREACHSTR '(' VAR rwIN expr ')' stmt_block  */
#line 489 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-4].s).value, (yyvsp[-2].expr), NULL,NULL, (yyvsp[0].stmt), 1 ); }
#line 3186 "CMDgram.cpp"
    break;

  case 85: /* foreach_stmt: rwFOREACH '(' VAR rwIN expr opDOTDOT expr ')' stmt_block  */
#line 492 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-8].i).lineNumber, (yyvsp[-6].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 2 ); }
#line 3192 "CMDgram.cpp"
    break;

  case 86: /* foreach_stmt: rwFOREACH '(' VAR rwIN rwRANGE expr opDOTDOT expr ')' stmt_block  */
#line 495 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-9].i).lineNumber, (yyvsp[-7].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 102 ); }
#line 3198 "CMDgram.cpp"
    break;

  case 87: /* foreach_stmt: rwFOREACH '(' VAR rwIN expr opDOTDOT expr rwSTEP expr ')' stmt_block  */
#line 498 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-10].i).lineNumber, (yyvsp[-8].s).value, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 3 ); }
#line 3204 "CMDgram.cpp"
    break;

  case 88: /* foreach_stmt: rwFOREACH '(' VAR rwIN rwRANGE expr opDOTDOT expr rwSTEP expr ')' stmt_block  */
#line 501 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-11].i).lineNumber, (yyvsp[-9].s).value, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 103 ); }
#line 3210 "CMDgram.cpp"
    break;

  case 89: /* foreach_stmt: rwFOREACH '(' VAR rwIN rwRANGE expr ')' stmt_block  */
#line 504 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].s).value, (yyvsp[-2].expr), NULL, NULL, (yyvsp[0].stmt), 104 ); }
#line 3216 "CMDgram.cpp"
    break;

  case 90: /* expression_stmt: stmt_expr  */
#line 509 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].expr); }
#line 3222 "CMDgram.cpp"
    break;

  case 91: /* expr: stmt_expr  */
#line 514 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3228 "CMDgram.cpp"
    break;

  case 92: /* expr: '(' expr ')'  */
#line 516 "CMDgram.y"
      { (yyval.expr) = (yyvsp[-1].expr); }
#line 3234 "CMDgram.cpp"
    break;

  case 93: /* expr: expr '^' expr  */
#line 518 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3240 "CMDgram.cpp"
    break;

  case 94: /* expr: expr '%' expr  */
#line 520 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3246 "CMDgram.cpp"
    break;

  case 95: /* expr: expr '&' expr  */
#line 522 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3252 "CMDgram.cpp"
    break;

  case 96: /* expr: expr '|' expr  */
#line 524 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3258 "CMDgram.cpp"
    break;

  case 97: /* expr: expr '+' expr  */
#line 526 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3264 "CMDgram.cpp"
    break;

  case 98: /* expr: expr '-' expr  */
#line 528 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3270 "CMDgram.cpp"
    break;

  case 99: /* expr: expr '*' expr  */
#line 530 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3276 "CMDgram.cpp"
    break;

  case 100: /* expr: expr '/' expr  */
#line 532 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3282 "CMDgram.cpp"
    break;

  case 101: /* expr: '-' expr  */
#line 534 "CMDgram.y"
      { (yyval.expr) = FloatUnaryExprNode::alloc( (yyvsp[-1].i).lineNumber, (yyvsp[-1].i).value, (yyvsp[0].expr)); }
#line 3288 "CMDgram.cpp"
    break;

  case 102: /* expr: '*' expr  */
#line 536 "CMDgram.y"
      { (yyval.expr) = TTagDerefNode::alloc( (yyvsp[-1].i).lineNumber, (yyvsp[0].expr) ); }
#line 3294 "CMDgram.cpp"
    break;

  case 103: /* expr: TTAG  */
#line 538 "CMDgram.y"
      { (yyval.expr) = TTagExprNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value ); }
#line 3300 "CMDgram.cpp"
    break;

  case 104: /* expr: expr '?' expr ':' expr  */
#line 540 "CMDgram.y"
      { (yyval.expr) = ConditionalExprNode::alloc( (yyvsp[-4].expr)->dbgLineNumber, (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3306 "CMDgram.cpp"
    break;

  case 105: /* expr: expr '<' expr  */
#line 542 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3312 "CMDgram.cpp"
    break;

  case 106: /* expr: expr '>' expr  */
#line 544 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3318 "CMDgram.cpp"
    break;

  case 107: /* expr: expr opGE expr  */
#line 546 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3324 "CMDgram.cpp"
    break;

  case 108: /* expr: expr opLE expr  */
#line 548 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3330 "CMDgram.cpp"
    break;

  case 109: /* expr: expr opEQ expr  */
#line 550 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3336 "CMDgram.cpp"
    break;

  case 110: /* expr: expr opNE expr  */
#line 552 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3342 "CMDgram.cpp"
    break;

  case 111: /* expr: expr opOR expr  */
#line 554 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3348 "CMDgram.cpp"
    break;

  case 112: /* expr: expr opSHL expr  */
#line 556 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3354 "CMDgram.cpp"
    break;

  case 113: /* expr: expr opSHR expr  */
#line 558 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3360 "CMDgram.cpp"
    break;

  case 114: /* expr: expr opAND expr  */
#line 560 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3366 "CMDgram.cpp"
    break;

  case 115: /* expr: expr opSTREQ expr  */
#line 562 "CMDgram.y"
      { (yyval.expr) = StreqExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr), true); }
#line 3372 "CMDgram.cpp"
    break;

  case 116: /* expr: expr opSTRNE expr  */
#line 564 "CMDgram.y"
      { (yyval.expr) = StreqExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr), false); }
#line 3378 "CMDgram.cpp"
    break;

  case 117: /* expr: expr '@' expr  */
#line 572 "CMDgram.y"
      { (yyval.expr) = StrcatExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].i).value); }
#line 3384 "CMDgram.cpp"
    break;

  case 118: /* expr: '!' expr  */
#line 574 "CMDgram.y"
      { (yyval.expr) = IntUnaryExprNode::alloc((yyvsp[-1].i).lineNumber, (yyvsp[-1].i).value, (yyvsp[0].expr)); }
#line 3390 "CMDgram.cpp"
    break;

  case 119: /* expr: '~' expr  */
#line 576 "CMDgram.y"
      { (yyval.expr) = IntUnaryExprNode::alloc((yyvsp[-1].i).lineNumber, (yyvsp[-1].i).value, (yyvsp[0].expr)); }
#line 3396 "CMDgram.cpp"
    break;

  case 120: /* expr: TAGATOM  */
#line 578 "CMDgram.y"
      { (yyval.expr) = StrConstNode::alloc( (yyvsp[0].str).lineNumber, (yyvsp[0].str).value, true); }
#line 3402 "CMDgram.cpp"
    break;

  case 121: /* expr: FLTCONST  */
#line 580 "CMDgram.y"
      { (yyval.expr) = FloatNode::alloc( (yyvsp[0].f).lineNumber, (yyvsp[0].f).value ); }
#line 3408 "CMDgram.cpp"
    break;

  case 122: /* expr: INTCONST  */
#line 582 "CMDgram.y"
      { (yyval.expr) = IntNode::alloc( (yyvsp[0].i).lineNumber, (yyvsp[0].i).value ); }
#line 3414 "CMDgram.cpp"
    break;

  case 123: /* expr: rwBREAK  */
#line 584 "CMDgram.y"
      { (yyval.expr) = ConstantNode::alloc( (yyvsp[0].i).lineNumber, StringTable->insert("break")); }
#line 3420 "CMDgram.cpp"
    break;

  case 124: /* expr: slot_acc  */
#line 586 "CMDgram.y"
      { (yyval.expr) = SlotAccessNode::alloc( (yyvsp[0].slot).lineNumber, (yyvsp[0].slot).object, (yyvsp[0].slot).array, (yyvsp[0].slot).slotName ); }
#line 3426 "CMDgram.cpp"
    break;

  case 125: /* expr: intslot_acc  */
#line 588 "CMDgram.y"
      { (yyval.expr) = InternalSlotAccessNode::alloc( (yyvsp[0].intslot).lineNumber, (yyvsp[0].intslot).object, (yyvsp[0].intslot).slotExpr, (yyvsp[0].intslot).recurse); }
#line 3432 "CMDgram.cpp"
    break;

  case 126: /* expr: IDENT  */
#line 590 "CMDgram.y"
      { (yyval.expr) = ConstantNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value ); }
#line 3438 "CMDgram.cpp"
    break;

  case 127: /* expr: STRATOM  */
#line 592 "CMDgram.y"
      { (yyval.expr) = StrConstNode::alloc( (yyvsp[0].str).lineNumber, (yyvsp[0].str).value, false); }
#line 3444 "CMDgram.cpp"
    break;

  case 128: /* expr: VAR  */
#line 594 "CMDgram.y"
      { (yyval.expr) = (ExprNode*)VarNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value, NULL); }
#line 3450 "CMDgram.cpp"
    break;

  case 129: /* expr: VAR '[' aidx_expr ']'  */
#line 596 "CMDgram.y"
      { (yyval.expr) = (ExprNode*)VarNode::alloc( (yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[-1].expr) ); }
#line 3456 "CMDgram.cpp"
    break;

  case 130: /* slot_acc: expr '.' IDENT  */
#line 602 "CMDgram.y"
      { (yyval.slot).lineNumber = (yyvsp[-2].expr)->dbgLineNumber; (yyval.slot).object = (yyvsp[-2].expr); (yyval.slot).slotName = (yyvsp[0].s).value; (yyval.slot).array = NULL; }
#line 3462 "CMDgram.cpp"
    break;

  case 131: /* slot_acc: expr '.' IDENT '[' aidx_expr ']'  */
#line 604 "CMDgram.y"
      { (yyval.slot).lineNumber = (yyvsp[-5].expr)->dbgLineNumber; (yyval.slot).object = (yyvsp[-5].expr); (yyval.slot).slotName = (yyvsp[-3].s).value; (yyval.slot).array = (yyvsp[-1].expr); }
#line 3468 "CMDgram.cpp"
    break;

  case 132: /* intslot_acc: expr opINTNAME class_name_expr  */
#line 609 "CMDgram.y"
      { (yyval.intslot).lineNumber = (yyvsp[-2].expr)->dbgLineNumber; (yyval.intslot).object = (yyvsp[-2].expr); (yyval.intslot).slotExpr = (yyvsp[0].expr); (yyval.intslot).recurse = false; }
#line 3474 "CMDgram.cpp"
    break;

  case 133: /* intslot_acc: expr opINTNAMER class_name_expr  */
#line 611 "CMDgram.y"
      { (yyval.intslot).lineNumber = (yyvsp[-2].expr)->dbgLineNumber; (yyval.intslot).object = (yyvsp[-2].expr); (yyval.intslot).slotExpr = (yyvsp[0].expr); (yyval.intslot).recurse = true; }
#line 3480 "CMDgram.cpp"
    break;

  case 134: /* class_name_expr: IDENT  */
#line 616 "CMDgram.y"
      { (yyval.expr) = ConstantNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value ); }
#line 3486 "CMDgram.cpp"
    break;

  case 135: /* class_name_expr: '(' expr ')'  */
#line 618 "CMDgram.y"
      { (yyval.expr) = (yyvsp[-1].expr); }
#line 3492 "CMDgram.cpp"
    break;

  case 136: /* assign_op_struct: opPLUSPLUS  */
#line 623 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[0].i).lineNumber; (yyval.asn).token = opPLUSPLUS; (yyval.asn).expr = FloatNode::alloc( (yyvsp[0].i).lineNumber, 1 ); }
#line 3498 "CMDgram.cpp"
    break;

  case 137: /* assign_op_struct: opMINUSMINUS  */
#line 625 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[0].i).lineNumber; (yyval.asn).token = opMINUSMINUS; (yyval.asn).expr = FloatNode::alloc( (yyvsp[0].i).lineNumber, 1 ); }
#line 3504 "CMDgram.cpp"
    break;

  case 138: /* assign_op_struct: opPLASN expr  */
#line 627 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '+'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3510 "CMDgram.cpp"
    break;

  case 139: /* assign_op_struct: opMIASN expr  */
#line 629 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '-'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3516 "CMDgram.cpp"
    break;

  case 140: /* assign_op_struct: opMLASN expr  */
#line 631 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '*'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3522 "CMDgram.cpp"
    break;

  case 141: /* assign_op_struct: opDVASN expr  */
#line 633 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '/'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3528 "CMDgram.cpp"
    break;

  case 142: /* assign_op_struct: opMODASN expr  */
#line 635 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '%'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3534 "CMDgram.cpp"
    break;

  case 143: /* assign_op_struct: opANDASN expr  */
#line 637 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '&'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3540 "CMDgram.cpp"
    break;

  case 144: /* assign_op_struct: opXORASN expr  */
#line 639 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '^'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3546 "CMDgram.cpp"
    break;

  case 145: /* assign_op_struct: opORASN expr  */
#line 641 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '|'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3552 "CMDgram.cpp"
    break;

  case 146: /* assign_op_struct: opSLASN expr  */
#line 643 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = opSHL; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3558 "CMDgram.cpp"
    break;

  case 147: /* assign_op_struct: opSRASN expr  */
#line 645 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = opSHR; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3564 "CMDgram.cpp"
    break;

  case 148: /* stmt_expr: funcall_expr  */
#line 651 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3570 "CMDgram.cpp"
    break;

  case 149: /* stmt_expr: assert_expr  */
#line 653 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3576 "CMDgram.cpp"
    break;

  case 150: /* stmt_expr: inline_command_expr  */
#line 655 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3582 "CMDgram.cpp"
    break;

  case 151: /* stmt_expr: object_decl  */
#line 657 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].od); }
#line 3588 "CMDgram.cpp"
    break;

  case 152: /* stmt_expr: VAR '=' expr  */
#line 659 "CMDgram.y"
      { (yyval.expr) = AssignExprNode::alloc( (yyvsp[-2].s).lineNumber, (yyvsp[-2].s).value, NULL, (yyvsp[0].expr)); }
#line 3594 "CMDgram.cpp"
    break;

  case 153: /* stmt_expr: VAR '=' '{' expr_list '}'  */
#line 663 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-4].s).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-1].expr);
         (yyval.expr) = AssignExprNode::alloc( (yyvsp[-4].s).lineNumber, (yyvsp[-4].s).value, NULL, vecNode);
      }
#line 3604 "CMDgram.cpp"
    break;

  case 154: /* stmt_expr: VAR '[' aidx_expr ']' '=' expr  */
#line 671 "CMDgram.y"
      { (yyval.expr) = AssignExprNode::alloc( (yyvsp[-5].s).lineNumber, (yyvsp[-5].s).value, (yyvsp[-3].expr), (yyvsp[0].expr)); }
#line 3610 "CMDgram.cpp"
    break;

  case 155: /* stmt_expr: VAR '[' aidx_expr ']' '=' '{' expr_list '}'  */
#line 675 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-7].s).lineNumber);
          vecNode->argList = (ExprNode*)(yyvsp[-1].expr);
         (yyval.expr) = AssignExprNode::alloc( (yyvsp[-7].s).lineNumber, (yyvsp[-7].s).value, (yyvsp[-5].expr), vecNode);
      }
#line 3620 "CMDgram.cpp"
    break;

  case 156: /* stmt_expr: VAR assign_op_struct  */
#line 683 "CMDgram.y"
      { (yyval.expr) = AssignOpExprNode::alloc( (yyvsp[-1].s).lineNumber, (yyvsp[-1].s).value, NULL, (yyvsp[0].asn).expr, (yyvsp[0].asn).token); }
#line 3626 "CMDgram.cpp"
    break;

  case 157: /* stmt_expr: VAR '[' aidx_expr ']' assign_op_struct  */
#line 685 "CMDgram.y"
      { (yyval.expr) = AssignOpExprNode::alloc( (yyvsp[-4].s).lineNumber, (yyvsp[-4].s).value, (yyvsp[-2].expr), (yyvsp[0].asn).expr, (yyvsp[0].asn).token); }
#line 3632 "CMDgram.cpp"
    break;

  case 158: /* stmt_expr: slot_acc assign_op_struct  */
#line 687 "CMDgram.y"
      { (yyval.expr) = SlotAssignOpNode::alloc( (yyvsp[-1].slot).lineNumber, (yyvsp[-1].slot).object, (yyvsp[-1].slot).slotName, (yyvsp[-1].slot).array, (yyvsp[0].asn).token, (yyvsp[0].asn).expr); }
#line 3638 "CMDgram.cpp"
    break;

  case 159: /* stmt_expr: slot_acc '=' expr  */
#line 689 "CMDgram.y"
      { (yyval.expr) = SlotAssignNode::alloc( (yyvsp[-2].slot).lineNumber, (yyvsp[-2].slot).object, (yyvsp[-2].slot).array, (yyvsp[-2].slot).slotName, (yyvsp[0].expr)); }
#line 3644 "CMDgram.cpp"
    break;

  case 160: /* stmt_expr: slot_acc '=' '{' expr_list '}'  */
#line 691 "CMDgram.y"
      { (yyval.expr) = SlotAssignNode::alloc( (yyvsp[-4].slot).lineNumber, (yyvsp[-4].slot).object, (yyvsp[-4].slot).array, (yyvsp[-4].slot).slotName, (yyvsp[-1].expr)); }
#line 3650 "CMDgram.cpp"
    break;

  case 161: /* funcall_expr: IDENT '(' func_arg_list_decl ')'  */
#line 723 "CMDgram.y"
      { (yyval.expr) = FuncCallExprNode::alloc( (yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, NULL, (yyvsp[-1].expr), false); }
#line 3656 "CMDgram.cpp"
    break;

  case 162: /* funcall_expr: IDENT opCOLONCOLON IDENT '(' func_arg_list_decl ')'  */
#line 726 "CMDgram.y"
      { (yyval.expr) = FuncCallExprNode::alloc( (yyvsp[-5].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[-5].s).value, (yyvsp[-1].expr), false); }
#line 3662 "CMDgram.cpp"
    break;

  case 163: /* funcall_expr: expr '.' IDENT '(' func_arg_list_decl ')'  */
#line 729 "CMDgram.y"
      { (yyvsp[-5].expr)->append((yyvsp[-1].expr)); (yyval.expr) = FuncCallExprNode::alloc( (yyvsp[-5].expr)->dbgLineNumber, (yyvsp[-3].s).value, NULL, (yyvsp[-5].expr), true); }
#line 3668 "CMDgram.cpp"
    break;

  case 164: /* func_arg_item: expr  */
#line 735 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3674 "CMDgram.cpp"
    break;

  case 165: /* func_arg_item: '{' expr_list '}'  */
#line 737 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-2].i).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-1].expr);
//          for (ExprNode* expr = (ExprNode*)$2; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.expr) = vecNode;
      }
#line 3687 "CMDgram.cpp"
    break;

  case 166: /* func_arg_list: func_arg_item  */
#line 749 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3693 "CMDgram.cpp"
    break;

  case 167: /* func_arg_list: func_arg_list ',' func_arg_item  */
#line 751 "CMDgram.y"
      { ((yyvsp[-2].expr))->append((yyvsp[0].expr)); (yyval.expr) = (yyvsp[-2].expr); }
#line 3699 "CMDgram.cpp"
    break;

  case 168: /* func_arg_list_decl: %empty  */
#line 756 "CMDgram.y"
      { (yyval.expr) = NULL; }
#line 3705 "CMDgram.cpp"
    break;

  case 169: /* func_arg_list_decl: func_arg_list  */
#line 758 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3711 "CMDgram.cpp"
    break;

  case 170: /* assert_expr: rwASSERT '(' expr ')'  */
#line 779 "CMDgram.y"
      { (yyval.expr) = AssertCallExprNode::alloc( (yyvsp[-3].i).lineNumber, (yyvsp[-1].expr), NULL ); }
#line 3717 "CMDgram.cpp"
    break;

  case 171: /* assert_expr: rwASSERT '(' expr ',' STRATOM ')'  */
#line 781 "CMDgram.y"
      { (yyval.expr) = AssertCallExprNode::alloc( (yyvsp[-5].i).lineNumber, (yyvsp[-3].expr), (yyvsp[-1].str).value ); }
#line 3723 "CMDgram.cpp"
    break;

  case 172: /* inline_command_expr: rwPRINT '(' expr_list ')'  */
#line 788 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::PRINT, (yyvsp[-1].expr)); }
#line 3729 "CMDgram.cpp"
    break;

  case 173: /* inline_command_expr: rwRANDOMF '(' ')'  */
#line 790 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-2].i).lineNumber, CommandStmtNode::RANDOMF, NULL); }
#line 3735 "CMDgram.cpp"
    break;

  case 174: /* inline_command_expr: rwRANDOMF '(' expr_list ')'  */
#line 792 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::RANDOMF, (yyvsp[-1].expr)); }
#line 3741 "CMDgram.cpp"
    break;

  case 175: /* inline_command_expr: rwFLOOR '(' expr_list ')'  */
#line 794 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::FLOOR, (yyvsp[-1].expr)); }
#line 3747 "CMDgram.cpp"
    break;

  case 176: /* inline_command_expr: rwCEIL '(' expr_list ')'  */
#line 796 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::CEIL, (yyvsp[-1].expr)); }
#line 3753 "CMDgram.cpp"
    break;

  case 177: /* inline_command_expr: rwFABS '(' expr_list ')'  */
#line 798 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::FABS, (yyvsp[-1].expr)); }
#line 3759 "CMDgram.cpp"
    break;

  case 178: /* inline_command_expr: rwSIN '(' expr_list ')'  */
#line 800 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::SIN, (yyvsp[-1].expr)); }
#line 3765 "CMDgram.cpp"
    break;

  case 179: /* inline_command_expr: rwCOS '(' expr_list ')'  */
#line 802 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::COS, (yyvsp[-1].expr)); }
#line 3771 "CMDgram.cpp"
    break;

  case 180: /* inline_command_expr: rwATAN '(' expr_list ')'  */
#line 804 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::ATAN, (yyvsp[-1].expr)); }
#line 3777 "CMDgram.cpp"
    break;

  case 181: /* inline_command_expr: rwTANH '(' expr_list ')'  */
#line 806 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::TANH, (yyvsp[-1].expr)); }
#line 3783 "CMDgram.cpp"
    break;

  case 182: /* inline_command_expr: rwSQRT '(' expr_list ')'  */
#line 808 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::SQRT, (yyvsp[-1].expr)); }
#line 3789 "CMDgram.cpp"
    break;

  case 183: /* inline_command_expr: rwISZERO '(' expr_list ')'  */
#line 810 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::ISZERO, (yyvsp[-1].expr)); }
#line 3795 "CMDgram.cpp"
    break;

  case 184: /* inline_command_expr: rwFMOD '(' expr_list ')'  */
#line 812 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::FMOD, (yyvsp[-1].expr)); }
#line 3801 "CMDgram.cpp"
    break;

  case 185: /* inline_command_expr: rwMIN '(' expr_list ')'  */
#line 814 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::MIN, (yyvsp[-1].expr)); }
#line 3807 "CMDgram.cpp"
    break;

  case 186: /* inline_command_expr: rwMAX '(' expr_list ')'  */
#line 816 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::MAX, (yyvsp[-1].expr)); }
#line 3813 "CMDgram.cpp"
    break;

  case 187: /* inline_command_expr: rwATAN2 '(' expr_list ')'  */
#line 818 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::ATAN2, (yyvsp[-1].expr)); }
#line 3819 "CMDgram.cpp"
    break;

  case 188: /* inline_command_expr: rwPOW '(' expr_list ')'  */
#line 820 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::POW, (yyvsp[-1].expr)); }
#line 3825 "CMDgram.cpp"
    break;

  case 189: /* inline_command_expr: rwCLAMPF '(' expr_list ')'  */
#line 822 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::CLAMPF, (yyvsp[-1].expr)); }
#line 3831 "CMDgram.cpp"
    break;

  case 190: /* inline_command_expr: rwLERP '(' expr_list ')'  */
#line 824 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::LERP, (yyvsp[-1].expr)); }
#line 3837 "CMDgram.cpp"
    break;

  case 191: /* inline_command_expr: rwSMOOTHSTEP '(' expr_list ')'  */
#line 826 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::SMOOTHSTEP, (yyvsp[-1].expr)); }
#line 3843 "CMDgram.cpp"
    break;

  case 192: /* expr_list: expr  */
#line 838 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3849 "CMDgram.cpp"
    break;

  case 193: /* expr_list: expr_list ',' expr  */
#line 840 "CMDgram.y"
      { ((yyvsp[-2].expr))->append((yyvsp[0].expr)); (yyval.expr) = (yyvsp[-2].expr); }
#line 3855 "CMDgram.cpp"
    break;

  case 194: /* slot_assign_list_opt: %empty  */
#line 845 "CMDgram.y"
      { (yyval.slist) = NULL; }
#line 3861 "CMDgram.cpp"
    break;

  case 195: /* slot_assign_list_opt: slot_assign_list  */
#line 847 "CMDgram.y"
      { (yyval.slist) = (yyvsp[0].slist); }
#line 3867 "CMDgram.cpp"
    break;

  case 196: /* slot_assign_list: slot_assign  */
#line 852 "CMDgram.y"
      { (yyval.slist) = (yyvsp[0].slist); }
#line 3873 "CMDgram.cpp"
    break;

  case 197: /* slot_assign_list: slot_assign_list slot_assign  */
#line 854 "CMDgram.y"
      { (yyvsp[-1].slist)->append((yyvsp[0].slist)); (yyval.slist) = (yyvsp[-1].slist); }
#line 3879 "CMDgram.cpp"
    break;

  case 198: /* slot_assign: IDENT '=' expr ';'  */
#line 860 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-3].s).lineNumber, NULL, NULL, (yyvsp[-3].s).value, (yyvsp[-1].expr)); }
#line 3885 "CMDgram.cpp"
    break;

  case 199: /* slot_assign: IDENT '=' '{' expr_list '}' ';'  */
#line 864 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-5].s).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
//          for (ExprNode* expr = (ExprNode*)$4; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-5].s).lineNumber, NULL, NULL, (yyvsp[-5].s).value, vecNode);
      }
#line 3898 "CMDgram.cpp"
    break;

  case 200: /* slot_assign: TYPEIDENT IDENT '=' expr ';'  */
#line 875 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-4].i).lineNumber, NULL, NULL, (yyvsp[-3].s).value, (yyvsp[-1].expr), (yyvsp[-4].i).value); }
#line 3904 "CMDgram.cpp"
    break;

  case 201: /* slot_assign: TYPEIDENT IDENT '=' '{' expr_list '}' ';'  */
#line 879 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-6].i).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
//          for (ExprNode* expr = (ExprNode*)$5; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-6].i).lineNumber, NULL, NULL, (yyvsp[-5].s).value, vecNode, (yyvsp[-6].i).value);
      }
#line 3917 "CMDgram.cpp"
    break;

  case 202: /* slot_assign: rwDATABLOCK '=' expr ';'  */
#line 890 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-3].i).lineNumber, NULL, NULL, StringTable->insert("datablock"), (yyvsp[-1].expr)); }
#line 3923 "CMDgram.cpp"
    break;

  case 203: /* slot_assign: IDENT '[' aidx_expr ']' '=' expr ';'  */
#line 892 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-6].s).lineNumber, NULL, (yyvsp[-4].expr), (yyvsp[-6].s).value, (yyvsp[-1].expr)); }
#line 3929 "CMDgram.cpp"
    break;

  case 204: /* slot_assign: IDENT '[' aidx_expr ']' '=' '{' expr_list '}' ';'  */
#line 896 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-8].s).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
//          for (ExprNode* expr = (ExprNode*)$7; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-8].s).lineNumber, NULL, (yyvsp[-6].expr), (yyvsp[-8].s).value, vecNode);
      }
#line 3942 "CMDgram.cpp"
    break;

  case 205: /* slot_assign: TYPEIDENT IDENT '[' aidx_expr ']' '=' expr ';'  */
#line 907 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-7].i).lineNumber, NULL, (yyvsp[-4].expr), (yyvsp[-6].s).value, (yyvsp[-1].expr), (yyvsp[-7].i).value); }
#line 3948 "CMDgram.cpp"
    break;

  case 206: /* aidx_expr: expr  */
#line 930 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3954 "CMDgram.cpp"
    break;

  case 207: /* aidx_expr: aidx_expr ',' expr  */
#line 932 "CMDgram.y"
      { (yyval.expr) = CommaCatExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3960 "CMDgram.cpp"
    break;


#line 3964 "CMDgram.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        if (yyreport_syntax_error (&yyctx) == 2)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 935 "CMDgram.y"


int
yyreport_syntax_error(const yypcontext_t *ctx)
{
   int ret = 0;
   String output;
   const YYLTYPE *loc = yypcontext_location(ctx);
   output += "syntax error: ";

   yysymbol_kind_t nxt = yypcontext_token(ctx);
   if (nxt != YYSYMBOL_YYEMPTY)
      output += String::ToString("unexpected: %s at column: %d",
                                 yysymbol_name(nxt), loc->first_column);

   enum { TOKENMAX = 10 };
   yysymbol_kind_t expected[TOKENMAX];

   int exp = yypcontext_expected_tokens(ctx, expected, TOKENMAX);
   if (exp < 0)
   {
      ret = exp;
   }
   else
   {
      for (int i = 0; i < exp; ++i)
         output += String::ToString("%s %s",
                                    i == 0 ? ": expected" : "or",
                                    yysymbol_name(expected[i]));
   }

   if (lines.size() > 0)
   {
      output += "\n";
      for (int i = 0; i < lines.size(); i++)
      {
         int line = lines.size() - i;
         output += String::ToString("%5d | ", loc->first_line - (line - 1))
                 + lines[i] + "\n";
      }
      output += String::ToString("%5s | %*s", "", loc->first_column, "^");
   }

   yyerror("%s", output.c_str());
   return ret;
}
