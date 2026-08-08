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
#line 4 "CMDgram.y"


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

#line 52 "CMDgram.y"

   /* Reserved word token definitions */
#line 71 "CMDgram.y"

   /* Constant and identifier token definitions */
#line 86 "CMDgram.y"

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
  YYSYMBOL_92_ = 92,                       /* '['  */
  YYSYMBOL_93_ = 93,                       /* '?'  */
  YYSYMBOL_UNARY = 94,                     /* UNARY  */
  YYSYMBOL_95_ = 95,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 96,                  /* $accept  */
  YYSYMBOL_start = 97,                     /* start  */
  YYSYMBOL_decl_list = 98,                 /* decl_list  */
  YYSYMBOL_decl = 99,                      /* decl  */
  YYSYMBOL_package_decl = 100,             /* package_decl  */
  YYSYMBOL_fn_decl_list = 101,             /* fn_decl_list  */
  YYSYMBOL_statement_list = 102,           /* statement_list  */
  YYSYMBOL_stmt = 103,                     /* stmt  */
  YYSYMBOL_fn_decl_stmt = 104,             /* fn_decl_stmt  */
  YYSYMBOL_var_list_decl = 105,            /* var_list_decl  */
  YYSYMBOL_var_list = 106,                 /* var_list  */
  YYSYMBOL_param = 107,                    /* param  */
  YYSYMBOL_datablock_decl = 108,           /* datablock_decl  */
  YYSYMBOL_object_decl = 109,              /* object_decl  */
  YYSYMBOL_parent_block = 110,             /* parent_block  */
  YYSYMBOL_object_name = 111,              /* object_name  */
  YYSYMBOL_object_args = 112,              /* object_args  */
  YYSYMBOL_object_declare_block = 113,     /* object_declare_block  */
  YYSYMBOL_object_decl_list = 114,         /* object_decl_list  */
  YYSYMBOL_stmt_block = 115,               /* stmt_block  */
  YYSYMBOL_switch_stmt = 116,              /* switch_stmt  */
  YYSYMBOL_case_block = 117,               /* case_block  */
  YYSYMBOL_case_expr = 118,                /* case_expr  */
  YYSYMBOL_if_stmt = 119,                  /* if_stmt  */
  YYSYMBOL_while_stmt = 120,               /* while_stmt  */
  YYSYMBOL_for_stmt = 121,                 /* for_stmt  */
  YYSYMBOL_foreach_stmt = 122,             /* foreach_stmt  */
  YYSYMBOL_expression_stmt = 123,          /* expression_stmt  */
  YYSYMBOL_expr = 124,                     /* expr  */
  YYSYMBOL_slot_acc = 125,                 /* slot_acc  */
  YYSYMBOL_intslot_acc = 126,              /* intslot_acc  */
  YYSYMBOL_class_name_expr = 127,          /* class_name_expr  */
  YYSYMBOL_assign_op_struct = 128,         /* assign_op_struct  */
  YYSYMBOL_stmt_expr = 129,                /* stmt_expr  */
  YYSYMBOL_funcall_expr = 130,             /* funcall_expr  */
  YYSYMBOL_func_arg_item = 131,            /* func_arg_item  */
  YYSYMBOL_func_arg_list = 132,            /* func_arg_list  */
  YYSYMBOL_func_arg_list_decl = 133,       /* func_arg_list_decl  */
  YYSYMBOL_assert_expr = 134,              /* assert_expr  */
  YYSYMBOL_expr_list = 135,                /* expr_list  */
  YYSYMBOL_slot_assign_list_opt = 136,     /* slot_assign_list_opt  */
  YYSYMBOL_slot_assign_list = 137,         /* slot_assign_list  */
  YYSYMBOL_slot_assign = 138,              /* slot_assign  */
  YYSYMBOL_aidx_expr = 139                 /* aidx_expr  */
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
#define YYLAST   3314

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  178
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  425

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   325


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
      46,    48,    47,    93,    63,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    92,     2,    95,    60,     2,     2,     2,     2,     2,
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
      87,    88,    89,    90,    91,    94
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   204,   204,   210,   211,   216,   218,   220,   225,   230,
     232,   238,   239,   244,   245,   246,   247,   248,   249,   250,
     252,   254,   256,   259,   269,   271,   273,   275,   281,   284,
     290,   291,   296,   298,   315,   317,   319,   321,   326,   331,
     333,   335,   337,   339,   341,   347,   348,   354,   355,   361,
     362,   368,   369,   371,   373,   378,   380,   385,   387,   392,
     394,   402,   404,   406,   411,   413,   418,   420,   425,   427,
     432,   434,   436,   438,   440,   442,   444,   446,   457,   459,
     461,   463,   468,   473,   475,   477,   479,   481,   483,   485,
     487,   489,   491,   493,   495,   497,   499,   501,   503,   505,
     507,   509,   511,   513,   515,   517,   519,   521,   523,   531,
     533,   535,   537,   539,   541,   543,   545,   547,   549,   551,
     553,   555,   561,   563,   568,   570,   575,   577,   582,   584,
     586,   588,   590,   592,   594,   596,   598,   600,   602,   604,
     610,   612,   614,   616,   620,   631,   635,   646,   648,   650,
     652,   654,   686,   689,   692,   698,   700,   712,   714,   720,
     721,   742,   744,   756,   758,   764,   765,   770,   772,   778,
     782,   793,   797,   808,   810,   814,   825,   848,   850
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
  "rwRANGE", "'['", "'?'", "UNARY", "']'", "$accept", "start", "decl_list",
  "decl", "package_decl", "fn_decl_list", "statement_list", "stmt",
  "fn_decl_stmt", "var_list_decl", "var_list", "param", "datablock_decl",
  "object_decl", "parent_block", "object_name", "object_args",
  "object_declare_block", "object_decl_list", "stmt_block", "switch_stmt",
  "case_block", "case_expr", "if_stmt", "while_stmt", "for_stmt",
  "foreach_stmt", "expression_stmt", "expr", "slot_acc", "intslot_acc",
  "class_name_expr", "assign_op_struct", "stmt_expr", "funcall_expr",
  "func_arg_item", "func_arg_list", "func_arg_list_decl", "assert_expr",
  "expr_list", "slot_assign_list_opt", "slot_assign_list", "slot_assign",
  "aidx_expr", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-325)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-83)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -325,    29,   445,  -325,    -9,    52,    52,    21,    40,    50,
     184,    53,   710,    56,    73,    75,    52,    82,   100,   123,
     126,  -325,   120,   -32,   -22,  -325,  -325,  -325,  -325,  1417,
    1417,  1417,  1417,  1417,  -325,  -325,  -325,  -325,  -325,  -325,
    -325,  -325,  -325,  -325,  -325,   136,  2982,  3203,  -325,   137,
    -325,  -325,    22,  -325,  1417,   143,   144,  -325,  -325,  1417,
    -325,  -325,  -325,  1417,  1578,  -325,  1417,  -325,  -325,   191,
     229,   163,   173,   158,  1417,  1417,   154,  1417,  1417,   244,
    -325,  -325,  1417,  1417,  1417,  1417,  1417,  1417,  1417,  1417,
    1417,  1417,  1417,  -325,   937,   177,    69,    69,  1630,    69,
      69,  -325,  1417,  1417,  1417,  1417,  1417,  1417,   179,  1417,
    1417,  1417,  1417,  1417,    52,    52,  1417,  1417,  1417,  1417,
    1417,  1417,  1417,  1417,  1417,  1417,  1417,   977,  -325,   181,
     190,  1682,    18,  1417,  1734,  2982,    95,  -325,  1786,   768,
     176,  1017,  1838,   207,   208,  1417,  1890,  1942,   235,  1422,
    1474,  1417,  2982,  2982,  2982,  2982,  2982,  2982,  2982,  2982,
    2982,  2982,  2982,  2982,   -27,  1417,  2982,  -325,   188,   178,
     186,  -325,    55,    55,    69,    69,   265,   265,   -23,  3128,
    3184,    69,  3156,    87,  -325,  -325,   157,   157,   450,   450,
     265,   265,  3081,   514,    87,    87,  1994,  1417,  2982,   -28,
     193,   189,  -325,   195,  -325,  1417,   196,  2982,   196,   710,
    1417,   198,   710,  -325,  -325,  1417,  1057,  2046,  1097,   142,
    1417,  2098,   199,   200,    11,  -325,  -325,   217,  1417,  -325,
     106,  1417,  3235,   107,   937,  -325,   937,   937,  1417,  1417,
     112,  1417,   212,   203,   181,   181,   172,   239,   216,   216,
     268,  2982,  -325,  -325,  2150,   710,  2202,  1137,  1177,  2254,
    1417,  1526,  2306,   227,   270,   270,   237,  -325,   246,  2358,
    -325,  2982,  1217,  -325,  -325,  -325,   249,   250,   -19,  3034,
    -325,  2982,  1417,  -325,  -325,   257,   196,  -325,  1417,   258,
     259,   710,  -325,  -325,   710,   710,  2410,   710,  2462,  1257,
    2514,   710,  1417,   710,   240,  1417,   260,   261,  -325,  -325,
    -325,  1417,  2982,  -325,  -325,  -325,  2982,   811,   263,   216,
     276,   267,   274,  -325,  -325,  -325,   710,  -325,   710,   710,
    2566,  1417,  -325,  2618,  -325,   121,    46,  2982,  -325,  -325,
     114,  -325,  -325,   264,    77,    77,  -325,  -325,  -325,   710,
    2670,   710,   275,   -29,   299,   277,   121,  -325,  1417,  -325,
    -325,   854,   279,   281,   280,    27,    77,   287,  -325,   710,
    -325,  1417,  1297,  1417,   -26,   283,  -325,  2982,   615,  -325,
      77,  -325,  -325,   291,    27,  -325,  -325,  2722,  1417,  2774,
     -18,  1337,  1417,  -325,   294,  -325,   292,  -325,  -325,   115,
    -325,   306,  1417,  2826,     0,  -325,  -325,   298,  1377,   125,
    -325,   308,   897,  -325,  1417,  2878,   300,  1417,   133,  -325,
    -325,  2930,   301,  -325,  -325
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     2,     1,     0,     0,     0,   115,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,    95,   120,   118,    27,   119,   112,   113,     0,
       0,     0,     0,     0,     4,     7,     5,     6,    17,   142,
      18,    13,    14,    15,    16,     0,     0,   116,   117,    83,
     140,   141,     0,   126,     0,     0,     0,    19,    20,     0,
     115,    95,    21,     0,     0,    83,     0,    11,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     129,   128,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   147,   159,     0,    93,    94,     0,   111,
     110,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   149,    30,
       0,     0,    47,    47,     0,   163,     0,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   177,     0,     0,   155,   157,   160,     0,
       0,    84,    89,    90,    91,    92,    97,    98,   122,    88,
      87,    86,    85,   109,   124,   125,   104,   105,   101,   102,
      99,   100,   106,   103,   107,   108,     0,     0,   150,    34,
       0,    31,    32,     0,   127,    47,    45,    48,    45,     0,
       0,     0,     0,    57,    12,     0,     0,     0,     0,     0,
       0,    45,     0,     0,     0,     9,   161,     0,     0,    25,
       0,     0,   121,     0,     0,   152,   159,   159,     0,     0,
       0,     0,    35,     0,     0,    30,     0,     0,    49,    49,
      66,   164,    23,    68,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
     144,   178,     0,   148,   156,   158,     0,     0,     0,    96,
     151,    36,     0,    11,    33,     0,    45,    46,     0,     0,
       0,     0,    69,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     8,   162,
      26,     0,   145,   153,   154,   123,    37,     0,     0,    49,
      50,    40,    44,    67,    76,    75,     0,    73,     0,     0,
       0,     0,    78,     0,    79,   165,     0,    64,    59,    60,
       0,    28,    11,     0,    51,    51,    74,    72,    71,     0,
       0,     0,     0,     0,     0,     0,   166,   167,     0,    11,
     146,     0,    42,     0,     0,    53,    52,     0,    70,     0,
      80,     0,     0,     0,     0,     0,   168,    65,    61,    29,
      51,    55,    39,     0,    54,    43,    81,     0,     0,     0,
       0,     0,     0,    38,     0,    63,     0,    56,   173,     0,
     169,     0,     0,     0,     0,    11,    41,     0,     0,     0,
     171,     0,    62,   170,     0,     0,     0,     0,     0,   174,
     172,     0,     0,   176,   175
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -325,  -325,  -325,  -325,  -325,  -325,  -278,    -1,  -137,   116,
    -325,   118,  -325,  -272,  -195,  -121,  -234,  -324,    -3,  -205,
    -325,  -256,  -325,  -325,  -325,  -325,  -325,  -325,   312,  -325,
    -325,     2,   -45,    -2,  -325,   130,  -325,   -94,  -325,  -148,
    -325,    30,  -241,  -232
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    34,    35,   224,   139,    68,    37,   200,
     201,   202,    38,    39,   248,   206,   289,   364,   365,    69,
      40,   306,   336,    41,    42,    43,    44,    45,    46,    47,
      48,    55,    93,    65,    50,   167,   168,   169,    51,   136,
     355,   366,   357,   164
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      49,    36,   128,   230,   250,   317,   278,   253,    56,   307,
      49,   225,   208,   249,     4,   290,    79,   233,    73,   372,
     241,   367,   391,     5,     6,    60,   263,    52,   231,     3,
     237,    94,     5,     6,    80,    81,   231,   231,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    20,   240,
     293,    21,    61,    23,    24,   231,   396,    26,    27,    28,
      92,    29,    30,   373,   361,   242,   392,    95,   232,   238,
     266,    31,   363,   363,   358,   129,   315,   401,    57,    32,
      33,   378,     5,     6,   246,   343,   323,   267,    53,   324,
     325,   319,   327,   383,   363,   411,   332,    58,   334,   104,
     105,   352,   359,    59,   108,    54,    66,   111,   363,    70,
     205,   130,   383,   353,   354,   376,   184,   185,   108,   114,
     115,   346,   395,   347,   348,   376,    71,   412,    72,   102,
     103,   104,   105,   114,   115,    74,   108,    49,   214,   111,
     320,   390,   276,   277,   368,   352,   370,     5,     6,    60,
     210,   114,   115,    75,   211,   116,   117,   353,   354,    76,
     404,   210,   210,   340,   386,   270,   274,   210,    78,   210,
     210,   280,    20,   360,   407,    21,    61,    23,    24,    77,
     210,    26,    27,    28,   416,    29,    30,   273,   210,     5,
       6,    60,   422,   101,   -82,    31,   132,   133,   143,   102,
     103,   104,   105,    32,    33,   140,   108,    49,   144,   111,
      49,   145,   148,   170,    20,   178,   199,    21,    61,    23,
      24,   114,   115,    26,    27,    28,   203,    29,    30,   215,
     219,   220,   235,   260,     5,     6,    60,    31,     4,   236,
     399,    62,    63,   234,   244,    32,    33,   243,   245,     5,
       6,    60,   247,    49,   409,   252,   268,   264,   265,    20,
     282,   283,    21,    61,    23,    24,   418,   286,    26,    27,
      28,   288,    29,    30,    20,   287,   291,    21,    61,    23,
      24,   304,    31,    26,    27,    28,   141,    29,    30,    49,
      32,    33,    49,    49,   308,    49,   305,    31,   335,    49,
     309,    49,   151,   313,   314,    32,    33,   102,   103,   104,
     105,   318,   321,   322,   108,    49,   214,   111,   362,   338,
     339,   342,    64,   371,    49,   344,    49,    49,   113,   114,
     115,   210,   345,   116,   117,   374,   375,   380,   381,   382,
     393,    96,    97,    98,    99,   100,   385,    49,   397,    49,
     405,   406,   124,   125,   408,   413,   417,   420,   424,    49,
     214,   285,   284,   384,   275,   356,   131,    49,     0,     0,
       0,   134,     0,     0,     0,   135,    49,   214,   138,     0,
       0,     0,   142,     0,     0,     0,   146,   147,     0,   149,
     150,   152,     0,     0,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,     0,   166,     0,     0,     0,
      49,   214,     0,     0,   172,   173,   174,   175,   176,   177,
       0,   179,   180,   181,   182,   183,     0,     0,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   198,
       0,     0,     0,     0,   207,   207,     0,     0,     4,     0,
       5,     6,     7,   217,     8,     0,     9,   221,    10,    11,
      12,     0,     0,   135,     0,    13,    14,    15,     0,    16,
      17,     0,    18,     0,    19,    20,     0,   135,    21,    22,
      23,    24,     0,    25,    26,    27,    28,     0,    29,    30,
       0,     0,   102,   103,   104,   105,   106,   107,    31,   108,
       0,     0,   111,     0,     0,     0,    32,    33,     0,   135,
       0,     0,     0,   113,   114,   115,     0,   207,   116,   117,
       0,     0,   251,     0,     0,     0,     0,   254,   256,     0,
     259,   261,   262,   120,   121,     0,     0,   124,   125,     0,
     269,     0,     0,   271,     0,     0,   166,     0,   166,   166,
     163,   279,     0,   281,     0,     0,   102,   103,   104,   105,
     106,   107,     0,   108,   109,   110,   111,     0,     0,   296,
     298,     0,   300,     0,   112,     0,     0,   113,   114,   115,
       0,     0,   116,   117,   312,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   316,   118,   119,   120,   121,   122,
     135,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,   330,     0,     0,   333,     0,     0,   337,     0,     0,
       5,     6,     7,   135,     8,     0,     9,     0,    10,    11,
      12,     0,     0,     0,   394,    13,    14,    15,     0,    16,
      17,   305,    18,   350,     0,    20,     0,     0,    21,    22,
      23,    24,     0,    25,    26,    27,    28,     0,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
     377,     0,     0,     0,     0,     0,    32,    33,     0,     0,
       0,     0,     0,   387,   389,   163,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     135,     0,     0,   403,   163,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   135,     5,     6,     7,     0,     8,
     415,     9,     0,    10,    11,    12,   135,     0,     0,   421,
      13,    14,    15,     0,    16,    17,     0,    18,     0,     0,
      20,     0,     0,    21,    22,    23,    24,     0,    25,    26,
      27,    28,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,     0,    67,     0,
       0,    32,    33,     5,     6,     7,     0,     8,     0,     9,
       0,    10,    11,    12,     0,     0,     0,     0,    13,    14,
      15,     0,    16,    17,     0,    18,     0,     0,    20,     0,
       0,    21,    22,    23,    24,     0,    25,    26,    27,    28,
       0,    29,    30,     0,     0,     0,     5,     6,     7,     0,
       8,    31,     9,     0,    10,    11,    12,   213,     0,    32,
      33,    13,    14,    15,     0,    16,    17,     0,    18,     0,
       0,    20,     0,     0,    21,    22,    23,    24,     0,    25,
      26,    27,    28,     0,    29,    30,     0,     0,     0,     5,
       6,     7,     0,     8,    31,     9,     0,    10,    11,    12,
     341,     0,    32,    33,    13,    14,    15,     0,    16,    17,
       0,    18,     0,     0,    20,     0,     0,    21,    22,    23,
      24,     0,    25,    26,    27,    28,     0,    29,    30,     0,
       0,     0,     5,     6,     7,     0,     8,    31,     9,     0,
      10,    11,    12,   379,     0,    32,    33,    13,    14,    15,
       0,    16,    17,     0,    18,     0,     0,    20,     0,     0,
      21,    22,    23,    24,     0,    25,    26,    27,    28,     0,
      29,    30,     5,     6,    60,     0,     0,     0,     0,     0,
      31,     0,     0,     0,     0,     0,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
      21,    61,    23,    24,     0,     0,    26,    27,    28,     0,
      29,    30,     5,     6,    60,     0,     0,     0,     0,     0,
      31,     0,     0,     0,     0,   165,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
      21,    61,    23,    24,     0,     0,    26,    27,    28,     0,
      29,    30,     5,     6,    60,     0,     0,     0,     0,     0,
      31,     0,     0,     0,     0,   197,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
      21,    61,    23,    24,     0,     0,    26,    27,    28,     0,
      29,    30,     5,     6,    60,     0,     0,     0,     0,     0,
      31,     0,     0,     0,   216,     0,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
      21,    61,    23,    24,     0,     0,    26,    27,    28,     0,
      29,    30,     5,     6,    60,     0,     0,     0,     0,     0,
      31,   255,     0,     0,     0,     0,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
      21,    61,    23,    24,     0,     0,    26,    27,    28,     0,
      29,    30,     5,     6,    60,     0,     0,     0,     0,     0,
      31,     0,     0,     0,   258,     0,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
      21,    61,    23,    24,     0,     0,    26,    27,    28,     0,
      29,    30,     5,     6,    60,     0,     0,     0,     0,     0,
      31,   295,     0,     0,     0,     0,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
      21,    61,    23,    24,     0,     0,    26,    27,    28,     0,
      29,    30,     5,     6,    60,     0,     0,     0,     0,     0,
      31,   297,     0,     0,     0,     0,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
      21,    61,    23,    24,     0,     0,    26,    27,    28,     0,
      29,    30,     5,     6,    60,     0,     0,     0,     0,     0,
      31,     0,     0,     0,     0,   311,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
      21,    61,    23,    24,     0,     0,    26,    27,    28,     0,
      29,    30,     5,     6,    60,     0,     0,     0,     0,     0,
      31,   329,     0,     0,     0,     0,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
      21,    61,    23,    24,     0,     0,    26,    27,    28,     0,
      29,    30,     5,     6,    60,     0,     0,     0,     0,     0,
      31,     0,     0,     0,     0,   388,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
      21,    61,    23,    24,     0,     0,    26,    27,    28,     0,
      29,    30,     5,     6,    60,     0,     0,     0,     0,     0,
      31,     0,     0,     0,     0,   402,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
      21,    61,    23,    24,     0,     0,    26,    27,    28,     0,
      29,    30,     5,     6,    60,     0,     0,     0,     0,     0,
      31,     0,     0,     0,     0,   414,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
      21,    61,    23,    24,     0,     0,    26,    27,    28,     0,
      29,    30,     0,     0,   102,   103,   104,   105,   106,   107,
      31,   108,   109,   110,   111,     0,   226,   227,    32,    33,
       0,     0,   112,     0,     0,   113,   114,   115,     0,     0,
     116,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,     0,     0,     0,     0,   126,   102,   103,   104,   105,
     106,   107,     0,   108,   109,   110,   111,     0,     0,   228,
       0,   229,     0,     0,   112,     0,     0,   113,   114,   115,
       0,     0,   116,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,     0,     0,     0,     0,   126,   102,   103,
     104,   105,   106,   107,     0,   108,   109,   110,   111,     0,
     301,     0,     0,     0,     0,     0,   112,     0,     0,   113,
     114,   115,     0,     0,   116,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,     0,   302,     0,     0,   126,
     102,   103,   104,   105,   106,   107,     0,   108,   109,   110,
     111,     0,     0,     0,     0,   137,     0,     0,   112,     0,
       0,   113,   114,   115,     0,     0,   116,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     119,   120,   121,   122,   123,   124,   125,     0,     0,     0,
       0,   126,   102,   103,   104,   105,   106,   107,     0,   108,
     109,   110,   111,     0,   171,     0,     0,     0,     0,     0,
     112,     0,     0,   113,   114,   115,     0,     0,   116,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,     0,
       0,     0,     0,   126,   102,   103,   104,   105,   106,   107,
       0,   108,   109,   110,   111,     0,   204,     0,     0,     0,
       0,     0,   112,     0,     0,   113,   114,   115,     0,     0,
     116,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,     0,     0,     0,     0,   126,   102,   103,   104,   105,
     106,   107,     0,   108,   109,   110,   111,     0,   209,     0,
       0,     0,     0,     0,   112,     0,     0,   113,   114,   115,
       0,     0,   116,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,     0,     0,     0,     0,   126,   102,   103,
     104,   105,   106,   107,     0,   108,   109,   110,   111,     0,
     212,     0,     0,     0,     0,     0,   112,     0,     0,   113,
     114,   115,     0,     0,   116,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,     0,     0,     0,     0,   126,
     102,   103,   104,   105,   106,   107,     0,   108,   109,   110,
     111,     0,     0,     0,     0,   218,     0,     0,   112,     0,
       0,   113,   114,   115,     0,     0,   116,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     119,   120,   121,   122,   123,   124,   125,     0,     0,     0,
       0,   126,   102,   103,   104,   105,   106,   107,     0,   108,
     109,   110,   111,     0,   222,     0,     0,     0,     0,     0,
     112,     0,     0,   113,   114,   115,     0,     0,   116,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,     0,
       0,     0,     0,   126,   102,   103,   104,   105,   106,   107,
       0,   108,   109,   110,   111,     0,   223,     0,     0,     0,
       0,     0,   112,     0,     0,   113,   114,   115,     0,     0,
     116,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,     0,     0,     0,     0,   126,   102,   103,   104,   105,
     106,   107,     0,   108,   109,   110,   111,     0,     0,     0,
     239,     0,     0,     0,   112,     0,     0,   113,   114,   115,
       0,     0,   116,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,     0,     0,     0,     0,   126,   102,   103,
     104,   105,   106,   107,     0,   108,   109,   110,   111,     0,
       0,     0,     0,   257,     0,     0,   112,     0,     0,   113,
     114,   115,     0,     0,   116,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,     0,     0,     0,     0,   126,
     102,   103,   104,   105,   106,   107,     0,   108,   109,   110,
     111,     0,     0,     0,   247,     0,     0,     0,   112,     0,
       0,   113,   114,   115,     0,     0,   116,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     119,   120,   121,   122,   123,   124,   125,     0,     0,     0,
       0,   126,   102,   103,   104,   105,   106,   107,     0,   108,
     109,   110,   111,     0,   292,     0,     0,     0,     0,     0,
     112,     0,     0,   113,   114,   115,     0,     0,   116,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,     0,
       0,     0,     0,   126,   102,   103,   104,   105,   106,   107,
       0,   108,   109,   110,   111,     0,   294,     0,     0,     0,
       0,     0,   112,     0,     0,   113,   114,   115,     0,     0,
     116,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,     0,     0,     0,     0,   126,   102,   103,   104,   105,
     106,   107,     0,   108,   109,   110,   111,     0,     0,     0,
       0,   299,     0,     0,   112,     0,     0,   113,   114,   115,
       0,     0,   116,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,     0,     0,     0,     0,   126,   102,   103,
     104,   105,   106,   107,     0,   108,   109,   110,   111,     0,
     303,     0,     0,     0,     0,     0,   112,     0,     0,   113,
     114,   115,     0,     0,   116,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,     0,     0,     0,     0,   126,
     102,   103,   104,   105,   106,   107,     0,   108,   109,   110,
     111,     0,     0,     0,     0,   310,     0,     0,   112,     0,
       0,   113,   114,   115,     0,     0,   116,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     119,   120,   121,   122,   123,   124,   125,     0,     0,     0,
       0,   126,   102,   103,   104,   105,   106,   107,     0,   108,
     109,   110,   111,     0,   326,     0,     0,     0,     0,     0,
     112,     0,     0,   113,   114,   115,     0,     0,   116,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,     0,
       0,     0,     0,   126,   102,   103,   104,   105,   106,   107,
       0,   108,   109,   110,   111,     0,   328,     0,     0,     0,
       0,     0,   112,     0,     0,   113,   114,   115,     0,     0,
     116,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,     0,     0,     0,     0,   126,   102,   103,   104,   105,
     106,   107,     0,   108,   109,   110,   111,     0,     0,     0,
       0,     0,     0,     0,   112,     0,     0,   113,   114,   115,
       0,     0,   116,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,     0,   331,     0,     0,   126,   102,   103,
     104,   105,   106,   107,     0,   108,   109,   110,   111,     0,
     349,     0,     0,     0,     0,     0,   112,     0,     0,   113,
     114,   115,     0,     0,   116,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,     0,     0,     0,     0,   126,
     102,   103,   104,   105,   106,   107,     0,   108,   109,   110,
     111,     0,   351,     0,     0,     0,     0,     0,   112,     0,
       0,   113,   114,   115,     0,     0,   116,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     119,   120,   121,   122,   123,   124,   125,     0,     0,     0,
       0,   126,   102,   103,   104,   105,   106,   107,     0,   108,
     109,   110,   111,     0,   369,     0,     0,     0,     0,     0,
     112,     0,     0,   113,   114,   115,     0,     0,   116,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,     0,
       0,     0,     0,   126,   102,   103,   104,   105,   106,   107,
       0,   108,   109,   110,   111,     0,     0,     0,     0,   398,
       0,     0,   112,     0,     0,   113,   114,   115,     0,     0,
     116,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,     0,     0,     0,     0,   126,   102,   103,   104,   105,
     106,   107,     0,   108,   109,   110,   111,     0,     0,     0,
       0,   400,     0,     0,   112,     0,     0,   113,   114,   115,
       0,     0,   116,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,     0,     0,     0,     0,   126,   102,   103,
     104,   105,   106,   107,     0,   108,   109,   110,   111,     0,
       0,     0,     0,   410,     0,     0,   112,     0,     0,   113,
     114,   115,     0,     0,   116,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,     0,     0,     0,     0,   126,
     102,   103,   104,   105,   106,   107,     0,   108,   109,   110,
     111,     0,     0,     0,     0,   419,     0,     0,   112,     0,
       0,   113,   114,   115,     0,     0,   116,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     119,   120,   121,   122,   123,   124,   125,     0,     0,     0,
       0,   126,   102,   103,   104,   105,   106,   107,     0,   108,
     109,   110,   111,     0,     0,     0,     0,   423,     0,     0,
     112,     0,     0,   113,   114,   115,     0,     0,   116,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,     0,
       0,     0,     0,   126,   102,   103,   104,   105,   106,   107,
       0,   108,   109,   110,   111,     0,     0,     0,     0,     0,
       0,     0,   112,     0,     0,   113,   114,   115,     0,     0,
     116,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,     0,     0,     0,     0,   126,   102,   103,   104,   105,
     106,   107,     0,   108,   109,   110,   111,     0,     0,     0,
       0,     0,     0,     0,   112,     0,     0,   113,   114,   115,
       0,     0,   116,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,   102,   103,   104,   105,   106,   107,     0,
     108,   109,   110,   111,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,   113,   114,   115,     0,     0,   116,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,   119,   120,   121,     0,     0,   124,   125,
     102,   103,   104,   105,   106,   107,     0,   108,     0,   110,
     111,     0,     0,     0,     0,     0,     0,     0,   112,     0,
       0,   113,   114,   115,     0,     0,   116,   117,   102,   103,
     104,   105,   106,   107,     0,   108,     0,   110,   111,   118,
     119,   120,   121,     0,     0,   124,   125,     0,     0,   113,
     114,   115,     0,     0,   116,   117,   102,   103,   104,   105,
     106,   107,     0,   108,     0,     0,   111,   118,   119,   120,
     121,     0,     0,   124,   125,     0,     0,   113,   114,   115,
       0,   127,   116,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,   119,   120,   121,    80,
      81,   124,   125,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,   272,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,    81,     0,     0,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91
};

static const yytype_int16 yycheck[] =
{
       2,     2,    47,   151,   209,   283,   238,   212,     6,   265,
      12,   148,   133,   208,     3,   249,    48,   165,    16,    48,
      48,   345,    48,     5,     6,     7,   221,    36,    55,     0,
      53,    53,     5,     6,    66,    67,    55,    55,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    30,   197,
     255,    33,    34,    35,    36,    55,   380,    39,    40,    41,
      92,    43,    44,    92,   342,    93,    92,    89,    95,    92,
      59,    53,   344,   345,    28,    53,    95,    95,    57,    61,
      62,   359,     5,     6,   205,   319,   291,   224,    36,   294,
     295,   286,   297,   365,   366,    95,   301,    57,   303,    44,
      45,    24,    56,    53,    49,    53,    53,    52,   380,    53,
      92,    89,   384,    36,    37,   356,   114,   115,    49,    64,
      65,   326,   378,   328,   329,   366,    53,   405,    53,    42,
      43,    44,    45,    64,    65,    53,    49,   139,   139,    52,
     288,   373,   236,   237,   349,    24,   351,     5,     6,     7,
      55,    64,    65,    53,    59,    68,    69,    36,    37,    36,
     392,    55,    55,   311,   369,    59,    59,    55,    48,    55,
      55,    59,    30,    59,    59,    33,    34,    35,    36,    53,
      55,    39,    40,    41,    59,    43,    44,   232,    55,     5,
       6,     7,    59,    57,    57,    53,    53,    53,    35,    42,
      43,    44,    45,    61,    62,    14,    49,   209,    35,    52,
     212,    53,    58,    36,    30,    36,    35,    33,    34,    35,
      36,    64,    65,    39,    40,    41,    36,    43,    44,    53,
      23,    23,    54,    91,     5,     6,     7,    53,     3,    53,
     388,    57,    58,    55,    55,    61,    62,    54,    53,     5,
       6,     7,    56,   255,   402,    57,    39,    58,    58,    30,
      48,    58,    33,    34,    35,    36,   414,    95,    39,    40,
      41,    55,    43,    44,    30,    36,     8,    33,    34,    35,
      36,    54,    53,    39,    40,    41,    57,    43,    44,   291,
      61,    62,   294,   295,    57,   297,    26,    53,    58,   301,
      54,   303,    58,    54,    54,    61,    62,    42,    43,    44,
      45,    54,    54,    54,    49,   317,   317,    52,    54,    59,
      59,    58,    10,    48,   326,    58,   328,   329,    63,    64,
      65,    55,    58,    68,    69,    36,    59,    58,    57,    59,
      57,    29,    30,    31,    32,    33,    59,   349,    57,   351,
      56,    59,    87,    88,    48,    57,    48,    57,    57,   361,
     361,   245,   244,   366,   234,   335,    54,   369,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    63,   378,   378,    66,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    74,    75,    -1,    77,
      78,    79,    -1,    -1,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    -1,    94,    -1,    -1,    -1,
     412,   412,    -1,    -1,   102,   103,   104,   105,   106,   107,
      -1,   109,   110,   111,   112,   113,    -1,    -1,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
      -1,    -1,    -1,    -1,   132,   133,    -1,    -1,     3,    -1,
       5,     6,     7,   141,     9,    -1,    11,   145,    13,    14,
      15,    -1,    -1,   151,    -1,    20,    21,    22,    -1,    24,
      25,    -1,    27,    -1,    29,    30,    -1,   165,    33,    34,
      35,    36,    -1,    38,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    42,    43,    44,    45,    46,    47,    53,    49,
      -1,    -1,    52,    -1,    -1,    -1,    61,    62,    -1,   197,
      -1,    -1,    -1,    63,    64,    65,    -1,   205,    68,    69,
      -1,    -1,   210,    -1,    -1,    -1,    -1,   215,   216,    -1,
     218,   219,   220,    83,    84,    -1,    -1,    87,    88,    -1,
     228,    -1,    -1,   231,    -1,    -1,   234,    -1,   236,   237,
     238,   239,    -1,   241,    -1,    -1,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    -1,   257,
     258,    -1,   260,    -1,    60,    -1,    -1,    63,    64,    65,
      -1,    -1,    68,    69,   272,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   282,    81,    82,    83,    84,    85,
     288,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   299,    -1,    -1,   302,    -1,    -1,   305,    -1,    -1,
       5,     6,     7,   311,     9,    -1,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    19,    20,    21,    22,    -1,    24,
      25,    26,    27,   331,    -1,    30,    -1,    -1,    33,    34,
      35,    36,    -1,    38,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
     358,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,   371,   372,   373,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     388,    -1,    -1,   391,   392,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   402,     5,     6,     7,    -1,     9,
     408,    11,    -1,    13,    14,    15,   414,    -1,    -1,   417,
      20,    21,    22,    -1,    24,    25,    -1,    27,    -1,    -1,
      30,    -1,    -1,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    61,    62,     5,     6,     7,    -1,     9,    -1,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    24,    25,    -1,    27,    -1,    -1,    30,    -1,
      -1,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    -1,     5,     6,     7,    -1,
       9,    53,    11,    -1,    13,    14,    15,    59,    -1,    61,
      62,    20,    21,    22,    -1,    24,    25,    -1,    27,    -1,
      -1,    30,    -1,    -1,    33,    34,    35,    36,    -1,    38,
      39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,     5,
       6,     7,    -1,     9,    53,    11,    -1,    13,    14,    15,
      59,    -1,    61,    62,    20,    21,    22,    -1,    24,    25,
      -1,    27,    -1,    -1,    30,    -1,    -1,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    -1,     5,     6,     7,    -1,     9,    53,    11,    -1,
      13,    14,    15,    59,    -1,    61,    62,    20,    21,    22,
      -1,    24,    25,    -1,    27,    -1,    -1,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    38,    39,    40,    41,    -1,
      43,    44,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,    -1,
      43,    44,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,    -1,
      43,    44,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,    -1,
      43,    44,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    57,    -1,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,    -1,
      43,    44,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,    -1,
      43,    44,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    57,    -1,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,    -1,
      43,    44,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,    -1,
      43,    44,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,    -1,
      43,    44,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,    -1,
      43,    44,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,    -1,
      43,    44,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,    -1,
      43,    44,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,    -1,
      43,    44,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    42,    43,    44,    45,    46,    47,
      53,    49,    50,    51,    52,    -1,    54,    55,    61,    62,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    93,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    -1,    55,
      -1,    57,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    93,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    -1,    -1,    93,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    -1,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    93,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    -1,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    93,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    93,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    93,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    93,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    -1,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    93,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    -1,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    93,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    93,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    93,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    93,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    -1,    -1,    56,    -1,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    -1,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    93,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    -1,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    93,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    93,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    93,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    93,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    -1,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    93,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    -1,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    93,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    93,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    -1,    -1,    93,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    93,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    -1,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    93,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    -1,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    93,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    93,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    93,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    93,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    -1,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    93,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    -1,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    93,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    93,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    63,    64,    65,    -1,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    -1,    -1,    87,    88,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    -1,    -1,    68,    69,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    51,    52,    81,
      82,    83,    84,    -1,    -1,    87,    88,    -1,    -1,    63,
      64,    65,    -1,    -1,    68,    69,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    52,    81,    82,    83,
      84,    -1,    -1,    87,    88,    -1,    -1,    63,    64,    65,
      -1,    48,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    66,
      67,    87,    88,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    97,    98,     0,     3,     5,     6,     7,     9,    11,
      13,    14,    15,    20,    21,    22,    24,    25,    27,    29,
      30,    33,    34,    35,    36,    38,    39,    40,    41,    43,
      44,    53,    61,    62,    99,   100,   103,   104,   108,   109,
     116,   119,   120,   121,   122,   123,   124,   125,   126,   129,
     130,   134,    36,    36,    53,   127,   127,    57,    57,    53,
       7,    34,    57,    58,   124,   129,    53,    58,   103,   115,
      53,    53,    53,   127,    53,    53,    36,    53,    48,    48,
      66,    67,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    92,   128,    53,    89,   124,   124,   124,   124,
     124,    57,    42,    43,    44,    45,    46,    47,    49,    50,
      51,    52,    60,    63,    64,    65,    68,    69,    81,    82,
      83,    84,    85,    86,    87,    88,    93,    48,   128,    53,
      89,   124,    53,    53,   124,   124,   135,    57,   124,   102,
      14,    57,   124,    35,    35,    53,   124,   124,    58,   124,
     124,    58,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   139,    58,   124,   131,   132,   133,
      36,    54,   124,   124,   124,   124,   124,   124,    36,   124,
     124,   124,   124,   124,   127,   127,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,    58,   124,    35,
     105,   106,   107,    36,    54,    92,   111,   124,   111,    54,
      55,    59,    54,    59,   103,    53,    57,   124,    57,    23,
      23,   124,    54,    54,   101,   104,    54,    55,    55,    57,
     135,    55,    95,   135,    55,    54,    53,    53,    92,    56,
     135,    48,    93,    54,    55,    53,   111,    56,   110,   110,
     115,   124,    57,   115,   124,    54,   124,    57,    57,   124,
      91,   124,   124,   110,    58,    58,    59,   104,    39,   124,
      59,   124,    48,   128,    59,   131,   133,   133,   139,   124,
      59,   124,    48,    58,   107,   105,    95,    36,    55,   112,
     112,     8,    54,   115,    54,    54,   124,    54,   124,    57,
     124,    54,    90,    54,    54,    26,   117,   117,    57,    54,
      57,    58,   124,    54,    54,    95,   124,   102,    54,   110,
     135,    54,    54,   115,   115,   115,    54,   115,    54,    54,
     124,    90,   115,   124,   115,    58,   118,   124,    59,    59,
     135,    59,    58,   112,    58,    58,   115,   115,   115,    54,
     124,    54,    24,    36,    37,   136,   137,   138,    28,    56,
      59,   102,    54,   109,   113,   114,   137,   113,   115,    54,
     115,    48,    48,    92,    36,    59,   138,   124,   102,    59,
      58,    57,    59,   109,   114,    59,   115,   124,    58,   124,
     139,    48,    92,    57,    19,   117,   113,    57,    57,   135,
      57,    95,    58,   124,   139,    56,    59,    59,    48,   135,
      57,    95,   102,    57,    58,   124,    59,    48,   135,    57,
      57,   124,    59,    57,    57
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    98,    98,    99,    99,    99,   100,   101,
     101,   102,   102,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   104,   104,
     105,   105,   106,   106,   107,   107,   107,   107,   108,   109,
     109,   109,   109,   109,   109,   110,   110,   111,   111,   112,
     112,   113,   113,   113,   113,   114,   114,   115,   115,   116,
     116,   117,   117,   117,   118,   118,   119,   119,   120,   120,
     121,   121,   121,   121,   121,   121,   121,   121,   122,   122,
     122,   122,   123,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   125,   125,   126,   126,   127,   127,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   130,   130,   130,   131,   131,   132,   132,   133,
     133,   134,   134,   135,   135,   136,   136,   137,   137,   138,
     138,   138,   138,   138,   138,   138,   138,   139,   139
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
       9,     8,     8,     7,     8,     7,     7,     6,     7,     7,
       9,    10,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     1,     5,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     3,     6,     3,     3,     1,     3,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     1,     1,     3,     5,     6,     8,     2,     5,     2,
       3,     5,     4,     6,     6,     1,     3,     1,     3,     0,
       1,     4,     6,     1,     3,     0,     1,     1,     2,     4,
       6,     5,     7,     4,     7,     9,     8,     1,     3
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
#line 205 "CMDgram.y"
      { }
#line 2309 "CMDgram.cpp"
    break;

  case 3: /* decl_list: %empty  */
#line 210 "CMDgram.y"
      { (yyval.stmt) = nil; }
#line 2315 "CMDgram.cpp"
    break;

  case 4: /* decl_list: decl_list decl  */
#line 212 "CMDgram.y"
      { if(!Script::gStatementList) { Script::gStatementList = (yyvsp[0].stmt); } else { Script::gStatementList->append((yyvsp[0].stmt)); } }
#line 2321 "CMDgram.cpp"
    break;

  case 5: /* decl: stmt  */
#line 217 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2327 "CMDgram.cpp"
    break;

  case 6: /* decl: fn_decl_stmt  */
#line 219 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2333 "CMDgram.cpp"
    break;

  case 7: /* decl: package_decl  */
#line 221 "CMDgram.y"
     { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2339 "CMDgram.cpp"
    break;

  case 8: /* package_decl: rwPACKAGE IDENT '{' fn_decl_list '}' ';'  */
#line 226 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-2].stmt); for(StmtNode *walk = ((yyvsp[-2].stmt));walk;walk = walk->getNext() ) walk->setPackage((yyvsp[-4].s).value); }
#line 2345 "CMDgram.cpp"
    break;

  case 9: /* fn_decl_list: fn_decl_stmt  */
#line 231 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2351 "CMDgram.cpp"
    break;

  case 10: /* fn_decl_list: fn_decl_list fn_decl_stmt  */
#line 233 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].stmt); ((yyvsp[-1].stmt))->append((yyvsp[0].stmt));  }
#line 2357 "CMDgram.cpp"
    break;

  case 11: /* statement_list: %empty  */
#line 238 "CMDgram.y"
      { (yyval.stmt) = nil; }
#line 2363 "CMDgram.cpp"
    break;

  case 12: /* statement_list: statement_list stmt  */
#line 240 "CMDgram.y"
      { if(!(yyvsp[-1].stmt)) { (yyval.stmt) = (yyvsp[0].stmt); } else { ((yyvsp[-1].stmt))->append((yyvsp[0].stmt)); (yyval.stmt) = (yyvsp[-1].stmt); } }
#line 2369 "CMDgram.cpp"
    break;

  case 19: /* stmt: rwBREAK ';'  */
#line 251 "CMDgram.y"
      { (yyval.stmt) = BreakStmtNode::alloc( (yyvsp[-1].i).lineNumber ); }
#line 2375 "CMDgram.cpp"
    break;

  case 20: /* stmt: rwCONTINUE ';'  */
#line 253 "CMDgram.y"
      { (yyval.stmt) = ContinueStmtNode::alloc( (yyvsp[-1].i).lineNumber ); }
#line 2381 "CMDgram.cpp"
    break;

  case 21: /* stmt: rwRETURN ';'  */
#line 255 "CMDgram.y"
      { (yyval.stmt) = ReturnStmtNode::alloc( (yyvsp[-1].i).lineNumber, NULL ); }
#line 2387 "CMDgram.cpp"
    break;

  case 22: /* stmt: rwRETURN expr ';'  */
#line 257 "CMDgram.y"
      { (yyval.stmt) = ReturnStmtNode::alloc( (yyvsp[-2].i).lineNumber, (yyvsp[-1].expr) ); }
#line 2393 "CMDgram.cpp"
    break;

  case 23: /* stmt: rwRETURN '{' expr_list '}' ';'  */
#line 260 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-4].i).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
//          for (ExprNode* expr = (ExprNode*)$3; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.stmt) = ReturnStmtNode::alloc( (yyvsp[-4].i).lineNumber, vecNode );
      }
#line 2406 "CMDgram.cpp"
    break;

  case 24: /* stmt: expression_stmt ';'  */
#line 270 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 2412 "CMDgram.cpp"
    break;

  case 25: /* stmt: TTAG '=' expr ';'  */
#line 272 "CMDgram.y"
      { (yyval.stmt) = TTagSetStmtNode::alloc( (yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[-1].expr), NULL ); }
#line 2418 "CMDgram.cpp"
    break;

  case 26: /* stmt: TTAG '=' expr ',' expr ';'  */
#line 274 "CMDgram.y"
      { (yyval.stmt) = TTagSetStmtNode::alloc( (yyvsp[-5].s).lineNumber, (yyvsp[-5].s).value, (yyvsp[-3].expr), (yyvsp[-1].expr) ); }
#line 2424 "CMDgram.cpp"
    break;

  case 27: /* stmt: DOCBLOCK  */
#line 276 "CMDgram.y"
      { (yyval.stmt) = StrConstNode::alloc( (yyvsp[0].str).lineNumber, (yyvsp[0].str).value, false, true ); }
#line 2430 "CMDgram.cpp"
    break;

  case 28: /* fn_decl_stmt: rwDEFINE IDENT '(' var_list_decl ')' '{' statement_list '}'  */
#line 282 "CMDgram.y"
      { (yyval.stmt) = FunctionDeclStmtNode::alloc( (yyvsp[-7].i).lineNumber, (yyvsp[-6].s).value, NULL, (yyvsp[-4].var), (yyvsp[-1].stmt) ); }
#line 2436 "CMDgram.cpp"
    break;

  case 29: /* fn_decl_stmt: rwDEFINE IDENT opCOLONCOLON IDENT '(' var_list_decl ')' '{' statement_list '}'  */
#line 285 "CMDgram.y"
      { (yyval.stmt) = FunctionDeclStmtNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-6].s).value, (yyvsp[-8].s).value, (yyvsp[-4].var), (yyvsp[-1].stmt) ); }
#line 2442 "CMDgram.cpp"
    break;

  case 30: /* var_list_decl: %empty  */
#line 290 "CMDgram.y"
      { (yyval.var) = NULL; }
#line 2448 "CMDgram.cpp"
    break;

  case 31: /* var_list_decl: var_list  */
#line 292 "CMDgram.y"
      { (yyval.var) = (yyvsp[0].var); }
#line 2454 "CMDgram.cpp"
    break;

  case 32: /* var_list: param  */
#line 297 "CMDgram.y"
      { (yyval.var) = (yyvsp[0].var); }
#line 2460 "CMDgram.cpp"
    break;

  case 33: /* var_list: var_list ',' param  */
#line 299 "CMDgram.y"
      { (yyval.var) = (yyvsp[-2].var); ((StmtNode*)((yyvsp[-2].var)))->append((StmtNode*)(yyvsp[0].var) ); }
#line 2466 "CMDgram.cpp"
    break;

  case 34: /* param: VAR  */
#line 316 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[0].s).lineNumber, (yyvsp[0].s).value, NULL); }
#line 2472 "CMDgram.cpp"
    break;

  case 35: /* param: VAR '?'  */
#line 318 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[-1].s).lineNumber, (yyvsp[-1].s).value, NULL); }
#line 2478 "CMDgram.cpp"
    break;

  case 36: /* param: VAR '=' expr  */
#line 320 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[-2].s).lineNumber, (yyvsp[-2].s).value, (yyvsp[0].expr)); }
#line 2484 "CMDgram.cpp"
    break;

  case 37: /* param: VAR '?' '=' expr  */
#line 322 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[0].expr)); }
#line 2490 "CMDgram.cpp"
    break;

  case 38: /* datablock_decl: rwDATABLOCK class_name_expr '(' expr parent_block ')' '{' slot_assign_list_opt '}' ';'  */
#line 327 "CMDgram.y"
      { (yyval.stmt) = ObjectDeclNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-8].expr), (yyvsp[-6].expr), NULL, (yyvsp[-5].s).value, (yyvsp[-2].slist), NULL, true, false, false); }
#line 2496 "CMDgram.cpp"
    break;

  case 39: /* object_decl: rwDECLARE class_name_expr '(' object_name parent_block object_args ')' '{' object_declare_block '}'  */
#line 332 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-8].expr), (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-5].s).value, (yyvsp[-1].odcl).slots, (yyvsp[-1].odcl).decls, false, false, false); }
#line 2502 "CMDgram.cpp"
    break;

  case 40: /* object_decl: rwDECLARE class_name_expr '(' object_name parent_block object_args ')'  */
#line 334 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[-2].s).value, NULL, NULL, false, false, false); }
#line 2508 "CMDgram.cpp"
    break;

  case 41: /* object_decl: rwDECLARE class_name_expr '(' '[' object_name ']' parent_block object_args ')' '{' object_declare_block '}'  */
#line 336 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-11].i).lineNumber, (yyvsp[-10].expr), (yyvsp[-7].expr), (yyvsp[-4].expr), (yyvsp[-5].s).value, (yyvsp[-1].odcl).slots, (yyvsp[-1].odcl).decls, false, true, false); }
#line 2514 "CMDgram.cpp"
    break;

  case 42: /* object_decl: rwDECLARE class_name_expr '(' '[' object_name ']' parent_block object_args ')'  */
#line 338 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-8].i).lineNumber, (yyvsp[-7].expr), (yyvsp[-4].expr), (yyvsp[-1].expr), (yyvsp[-2].s).value, NULL, NULL, false, true, false); }
#line 2520 "CMDgram.cpp"
    break;

  case 43: /* object_decl: rwDECLARESINGLETON class_name_expr '(' object_name parent_block object_args ')' '{' object_declare_block '}'  */
#line 340 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-8].expr), (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-5].s).value, (yyvsp[-1].odcl).slots, (yyvsp[-1].odcl).decls, false, false, true); }
#line 2526 "CMDgram.cpp"
    break;

  case 44: /* object_decl: rwDECLARESINGLETON class_name_expr '(' object_name parent_block object_args ')'  */
#line 342 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[-2].s).value, NULL, NULL, false, false, true); }
#line 2532 "CMDgram.cpp"
    break;

  case 45: /* parent_block: %empty  */
#line 347 "CMDgram.y"
      { (yyval.s).value = NULL; }
#line 2538 "CMDgram.cpp"
    break;

  case 46: /* parent_block: ':' IDENT  */
#line 349 "CMDgram.y"
      { (yyval.s) = (yyvsp[0].s); }
#line 2544 "CMDgram.cpp"
    break;

  case 47: /* object_name: %empty  */
#line 354 "CMDgram.y"
      { (yyval.expr) = StrConstNode::alloc( CodeBlock::smCurrentParser->getCurrentLine(), "", false); }
#line 2550 "CMDgram.cpp"
    break;

  case 48: /* object_name: expr  */
#line 356 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 2556 "CMDgram.cpp"
    break;

  case 49: /* object_args: %empty  */
#line 361 "CMDgram.y"
      { (yyval.expr) = NULL; }
#line 2562 "CMDgram.cpp"
    break;

  case 50: /* object_args: ',' expr_list  */
#line 363 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 2568 "CMDgram.cpp"
    break;

  case 51: /* object_declare_block: %empty  */
#line 368 "CMDgram.y"
      { (yyval.odcl).slots = NULL; (yyval.odcl).decls = NULL; }
#line 2574 "CMDgram.cpp"
    break;

  case 52: /* object_declare_block: slot_assign_list  */
#line 370 "CMDgram.y"
      { (yyval.odcl).slots = (yyvsp[0].slist); (yyval.odcl).decls = NULL; }
#line 2580 "CMDgram.cpp"
    break;

  case 53: /* object_declare_block: object_decl_list  */
#line 372 "CMDgram.y"
      { (yyval.odcl).slots = NULL; (yyval.odcl).decls = (yyvsp[0].od); }
#line 2586 "CMDgram.cpp"
    break;

  case 54: /* object_declare_block: slot_assign_list object_decl_list  */
#line 374 "CMDgram.y"
      { (yyval.odcl).slots = (yyvsp[-1].slist); (yyval.odcl).decls = (yyvsp[0].od); }
#line 2592 "CMDgram.cpp"
    break;

  case 55: /* object_decl_list: object_decl ';'  */
#line 379 "CMDgram.y"
      { (yyval.od) = (yyvsp[-1].od); }
#line 2598 "CMDgram.cpp"
    break;

  case 56: /* object_decl_list: object_decl_list object_decl ';'  */
#line 381 "CMDgram.y"
      { (yyvsp[-2].od)->append((yyvsp[-1].od)); (yyval.od) = (yyvsp[-2].od); }
#line 2604 "CMDgram.cpp"
    break;

  case 57: /* stmt_block: '{' statement_list '}'  */
#line 386 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 2610 "CMDgram.cpp"
    break;

  case 58: /* stmt_block: stmt  */
#line 388 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2616 "CMDgram.cpp"
    break;

  case 59: /* switch_stmt: rwSWITCH '(' expr ')' '{' case_block '}'  */
#line 393 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].ifnode); (yyvsp[-1].ifnode)->propagateSwitchExpr((yyvsp[-4].expr), false); }
#line 2622 "CMDgram.cpp"
    break;

  case 60: /* switch_stmt: rwSWITCHSTR '(' expr ')' '{' case_block '}'  */
#line 395 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].ifnode); (yyvsp[-1].ifnode)->propagateSwitchExpr((yyvsp[-4].expr), true); }
#line 2628 "CMDgram.cpp"
    break;

  case 61: /* case_block: rwCASE case_expr ':' statement_list  */
#line 403 "CMDgram.y"
      { (yyval.ifnode) = IfStmtNode::alloc( (yyvsp[-3].i).lineNumber, (yyvsp[-2].expr), (yyvsp[0].stmt), NULL, false); }
#line 2634 "CMDgram.cpp"
    break;

  case 62: /* case_block: rwCASE case_expr ':' statement_list rwDEFAULT ':' statement_list  */
#line 405 "CMDgram.y"
      { (yyval.ifnode) = IfStmtNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].stmt), (yyvsp[0].stmt), false); }
#line 2640 "CMDgram.cpp"
    break;

  case 63: /* case_block: rwCASE case_expr ':' statement_list case_block  */
#line 407 "CMDgram.y"
      { (yyval.ifnode) = IfStmtNode::alloc( (yyvsp[-4].i).lineNumber, (yyvsp[-3].expr), (yyvsp[-1].stmt), (yyvsp[0].ifnode), true); }
#line 2646 "CMDgram.cpp"
    break;

  case 64: /* case_expr: expr  */
#line 412 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 2652 "CMDgram.cpp"
    break;

  case 65: /* case_expr: case_expr rwCASEOR expr  */
#line 414 "CMDgram.y"
      { ((yyvsp[-2].expr))->append((yyvsp[0].expr)); (yyval.expr) = (yyvsp[-2].expr); }
#line 2658 "CMDgram.cpp"
    break;

  case 66: /* if_stmt: rwIF '(' expr ')' stmt_block  */
#line 419 "CMDgram.y"
      { (yyval.stmt) = IfStmtNode::alloc((yyvsp[-4].i).lineNumber, (yyvsp[-2].expr), (yyvsp[0].stmt), NULL, false); }
#line 2664 "CMDgram.cpp"
    break;

  case 67: /* if_stmt: rwIF '(' expr ')' stmt_block rwELSE stmt_block  */
#line 421 "CMDgram.y"
      { (yyval.stmt) = IfStmtNode::alloc((yyvsp[-6].i).lineNumber, (yyvsp[-4].expr), (yyvsp[-2].stmt), (yyvsp[0].stmt), false); }
#line 2670 "CMDgram.cpp"
    break;

  case 68: /* while_stmt: rwWHILE '(' expr ')' stmt_block  */
#line 426 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-4].i).lineNumber, nil, (yyvsp[-2].expr), nil, (yyvsp[0].stmt), false); }
#line 2676 "CMDgram.cpp"
    break;

  case 69: /* while_stmt: rwDO stmt_block rwWHILE '(' expr ')'  */
#line 428 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-3].i).lineNumber, nil, (yyvsp[-1].expr), nil, (yyvsp[-4].stmt), true); }
#line 2682 "CMDgram.cpp"
    break;

  case 70: /* for_stmt: rwFOR '(' expr ';' expr ';' expr ')' stmt_block  */
#line 433 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-8].i).lineNumber, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 2688 "CMDgram.cpp"
    break;

  case 71: /* for_stmt: rwFOR '(' expr ';' expr ';' ')' stmt_block  */
#line 435 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].expr), NULL, (yyvsp[0].stmt), false); }
#line 2694 "CMDgram.cpp"
    break;

  case 72: /* for_stmt: rwFOR '(' expr ';' ';' expr ')' stmt_block  */
#line 437 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].expr), NULL, (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 2700 "CMDgram.cpp"
    break;

  case 73: /* for_stmt: rwFOR '(' expr ';' ';' ')' stmt_block  */
#line 439 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-6].i).lineNumber, (yyvsp[-4].expr), NULL, NULL, (yyvsp[0].stmt), false); }
#line 2706 "CMDgram.cpp"
    break;

  case 74: /* for_stmt: rwFOR '(' ';' expr ';' expr ')' stmt_block  */
#line 441 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-7].i).lineNumber, NULL, (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 2712 "CMDgram.cpp"
    break;

  case 75: /* for_stmt: rwFOR '(' ';' expr ';' ')' stmt_block  */
#line 443 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-6].i).lineNumber, NULL, (yyvsp[-3].expr), NULL, (yyvsp[0].stmt), false); }
#line 2718 "CMDgram.cpp"
    break;

  case 76: /* for_stmt: rwFOR '(' ';' ';' expr ')' stmt_block  */
#line 445 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-6].i).lineNumber, NULL, NULL, (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 2724 "CMDgram.cpp"
    break;

  case 77: /* for_stmt: rwFOR '(' ';' ';' ')' stmt_block  */
#line 447 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-5].i).lineNumber, NULL, NULL, NULL, (yyvsp[0].stmt), false); }
#line 2730 "CMDgram.cpp"
    break;

  case 78: /* foreach_stmt: rwFOREACH '(' VAR rwIN expr ')' stmt_block  */
#line 458 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-4].s).value, (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 0 ); }
#line 2736 "CMDgram.cpp"
    break;

  case 79: /* foreach_stmt: rwFOREACHSTR '(' VAR rwIN expr ')' stmt_block  */
#line 460 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-4].s).value, (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 1 ); }
#line 2742 "CMDgram.cpp"
    break;

  case 80: /* foreach_stmt: rwFOREACH '(' VAR rwIN expr opDOTDOT expr ')' stmt_block  */
#line 462 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-8].i).lineNumber, (yyvsp[-6].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 2 ); }
#line 2748 "CMDgram.cpp"
    break;

  case 81: /* foreach_stmt: rwFOREACH '(' VAR rwIN rwRANGE expr opDOTDOT expr ')' stmt_block  */
#line 464 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-9].i).lineNumber, (yyvsp[-7].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), -2 ); }
#line 2754 "CMDgram.cpp"
    break;

  case 82: /* expression_stmt: stmt_expr  */
#line 469 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].expr); }
#line 2760 "CMDgram.cpp"
    break;

  case 83: /* expr: stmt_expr  */
#line 474 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 2766 "CMDgram.cpp"
    break;

  case 84: /* expr: '(' expr ')'  */
#line 476 "CMDgram.y"
      { (yyval.expr) = (yyvsp[-1].expr); }
#line 2772 "CMDgram.cpp"
    break;

  case 85: /* expr: expr '^' expr  */
#line 478 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2778 "CMDgram.cpp"
    break;

  case 86: /* expr: expr '%' expr  */
#line 480 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2784 "CMDgram.cpp"
    break;

  case 87: /* expr: expr '&' expr  */
#line 482 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2790 "CMDgram.cpp"
    break;

  case 88: /* expr: expr '|' expr  */
#line 484 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2796 "CMDgram.cpp"
    break;

  case 89: /* expr: expr '+' expr  */
#line 486 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2802 "CMDgram.cpp"
    break;

  case 90: /* expr: expr '-' expr  */
#line 488 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2808 "CMDgram.cpp"
    break;

  case 91: /* expr: expr '*' expr  */
#line 490 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2814 "CMDgram.cpp"
    break;

  case 92: /* expr: expr '/' expr  */
#line 492 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2820 "CMDgram.cpp"
    break;

  case 93: /* expr: '-' expr  */
#line 494 "CMDgram.y"
      { (yyval.expr) = FloatUnaryExprNode::alloc( (yyvsp[-1].i).lineNumber, (yyvsp[-1].i).value, (yyvsp[0].expr)); }
#line 2826 "CMDgram.cpp"
    break;

  case 94: /* expr: '*' expr  */
#line 496 "CMDgram.y"
      { (yyval.expr) = TTagDerefNode::alloc( (yyvsp[-1].i).lineNumber, (yyvsp[0].expr) ); }
#line 2832 "CMDgram.cpp"
    break;

  case 95: /* expr: TTAG  */
#line 498 "CMDgram.y"
      { (yyval.expr) = TTagExprNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value ); }
#line 2838 "CMDgram.cpp"
    break;

  case 96: /* expr: expr '?' expr ':' expr  */
#line 500 "CMDgram.y"
      { (yyval.expr) = ConditionalExprNode::alloc( (yyvsp[-4].expr)->dbgLineNumber, (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2844 "CMDgram.cpp"
    break;

  case 97: /* expr: expr '<' expr  */
#line 502 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2850 "CMDgram.cpp"
    break;

  case 98: /* expr: expr '>' expr  */
#line 504 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2856 "CMDgram.cpp"
    break;

  case 99: /* expr: expr opGE expr  */
#line 506 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2862 "CMDgram.cpp"
    break;

  case 100: /* expr: expr opLE expr  */
#line 508 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2868 "CMDgram.cpp"
    break;

  case 101: /* expr: expr opEQ expr  */
#line 510 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2874 "CMDgram.cpp"
    break;

  case 102: /* expr: expr opNE expr  */
#line 512 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2880 "CMDgram.cpp"
    break;

  case 103: /* expr: expr opOR expr  */
#line 514 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2886 "CMDgram.cpp"
    break;

  case 104: /* expr: expr opSHL expr  */
#line 516 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2892 "CMDgram.cpp"
    break;

  case 105: /* expr: expr opSHR expr  */
#line 518 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2898 "CMDgram.cpp"
    break;

  case 106: /* expr: expr opAND expr  */
#line 520 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2904 "CMDgram.cpp"
    break;

  case 107: /* expr: expr opSTREQ expr  */
#line 522 "CMDgram.y"
      { (yyval.expr) = StreqExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr), true); }
#line 2910 "CMDgram.cpp"
    break;

  case 108: /* expr: expr opSTRNE expr  */
#line 524 "CMDgram.y"
      { (yyval.expr) = StreqExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr), false); }
#line 2916 "CMDgram.cpp"
    break;

  case 109: /* expr: expr '@' expr  */
#line 532 "CMDgram.y"
      { (yyval.expr) = StrcatExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].i).value); }
#line 2922 "CMDgram.cpp"
    break;

  case 110: /* expr: '!' expr  */
#line 534 "CMDgram.y"
      { (yyval.expr) = IntUnaryExprNode::alloc((yyvsp[-1].i).lineNumber, (yyvsp[-1].i).value, (yyvsp[0].expr)); }
#line 2928 "CMDgram.cpp"
    break;

  case 111: /* expr: '~' expr  */
#line 536 "CMDgram.y"
      { (yyval.expr) = IntUnaryExprNode::alloc((yyvsp[-1].i).lineNumber, (yyvsp[-1].i).value, (yyvsp[0].expr)); }
#line 2934 "CMDgram.cpp"
    break;

  case 112: /* expr: TAGATOM  */
#line 538 "CMDgram.y"
      { (yyval.expr) = StrConstNode::alloc( (yyvsp[0].str).lineNumber, (yyvsp[0].str).value, true); }
#line 2940 "CMDgram.cpp"
    break;

  case 113: /* expr: FLTCONST  */
#line 540 "CMDgram.y"
      { (yyval.expr) = FloatNode::alloc( (yyvsp[0].f).lineNumber, (yyvsp[0].f).value ); }
#line 2946 "CMDgram.cpp"
    break;

  case 114: /* expr: INTCONST  */
#line 542 "CMDgram.y"
      { (yyval.expr) = IntNode::alloc( (yyvsp[0].i).lineNumber, (yyvsp[0].i).value ); }
#line 2952 "CMDgram.cpp"
    break;

  case 115: /* expr: rwBREAK  */
#line 544 "CMDgram.y"
      { (yyval.expr) = ConstantNode::alloc( (yyvsp[0].i).lineNumber, StringTable->insert("break")); }
#line 2958 "CMDgram.cpp"
    break;

  case 116: /* expr: slot_acc  */
#line 546 "CMDgram.y"
      { (yyval.expr) = SlotAccessNode::alloc( (yyvsp[0].slot).lineNumber, (yyvsp[0].slot).object, (yyvsp[0].slot).array, (yyvsp[0].slot).slotName ); }
#line 2964 "CMDgram.cpp"
    break;

  case 117: /* expr: intslot_acc  */
#line 548 "CMDgram.y"
      { (yyval.expr) = InternalSlotAccessNode::alloc( (yyvsp[0].intslot).lineNumber, (yyvsp[0].intslot).object, (yyvsp[0].intslot).slotExpr, (yyvsp[0].intslot).recurse); }
#line 2970 "CMDgram.cpp"
    break;

  case 118: /* expr: IDENT  */
#line 550 "CMDgram.y"
      { (yyval.expr) = ConstantNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value ); }
#line 2976 "CMDgram.cpp"
    break;

  case 119: /* expr: STRATOM  */
#line 552 "CMDgram.y"
      { (yyval.expr) = StrConstNode::alloc( (yyvsp[0].str).lineNumber, (yyvsp[0].str).value, false); }
#line 2982 "CMDgram.cpp"
    break;

  case 120: /* expr: VAR  */
#line 554 "CMDgram.y"
      { (yyval.expr) = (ExprNode*)VarNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value, NULL); }
#line 2988 "CMDgram.cpp"
    break;

  case 121: /* expr: VAR '[' aidx_expr ']'  */
#line 556 "CMDgram.y"
      { (yyval.expr) = (ExprNode*)VarNode::alloc( (yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[-1].expr) ); }
#line 2994 "CMDgram.cpp"
    break;

  case 122: /* slot_acc: expr '.' IDENT  */
#line 562 "CMDgram.y"
      { (yyval.slot).lineNumber = (yyvsp[-2].expr)->dbgLineNumber; (yyval.slot).object = (yyvsp[-2].expr); (yyval.slot).slotName = (yyvsp[0].s).value; (yyval.slot).array = NULL; }
#line 3000 "CMDgram.cpp"
    break;

  case 123: /* slot_acc: expr '.' IDENT '[' aidx_expr ']'  */
#line 564 "CMDgram.y"
      { (yyval.slot).lineNumber = (yyvsp[-5].expr)->dbgLineNumber; (yyval.slot).object = (yyvsp[-5].expr); (yyval.slot).slotName = (yyvsp[-3].s).value; (yyval.slot).array = (yyvsp[-1].expr); }
#line 3006 "CMDgram.cpp"
    break;

  case 124: /* intslot_acc: expr opINTNAME class_name_expr  */
#line 569 "CMDgram.y"
      { (yyval.intslot).lineNumber = (yyvsp[-2].expr)->dbgLineNumber; (yyval.intslot).object = (yyvsp[-2].expr); (yyval.intslot).slotExpr = (yyvsp[0].expr); (yyval.intslot).recurse = false; }
#line 3012 "CMDgram.cpp"
    break;

  case 125: /* intslot_acc: expr opINTNAMER class_name_expr  */
#line 571 "CMDgram.y"
      { (yyval.intslot).lineNumber = (yyvsp[-2].expr)->dbgLineNumber; (yyval.intslot).object = (yyvsp[-2].expr); (yyval.intslot).slotExpr = (yyvsp[0].expr); (yyval.intslot).recurse = true; }
#line 3018 "CMDgram.cpp"
    break;

  case 126: /* class_name_expr: IDENT  */
#line 576 "CMDgram.y"
      { (yyval.expr) = ConstantNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value ); }
#line 3024 "CMDgram.cpp"
    break;

  case 127: /* class_name_expr: '(' expr ')'  */
#line 578 "CMDgram.y"
      { (yyval.expr) = (yyvsp[-1].expr); }
#line 3030 "CMDgram.cpp"
    break;

  case 128: /* assign_op_struct: opPLUSPLUS  */
#line 583 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[0].i).lineNumber; (yyval.asn).token = opPLUSPLUS; (yyval.asn).expr = FloatNode::alloc( (yyvsp[0].i).lineNumber, 1 ); }
#line 3036 "CMDgram.cpp"
    break;

  case 129: /* assign_op_struct: opMINUSMINUS  */
#line 585 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[0].i).lineNumber; (yyval.asn).token = opMINUSMINUS; (yyval.asn).expr = FloatNode::alloc( (yyvsp[0].i).lineNumber, 1 ); }
#line 3042 "CMDgram.cpp"
    break;

  case 130: /* assign_op_struct: opPLASN expr  */
#line 587 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '+'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3048 "CMDgram.cpp"
    break;

  case 131: /* assign_op_struct: opMIASN expr  */
#line 589 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '-'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3054 "CMDgram.cpp"
    break;

  case 132: /* assign_op_struct: opMLASN expr  */
#line 591 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '*'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3060 "CMDgram.cpp"
    break;

  case 133: /* assign_op_struct: opDVASN expr  */
#line 593 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '/'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3066 "CMDgram.cpp"
    break;

  case 134: /* assign_op_struct: opMODASN expr  */
#line 595 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '%'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3072 "CMDgram.cpp"
    break;

  case 135: /* assign_op_struct: opANDASN expr  */
#line 597 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '&'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3078 "CMDgram.cpp"
    break;

  case 136: /* assign_op_struct: opXORASN expr  */
#line 599 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '^'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3084 "CMDgram.cpp"
    break;

  case 137: /* assign_op_struct: opORASN expr  */
#line 601 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '|'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3090 "CMDgram.cpp"
    break;

  case 138: /* assign_op_struct: opSLASN expr  */
#line 603 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = opSHL; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3096 "CMDgram.cpp"
    break;

  case 139: /* assign_op_struct: opSRASN expr  */
#line 605 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = opSHR; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3102 "CMDgram.cpp"
    break;

  case 140: /* stmt_expr: funcall_expr  */
#line 611 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3108 "CMDgram.cpp"
    break;

  case 141: /* stmt_expr: assert_expr  */
#line 613 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3114 "CMDgram.cpp"
    break;

  case 142: /* stmt_expr: object_decl  */
#line 615 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].od); }
#line 3120 "CMDgram.cpp"
    break;

  case 143: /* stmt_expr: VAR '=' expr  */
#line 617 "CMDgram.y"
      { (yyval.expr) = AssignExprNode::alloc( (yyvsp[-2].s).lineNumber, (yyvsp[-2].s).value, NULL, (yyvsp[0].expr)); }
#line 3126 "CMDgram.cpp"
    break;

  case 144: /* stmt_expr: VAR '=' '{' expr_list '}'  */
#line 621 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-4].s).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-1].expr);
//          for (ExprNode* expr = (ExprNode*)$4; expr; expr = (ExprNode*)(expr->next)) {
//              vecNode->elements.push_back(expr);
//          }
         (yyval.expr) = AssignExprNode::alloc( (yyvsp[-4].s).lineNumber, (yyvsp[-4].s).value, NULL, vecNode);
      }
#line 3139 "CMDgram.cpp"
    break;

  case 145: /* stmt_expr: VAR '[' aidx_expr ']' '=' expr  */
#line 632 "CMDgram.y"
      { (yyval.expr) = AssignExprNode::alloc( (yyvsp[-5].s).lineNumber, (yyvsp[-5].s).value, (yyvsp[-3].expr), (yyvsp[0].expr)); }
#line 3145 "CMDgram.cpp"
    break;

  case 146: /* stmt_expr: VAR '[' aidx_expr ']' '=' '{' expr_list '}'  */
#line 636 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-7].s).lineNumber);
          vecNode->argList = (ExprNode*)(yyvsp[-1].expr);
//          for (ExprNode* expr = (ExprNode*)$7; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.expr) = AssignExprNode::alloc( (yyvsp[-7].s).lineNumber, (yyvsp[-7].s).value, (yyvsp[-5].expr), vecNode);
      }
#line 3158 "CMDgram.cpp"
    break;

  case 147: /* stmt_expr: VAR assign_op_struct  */
#line 647 "CMDgram.y"
      { (yyval.expr) = AssignOpExprNode::alloc( (yyvsp[-1].s).lineNumber, (yyvsp[-1].s).value, NULL, (yyvsp[0].asn).expr, (yyvsp[0].asn).token); }
#line 3164 "CMDgram.cpp"
    break;

  case 148: /* stmt_expr: VAR '[' aidx_expr ']' assign_op_struct  */
#line 649 "CMDgram.y"
      { (yyval.expr) = AssignOpExprNode::alloc( (yyvsp[-4].s).lineNumber, (yyvsp[-4].s).value, (yyvsp[-2].expr), (yyvsp[0].asn).expr, (yyvsp[0].asn).token); }
#line 3170 "CMDgram.cpp"
    break;

  case 149: /* stmt_expr: slot_acc assign_op_struct  */
#line 651 "CMDgram.y"
      { (yyval.expr) = SlotAssignOpNode::alloc( (yyvsp[-1].slot).lineNumber, (yyvsp[-1].slot).object, (yyvsp[-1].slot).slotName, (yyvsp[-1].slot).array, (yyvsp[0].asn).token, (yyvsp[0].asn).expr); }
#line 3176 "CMDgram.cpp"
    break;

  case 150: /* stmt_expr: slot_acc '=' expr  */
#line 653 "CMDgram.y"
      { (yyval.expr) = SlotAssignNode::alloc( (yyvsp[-2].slot).lineNumber, (yyvsp[-2].slot).object, (yyvsp[-2].slot).array, (yyvsp[-2].slot).slotName, (yyvsp[0].expr)); }
#line 3182 "CMDgram.cpp"
    break;

  case 151: /* stmt_expr: slot_acc '=' '{' expr_list '}'  */
#line 655 "CMDgram.y"
      { (yyval.expr) = SlotAssignNode::alloc( (yyvsp[-4].slot).lineNumber, (yyvsp[-4].slot).object, (yyvsp[-4].slot).array, (yyvsp[-4].slot).slotName, (yyvsp[-1].expr)); }
#line 3188 "CMDgram.cpp"
    break;

  case 152: /* funcall_expr: IDENT '(' func_arg_list_decl ')'  */
#line 687 "CMDgram.y"
      { (yyval.expr) = FuncCallExprNode::alloc( (yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, NULL, (yyvsp[-1].expr), false); }
#line 3194 "CMDgram.cpp"
    break;

  case 153: /* funcall_expr: IDENT opCOLONCOLON IDENT '(' func_arg_list_decl ')'  */
#line 690 "CMDgram.y"
      { (yyval.expr) = FuncCallExprNode::alloc( (yyvsp[-5].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[-5].s).value, (yyvsp[-1].expr), false); }
#line 3200 "CMDgram.cpp"
    break;

  case 154: /* funcall_expr: expr '.' IDENT '(' func_arg_list_decl ')'  */
#line 693 "CMDgram.y"
      { (yyvsp[-5].expr)->append((yyvsp[-1].expr)); (yyval.expr) = FuncCallExprNode::alloc( (yyvsp[-5].expr)->dbgLineNumber, (yyvsp[-3].s).value, NULL, (yyvsp[-5].expr), true); }
#line 3206 "CMDgram.cpp"
    break;

  case 155: /* func_arg_item: expr  */
#line 699 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3212 "CMDgram.cpp"
    break;

  case 156: /* func_arg_item: '{' expr_list '}'  */
#line 701 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-2].i).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-1].expr);
//          for (ExprNode* expr = (ExprNode*)$2; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.expr) = vecNode;
      }
#line 3225 "CMDgram.cpp"
    break;

  case 157: /* func_arg_list: func_arg_item  */
#line 713 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3231 "CMDgram.cpp"
    break;

  case 158: /* func_arg_list: func_arg_list ',' func_arg_item  */
#line 715 "CMDgram.y"
      { ((yyvsp[-2].expr))->append((yyvsp[0].expr)); (yyval.expr) = (yyvsp[-2].expr); }
#line 3237 "CMDgram.cpp"
    break;

  case 159: /* func_arg_list_decl: %empty  */
#line 720 "CMDgram.y"
      { (yyval.expr) = NULL; }
#line 3243 "CMDgram.cpp"
    break;

  case 160: /* func_arg_list_decl: func_arg_list  */
#line 722 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3249 "CMDgram.cpp"
    break;

  case 161: /* assert_expr: rwASSERT '(' expr ')'  */
#line 743 "CMDgram.y"
      { (yyval.expr) = AssertCallExprNode::alloc( (yyvsp[-3].i).lineNumber, (yyvsp[-1].expr), NULL ); }
#line 3255 "CMDgram.cpp"
    break;

  case 162: /* assert_expr: rwASSERT '(' expr ',' STRATOM ')'  */
#line 745 "CMDgram.y"
      { (yyval.expr) = AssertCallExprNode::alloc( (yyvsp[-5].i).lineNumber, (yyvsp[-3].expr), (yyvsp[-1].str).value ); }
#line 3261 "CMDgram.cpp"
    break;

  case 163: /* expr_list: expr  */
#line 757 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3267 "CMDgram.cpp"
    break;

  case 164: /* expr_list: expr_list ',' expr  */
#line 759 "CMDgram.y"
      { ((yyvsp[-2].expr))->append((yyvsp[0].expr)); (yyval.expr) = (yyvsp[-2].expr); }
#line 3273 "CMDgram.cpp"
    break;

  case 165: /* slot_assign_list_opt: %empty  */
#line 764 "CMDgram.y"
      { (yyval.slist) = NULL; }
#line 3279 "CMDgram.cpp"
    break;

  case 166: /* slot_assign_list_opt: slot_assign_list  */
#line 766 "CMDgram.y"
      { (yyval.slist) = (yyvsp[0].slist); }
#line 3285 "CMDgram.cpp"
    break;

  case 167: /* slot_assign_list: slot_assign  */
#line 771 "CMDgram.y"
      { (yyval.slist) = (yyvsp[0].slist); }
#line 3291 "CMDgram.cpp"
    break;

  case 168: /* slot_assign_list: slot_assign_list slot_assign  */
#line 773 "CMDgram.y"
      { (yyvsp[-1].slist)->append((yyvsp[0].slist)); (yyval.slist) = (yyvsp[-1].slist); }
#line 3297 "CMDgram.cpp"
    break;

  case 169: /* slot_assign: IDENT '=' expr ';'  */
#line 779 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-3].s).lineNumber, NULL, NULL, (yyvsp[-3].s).value, (yyvsp[-1].expr)); }
#line 3303 "CMDgram.cpp"
    break;

  case 170: /* slot_assign: IDENT '=' '{' expr_list '}' ';'  */
#line 783 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-5].s).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
//          for (ExprNode* expr = (ExprNode*)$4; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-5].s).lineNumber, NULL, NULL, (yyvsp[-5].s).value, vecNode);
      }
#line 3316 "CMDgram.cpp"
    break;

  case 171: /* slot_assign: TYPEIDENT IDENT '=' expr ';'  */
#line 794 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-4].i).lineNumber, NULL, NULL, (yyvsp[-3].s).value, (yyvsp[-1].expr), (yyvsp[-4].i).value); }
#line 3322 "CMDgram.cpp"
    break;

  case 172: /* slot_assign: TYPEIDENT IDENT '=' '{' expr_list '}' ';'  */
#line 798 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-6].i).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
//          for (ExprNode* expr = (ExprNode*)$5; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-6].i).lineNumber, NULL, NULL, (yyvsp[-5].s).value, vecNode, (yyvsp[-6].i).value);
      }
#line 3335 "CMDgram.cpp"
    break;

  case 173: /* slot_assign: rwDATABLOCK '=' expr ';'  */
#line 809 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-3].i).lineNumber, NULL, NULL, StringTable->insert("datablock"), (yyvsp[-1].expr)); }
#line 3341 "CMDgram.cpp"
    break;

  case 174: /* slot_assign: IDENT '[' aidx_expr ']' '=' expr ';'  */
#line 811 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-6].s).lineNumber, NULL, (yyvsp[-4].expr), (yyvsp[-6].s).value, (yyvsp[-1].expr)); }
#line 3347 "CMDgram.cpp"
    break;

  case 175: /* slot_assign: IDENT '[' aidx_expr ']' '=' '{' expr_list '}' ';'  */
#line 815 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-8].s).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
//          for (ExprNode* expr = (ExprNode*)$7; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-8].s).lineNumber, NULL, (yyvsp[-6].expr), (yyvsp[-8].s).value, vecNode);
      }
#line 3360 "CMDgram.cpp"
    break;

  case 176: /* slot_assign: TYPEIDENT IDENT '[' aidx_expr ']' '=' expr ';'  */
#line 826 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-7].i).lineNumber, NULL, (yyvsp[-4].expr), (yyvsp[-6].s).value, (yyvsp[-1].expr), (yyvsp[-7].i).value); }
#line 3366 "CMDgram.cpp"
    break;

  case 177: /* aidx_expr: expr  */
#line 849 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3372 "CMDgram.cpp"
    break;

  case 178: /* aidx_expr: aidx_expr ',' expr  */
#line 851 "CMDgram.y"
      { (yyval.expr) = CommaCatExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3378 "CMDgram.cpp"
    break;


#line 3382 "CMDgram.cpp"

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

#line 854 "CMDgram.y"


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
