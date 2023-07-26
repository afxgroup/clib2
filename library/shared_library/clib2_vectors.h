static void *clib2Vectors[] = {
        (void *) (clib2Obtain),
        (void *) (clib2Release),
        (void *) (NULL),
        (void *) (NULL),
        /* internal */
        (void *) (library_start),
        (void *) (__getClib2),
        (void *) (libReserved),
        (void *) (__translate_amiga_to_unix_path_name),
        (void *) (__translate_unix_to_amiga_path_name),
        (void *) (libReserved),
        (void *) (__print_termination_message),
        (void *) (libReserved),
        (void *) (libReserved),
        (void *) (libReserved),

        /* argz.h */
        (void *) (argz_create),                           /* 116 */
        (void *) (argz_create_sep),                       /* 120 */
        (void *) (argz_count),                            /* 124 */
        (void *) (argz_extract),                          /* 128 */
        (void *) (argz_stringify),                        /* 132 */
        (void *) (argz_add),                              /* 136 */
        (void *) (argz_add_sep),                          /* 140 */
        (void *) (argz_append),                           /* 144 */
        (void *) (argz_delete),                           /* 148 */
        (void *) (argz_insert),                           /* 152 */
        (void *) (argz_next),                             /* 156 */
        (void *) (argz_replace),                          /* 160 */
        /* assert.h */
        (void *) (__assertion_failure),                   /* 164 */
        /* complex.h */
        (void *) (cacos),                                 /* 168 */
        (void *) (cacosf),                                /* 172 */
        (void *) (cacosl),                                /* 176 */
        (void *) (casin),                                 /* 180 */
        (void *) (casinf),                                /* 184 */
        (void *) (casinl),                                /* 188 */
        (void *) (catan),                                 /* 192 */
        (void *) (catanf),                                /* 196 */
        (void *) (catanl),                                /* 200 */
        (void *) (ccos),                                  /* 204 */
        (void *) (ccosf),                                 /* 208 */
        (void *) (ccosl),                                 /* 212 */
        (void *) (csin),                                  /* 216 */
        (void *) (csinf),                                 /* 220 */
        (void *) (csinl),                                 /* 224 */
        (void *) (ctan),                                  /* 228 */
        (void *) (ctanf),                                 /* 232 */
        (void *) (ctanl),                                 /* 236 */
        (void *) (cacosh),                                /* 240 */
        (void *) (cacoshf),                               /* 244 */
        (void *) (cacoshl),                               /* 248 */
        (void *) (casinh),                                /* 252 */
        (void *) (casinhf),                               /* 256 */
        (void *) (casinhl),                               /* 260 */
        (void *) (catanh),                                /* 264 */
        (void *) (catanhf),                               /* 268 */
        (void *) (catanhl),                               /* 272 */
        (void *) (ccosh),                                 /* 276 */
        (void *) (ccoshf),                                /* 280 */
        (void *) (ccoshl),                                /* 284 */
        (void *) (csinh),                                 /* 288 */
        (void *) (csinhf),                                /* 292 */
        (void *) (csinhl),                                /* 296 */
        (void *) (ctanh),                                 /* 300 */
        (void *) (ctanhf),                                /* 304 */
        (void *) (ctanhl),                                /* 308 */
        (void *) (cexp),                                  /* 312 */
        (void *) (cexpf),                                 /* 316 */
        (void *) (cexpl),                                 /* 320 */
        (void *) (clog),                                  /* 324 */
        (void *) (clogf),                                 /* 328 */
        (void *) (clogl),                                 /* 332 */
        (void *) (cabs),                                  /* 336 */
        (void *) (cabsf),                                 /* 340 */
        (void *) (cabsl),                                 /* 344 */
        (void *) (cpow),                                  /* 348 */
        (void *) (cpowf),                                 /* 352 */
        (void *) (cpowl),                                 /* 356 */
        (void *) (csqrt),                                 /* 360 */
        (void *) (csqrtf),                                /* 364 */
        (void *) (csqrtl),                                /* 368 */
        (void *) (carg),                                  /* 372 */
        (void *) (cargf),                                 /* 376 */
        (void *) (cargl),                                 /* 380 */
        (void *) (conj),                                  /* 384 */
        (void *) (conjf),                                 /* 388 */
        (void *) (conjl),                                 /* 392 */
        (void *) (cproj),                                 /* 396 */
        (void *) (cprojf),                                /* 400 */
        (void *) (cprojl),                                /* 404 */
        (void *) (cimag),                                 /* 408 */
        (void *) (cimagf),                                /* 412 */
        (void *) (cimagl),                                /* 416 */
        (void *) (creal),                                 /* 420 */
        (void *) (crealf),                                /* 424 */
        (void *) (creall),                                /* 428 */
        /* crypt.h */
        (void *) (crypt_r),                               /* 432 */
        /* ctype.h */
        (void *) (isalnum),                               /* 436 */
        (void *) (isalpha),                               /* 440 */
        (void *) (iscntrl),                               /* 444 */
        (void *) (isdigit),                               /* 448 */
        (void *) (isgraph),                               /* 452 */
        (void *) (islower),                               /* 456 */
        (void *) (isprint),                               /* 460 */
        (void *) (ispunct),                               /* 464 */
        (void *) (isspace),                               /* 468 */
        (void *) (isupper),                               /* 472 */
        (void *) (isxdigit),                              /* 476 */
        (void *) (tolower),                               /* 480 */
        (void *) (toupper),                               /* 484 */
        (void *) (isblank),                               /* 488 */
        (void *) (isascii),                               /* 492 */
        (void *) (toascii),                               /* 496 */
        /* dirent.h */
        (void *) (opendir),                               /* 500 */
        (void *) (readdir),                               /* 504 */
        (void *) (rewinddir),                             /* 508 */
        (void *) (closedir),                              /* 512 */
        (void *) (fdopendir),                             /* 516 */
        (void *) (alphasort),                             /* 520 */
        (void *) (dirfd),                                 /* 524 */
        (void *) (scandir),                               /* 528 */
        (void *) (readdir_r),                             /* 532 */
        (void *) (readdir64_r),                           /* 536 */
        /* dlfcn.h */
        (void *) (dlclose),                               /* 540 */
        (void *) (dlerror),                               /* 544 */
        (void *) (dlopen),                                /* 548 */
        (void *) (dlsym),                                 /* 552 */
        /* envz.h */
        (void *) (envz_entry),                            /* 556 */
        (void *) (envz_get),                              /* 560 */
        (void *) (envz_add),                              /* 564 */
        (void *) (envz_merge),                            /* 568 */
        (void *) (envz_remove),                           /* 572 */
        (void *) (envz_strip),                            /* 576 */
        /* err.h */
        (void *) (warn),                                  /* 580 */
        (void *) (vwarn),                                 /* 584 */
        (void *) (warnx),                                 /* 588 */
        (void *) (vwarnx),                                /* 592 */
        (void *) (err),                                   /* 596 */
        (void *) (verr),                                  /* 600 */
        (void *) (errx),                                  /* 604 */
        (void *) (verrx),                                 /* 608 */
        /* errno.h */
        (void *) (__errno),                               /* 612 */
        (void *) (__h_errno),                             /* 616 */
        /* fcntl.h */
        (void *) (open),                                  /* 620 */
        (void *) (openat),                                /* 624 */
        (void *) (creat),                                 /* 628 */
        (void *) (close),                                 /* 632 */
        (void *) (read),                                  /* 636 */
        (void *) (write),                                 /* 640 */
        (void *) (fcntl),                                 /* 644 */
        /* fnmatch.h */
        (void *) (fnmatch),                               /* 648 */
        /* ftw.h */
        (void *) (ftw),                                   /* 652 */
        (void *) (nftw),                                  /* 656 */
        /* glob.h */
        (void *) (glob),                                  /* 660 */
        (void *) (globfree),                              /* 664 */
        /* grp.h */
        (void *) (endgrent),                              /* 668 */
        (void *) (getgrent),                              /* 672 */
        (void *) (getgrgid),                              /* 676 */
        (void *) (getgrnam),                              /* 680 */
        (void *) (setgrent),                              /* 684 */
        /* iconv.h */
        (void *) (iconv_open),                            /* 688 */
        (void *) (iconv),                                 /* 692 */
        (void *) (iconv_close),                           /* 696 */
        /* ifaddrs.h */
        (void *) (getifaddrs),                            /* 700 */
        (void *) (freeifaddrs),                           /* 704 */
        /* inttypes.h */
        (void *) (imaxabs),                               /* 708 */
        (void *) (imaxdiv),                               /* 712 */
        (void *) (strtoimax),                             /* 716 */
        (void *) (strtoumax),                             /* 720 */
        (void *) (wcstoimax),                             /* 724 */
        (void *) (wcstoumax),                             /* 728 */
        /* langinfo.h */
        (void *) (nl_langinfo),                           /* 732 */
        /* libgen.h */
        (void *) (basename),                              /* 736 */
        (void *) (dirname),                               /* 740 */
        /* locale.h */
        (void *) (setlocale),                             /* 744 */
        (void *) (localeconv),                            /* 748 */
        /* malloc.h */
        (void *) (memalign),                              /* 752 */
        /* math.h */
        (void *) (acos),                                  /* 756 */
        (void *) (asin),                                  /* 760 */
        (void *) (atan),                                  /* 764 */
        (void *) (atan2),                                 /* 768 */
        (void *) (ceil),                                  /* 772 */
        (void *) (cos),                                   /* 776 */
        (void *) (cosh),                                  /* 780 */
        (void *) (sincos),                                /* 784 */
        (void *) (sincosf),                               /* 788 */
        (void *) (sincosl),                               /* 792 */
        (void *) (exp10),                                 /* 796 */
        (void *) (exp10f),                                /* 800 */
        (void *) (exp10l),                                /* 804 */
        (void *) (exp),                                   /* 808 */
        (void *) (fabs),                                  /* 812 */
        (void *) (floor),                                 /* 816 */
        (void *) (fmod),                                  /* 820 */
        (void *) (frexp),                                 /* 824 */
        (void *) (ldexp),                                 /* 828 */
        (void *) (log),                                   /* 832 */
        (void *) (log10),                                 /* 836 */
        (void *) (modf),                                  /* 840 */
        (void *) (pow),                                   /* 844 */
        (void *) (pow10),                                 /* 848 */
        (void *) (pow10f),                                /* 852 */
        (void *) (pow10l),                                /* 856 */
        (void *) (sin),                                   /* 860 */
        (void *) (sinh),                                  /* 864 */
        (void *) (sqrt),                                  /* 868 */
        (void *) (tan),                                   /* 872 */
        (void *) (tanh),                                  /* 876 */
        (void *) (j0),                                    /* 880 */
        (void *) (y0),                                    /* 884 */
        (void *) (j0f),                                   /* 888 */
        (void *) (y0f),                                   /* 892 */
        (void *) (j1),                                    /* 896 */
        (void *) (y1),                                    /* 900 */
        (void *) (j1f),                                   /* 904 */
        (void *) (y1f),                                   /* 908 */
        (void *) (jn),                                    /* 912 */
        (void *) (yn),                                    /* 916 */
        (void *) (jnf),                                   /* 920 */
        (void *) (ynf),                                   /* 924 */
        (void *) (__fpclassify_float),                    /* 928 */
        (void *) (__fpclassify_double),                   /* 932 */
        (void *) (__fpclassify_long_double),              /* 936 */
        (void *) (__signbit_float),                       /* 940 */
        (void *) (__signbit_double),                      /* 944 */
        (void *) (__signbit_long_double),                 /* 948 */
        (void *) (__signgam),                             /* 952 */
        (void *) (acosf),                                 /* 956 */
        (void *) (asinf),                                 /* 960 */
        (void *) (atanf),                                 /* 964 */
        (void *) (atan2f),                                /* 968 */
        (void *) (ceilf),                                 /* 972 */
        (void *) (cosf),                                  /* 976 */
        (void *) (coshf),                                 /* 980 */
        (void *) (expf),                                  /* 984 */
        (void *) (fabsf),                                 /* 988 */
        (void *) (floorf),                                /* 992 */
        (void *) (fmodf),                                 /* 996 */
        (void *) (frexpf),                                /* 1000 */
        (void *) (ldexpf),                                /* 1004 */
        (void *) (logf),                                  /* 1008 */
        (void *) (log10f),                                /* 1012 */
        (void *) (modff),                                 /* 1016 */
        (void *) (powf),                                  /* 1020 */
        (void *) (sinf),                                  /* 1024 */
        (void *) (sinhf),                                 /* 1028 */
        (void *) (sqrtf),                                 /* 1032 */
        (void *) (tanf),                                  /* 1036 */
        (void *) (tanhf),                                 /* 1040 */
        (void *) (acoshf),                                /* 1044 */
        (void *) (asinhf),                                /* 1048 */
        (void *) (atanhf),                                /* 1052 */
        (void *) (cbrtf),                                 /* 1056 */
        (void *) (copysignf),                             /* 1060 */
        (void *) (erfcf),                                 /* 1064 */
        (void *) (erff),                                  /* 1068 */
        (void *) (expm1f),                                /* 1072 */
        (void *) (fdimf),                                 /* 1076 */
        (void *) (fmaf),                                  /* 1080 */
        (void *) (fmaxf),                                 /* 1084 */
        (void *) (fminf),                                 /* 1088 */
        (void *) (hypotf),                                /* 1092 */
        (void *) (lgammaf),                               /* 1096 */
        (void *) (log1pf),                                /* 1100 */
        (void *) (logbf),                                 /* 1104 */
        (void *) (llrintf),                               /* 1108 */
        (void *) (lrintf),                                /* 1112 */
        (void *) (lroundf),                               /* 1116 */
        (void *) (llround),                               /* 1120 */
        (void *) (llroundf),                              /* 1124 */
        (void *) (nanf),                                  /* 1128 */
        (void *) (nearbyintf),                            /* 1132 */
        (void *) (nextafterf),                            /* 1136 */
        (void *) (nexttowardf),                           /* 1140 */
        (void *) (remainderf),                            /* 1144 */
        (void *) (remquof),                               /* 1148 */
        (void *) (rintf),                                 /* 1152 */
        (void *) (roundf),                                /* 1156 */
        (void *) (scalblnf),                              /* 1160 */
        (void *) (scalbnf),                               /* 1164 */
        (void *) (tgammaf),                               /* 1168 */
        (void *) (truncf),                                /* 1172 */
        (void *) (ilogbf),                                /* 1176 */
        (void *) (finite),                                /* 1180 */ /* TODO - REMOVE */
        (void *) (acosh),                                 /* 1184 */
        (void *) (asinh),                                 /* 1188 */
        (void *) (atanh),                                 /* 1192 */
        (void *) (cbrt),                                  /* 1196 */
        (void *) (copysign),                              /* 1200 */
        (void *) (erf),                                   /* 1204 */
        (void *) (erfc),                                  /* 1208 */
        (void *) (expm1),                                 /* 1212 */
        (void *) (fdim),                                  /* 1216 */
        (void *) (fma),                                   /* 1220 */
        (void *) (fmax),                                  /* 1224 */
        (void *) (fmin),                                  /* 1228 */
        (void *) (hypot),                                 /* 1232 */
        (void *) (lgamma),                                /* 1236 */
        (void *) (log1p),                                 /* 1240 */
        (void *) (logb),                                  /* 1244 */
        (void *) (llrint),                                /* 1248 */
        (void *) (lrint),                                 /* 1252 */
        (void *) (lround),                                /* 1256 */
        (void *) (nan),                                   /* 1260 */
        (void *) (nearbyint),                             /* 1264 */
        (void *) (nexttoward),                            /* 1268 */
        (void *) (nextafter),                             /* 1272 */
        (void *) (remainder),                             /* 1276 */
        (void *) (remquo),                                /* 1280 */
        (void *) (rint),                                  /* 1284 */
        (void *) (round),                                 /* 1288 */
        (void *) (scalbln),                               /* 1292 */
        (void *) (scalbn),                                /* 1296 */
        (void *) (tgamma),                                /* 1300 */
        (void *) (trunc),                                 /* 1304 */
        (void *) (ilogb),                                 /* 1308 */
        (void *) (exp2f),                                 /* 1312 */
        (void *) (exp2),                                  /* 1316 */
        (void *) (exp2l),                                 /* 1320 */
        (void *) (log2),                                  /* 1324 */
        (void *) (log2f),                                 /* 1328 */
        (void *) (log2l),                                 /* 1332 */
        (void *) (acosl),                                 /* 1336 */
        (void *) (asinl),                                 /* 1340 */
        (void *) (atanl),                                 /* 1344 */
        (void *) (atan2l),                                /* 1348 */
        (void *) (ceill),                                 /* 1352 */
        (void *) (cosl),                                  /* 1356 */
        (void *) (coshl),                                 /* 1360 */
        (void *) (expl),                                  /* 1364 */
        (void *) (fabsl),                                 /* 1368 */
        (void *) (floorl),                                /* 1372 */
        (void *) (fmodl),                                 /* 1376 */
        (void *) (frexpl),                                /* 1380 */
        (void *) (ldexpl),                                /* 1384 */
        (void *) (logl),                                  /* 1388 */
        (void *) (log10l),                                /* 1392 */
        (void *) (modfl),                                 /* 1396 */
        (void *) (powl),                                  /* 1400 */
        (void *) (sinl),                                  /* 1404 */
        (void *) (sinhl),                                 /* 1408 */
        (void *) (sqrtl),                                 /* 1412 */
        (void *) (tanl),                                  /* 1416 */
        (void *) (tanhl),                                 /* 1420 */
        (void *) (acoshl),                                /* 1424 */
        (void *) (asinhl),                                /* 1428 */
        (void *) (atanhl),                                /* 1432 */
        (void *) (cbrtl),                                 /* 1436 */
        (void *) (copysignl),                             /* 1440 */
        (void *) (erfcl),                                 /* 1444 */
        (void *) (erfl),                                  /* 1448 */
        (void *) (expm1l),                                /* 1452 */
        (void *) (fdiml),                                 /* 1456 */
        (void *) (fmal),                                  /* 1460 */
        (void *) (fmaxl),                                 /* 1464 */
        (void *) (fminl),                                 /* 1468 */
        (void *) (hypotl),                                /* 1472 */
        (void *) (lgammal),                               /* 1476 */
        (void *) (log1pl),                                /* 1480 */
        (void *) (logbl),                                 /* 1484 */
        (void *) (llrintl),                               /* 1488 */
        (void *) (lrintl),                                /* 1492 */
        (void *) (llroundl),                              /* 1496 */
        (void *) (lroundl),                               /* 1500 */
        (void *) (nanl),                                  /* 1504 */
        (void *) (nearbyintl),                            /* 1508 */
        (void *) (nextafterl),                            /* 1512 */
        (void *) (nexttowardl),                           /* 1516 */
        (void *) (remainderl),                            /* 1520 */
        (void *) (remquol),                               /* 1524 */
        (void *) (rintl),                                 /* 1528 */
        (void *) (roundl),                                /* 1532 */
        (void *) (scalblnl),                              /* 1536 */
        (void *) (scalbnl),                               /* 1540 */
        (void *) (tgammal),                               /* 1544 */
        (void *) (truncl),                                /* 1548 */
        (void *) (ilogbl),                                /* 1552 */
        /* netdb.h */
        (void *) (gethostbyaddr),                         /* 1556 */
        (void *) (gethostbyname),                         /* 1560 */
        (void *) (getnetbyaddr),                          /* 1564 */
        (void *) (getnetbyname),                          /* 1568 */
        (void *) (getprotobyname),                        /* 1572 */
        (void *) (getprotobynumber),                      /* 1576 */
        (void *) (getservbyname),                         /* 1580 */
        (void *) (getservbyport),                         /* 1584 */
        (void *) (herror),                                /* 1588 */
        (void *) (hstrerror),                             /* 1592 */
        (void *) (gethostbyname_r),                       /* 1596 */
        (void *) (gethostbyname2_r),                      /* 1600 */
        (void *) (gethostbyname2),                        /* 1604 */
        (void *) (gethostbyaddr_r),                       /* 1608 */
        (void *) (getservbyport_r),                       /* 1612 */
        (void *) (getservbyname_r),                       /* 1616 */
        (void *) (gai_strerror),                          /* 1620 */
        (void *) (getaddrinfo),                           /* 1624 */
        (void *) (freeaddrinfo),                          /* 1628 */
        (void *) (getnameinfo),                           /* 1632 */
        /* nl_types.h */
        (void *) (catopen),                               /* 1636 */
        (void *) (catgets),                               /* 1640 */
        (void *) (catclose),                              /* 1644 */
        /* poll.h */
        (void *) (poll),                                  /* 1648 */
        /* pwd.h */
        (void *) (endpwent),                              /* 1652 */
        (void *) (getpwent),                              /* 1656 */
        (void *) (getpwnam),                              /* 1660 */
        (void *) (getpwnam_r),                            /* 1664 */
        (void *) (getpwuid),                              /* 1668 */
        (void *) (getpwuid_r),                            /* 1672 */
        (void *) (setpwent),                              /* 1676 */
        /* regex.h */
        (void *) (regcomp),                               /* 1680 */
        (void *) (regexec),                               /* 1684 */
        (void *) (regfree),                               /* 1688 */
        (void *) (regerror),                              /* 1692 */
        /* resolv.h */
        (void *) (__res_state),                           /* 1696 */
        (void *) (res_init),                              /* 1700 */
        (void *) (res_query),                             /* 1704 */
        (void *) (res_querydomain),                       /* 1708 */
        (void *) (res_search),                            /* 1712 */
        (void *) (res_mkquery),                           /* 1716 */
        (void *) (res_send),                              /* 1720 */
        (void *) (dn_comp),                               /* 1724 */
        (void *) (dn_expand),                             /* 1728 */
        (void *) (dn_skipname),                           /* 1732 */
        /* search.h */
        (void *) (hcreate),                               /* 1736 */
        (void *) (hdestroy),                              /* 1740 */
        (void *) (hsearch),                               /* 1744 */
        (void *) (hcreate_r),                             /* 1748 */
        (void *) (hdestroy_r),                            /* 1752 */
        (void *) (hsearch_r),                             /* 1756 */
        (void *) (lfind),                                 /* 1760 */
        (void *) (lsearch),                               /* 1764 */
        (void *) (tdelete),                               /* 1768 */
        (void *) (tdestroy),                              /* 1772 */
        (void *) (tfind),                                 /* 1776 */
        (void *) (tsearch),                               /* 1780 */
        (void *) (twalk),                                 /* 1784 */
        /* setjmp.h */
        (void *) (setjmp),                                /* 1788 */
        (void *) (__sigsetjmp),                           /* 1792 */
        (void *) (_setjmp),                               /* 1796 */
        (void *) (longjmp),                               /* 1800 */
        (void *) (_longjmp),                              /* 1804 */
        (void *) (siglongjmp),                            /* 1808 */
        (void *) (__sigjmp_save),                         /* 1812 */
        /* signal.h */
        (void *) (signal),                                /* 1816 */
        (void *) (raise),                                 /* 1820 */
        (void *) (sigmask),                               /* 1824 */
        (void *) (sigblock),                              /* 1828 */
        (void *) (sigsetmask),                            /* 1832 */
        (void *) (sigprocmask),                           /* 1836 */
        (void *) (sigismember),                           /* 1840 */
        (void *) (sigemptyset),                           /* 1844 */
        (void *) (sigfillset),                            /* 1848 */
        (void *) (sigdelset),                             /* 1852 */
        (void *) (sigaddset),                             /* 1856 */
        (void *) (kill),                                  /* 1860 */
        (void *) (sigaction),                             /* 1864 */
        /* stdio.h */
        (void *) (perror),                                /* 1868 */
        (void *) (fdopen64),                              /* 1872 */
        (void *) (fopen64),                               /* 1876 */
        (void *) (freopen64),                             /* 1880 */
        (void *) (ftello64),                              /* 1884 */
        (void *) (fseeko64),                              /* 1888 */
        (void *) (fgetpos64),                             /* 1892 */
        (void *) (fsetpos64),                             /* 1896 */
        (void *) (tmpfile64),                             /* 1900 */
        (void *) (fopen),                                 /* 1904 */
        (void *) (fclose),                                /* 1908 */
        (void *) (fflush),                                /* 1912 */
        (void *) (freopen),                               /* 1916 */
        (void *) (setvbuf),                               /* 1920 */
        (void *) (setbuf),                                /* 1924 */
        (void *) (fseek),                                 /* 1928 */
        (void *) (ftell),                                 /* 1932 */
        (void *) (rewind),                                /* 1936 */
        (void *) (fgetpos),                               /* 1940 */
        (void *) (fsetpos),                               /* 1944 */
        (void *) (fgetc),                                 /* 1948 */
        (void *) (getc),                                  /* 1952 */
        (void *) (getchar),                               /* 1956 */
        (void *) (ungetc),                                /* 1960 */
        (void *) (fputc),                                 /* 1964 */
        (void *) (putc),                                  /* 1968 */
        (void *) (putchar),                               /* 1972 */
        (void *) (fgets),                                 /* 1976 */
        (void *) (gets),                                  /* 1980 */
        (void *) (fscanf),                                /* 1984 */
        (void *) (scanf),                                 /* 1988 */
        (void *) (sscanf),                                /* 1992 */
        (void *) (fputs),                                 /* 1996 */
        (void *) (puts),                                  /* 2000 */
        (void *) (dprintf),                               /* 2004 */
        (void *) (fprintf),                               /* 2008 */
        (void *) (printf),                                /* 2012 */
        (void *) (sprintf),                               /* 2016 */
        (void *) (vdprintf),                              /* 2020 */
        (void *) (vfprintf),                              /* 2024 */
        (void *) (vprintf),                               /* 2028 */
        (void *) (vsprintf),                              /* 2032 */
        (void *) (fread),                                 /* 2036 */
        (void *) (fwrite),                                /* 2040 */
        (void *) (feof),                                  /* 2044 */
        (void *) (ferror),                                /* 2048 */
        (void *) (clearerr),                              /* 2052 */
        (void *) (rename),                                /* 2056 */
        (void *) (remove),                                /* 2060 */
        (void *) (tmpfile),                               /* 2064 */
        (void *) (tmpnam),                                /* 2068 */
        (void *) (tempnam),                               /* 2072 */
        (void *) (ctermid),                               /* 2076 */
        (void *) (__flush),                               /* 2080 */
        (void *) (__unlockfile),                          /* 2084 */
        (void *) (getc_unlocked),                         /* 2088 */
        (void *) (getchar_unlocked),                      /* 2092 */
        (void *) (putc_unlocked),                         /* 2096 */
        (void *) (putchar_unlocked),                      /* 2100 */
        (void *) (getline),                               /* 2104 */
        (void *) (getdelim),                              /* 2108 */
        (void *) (fdopen),                                /* 2112 */
        (void *) (fileno),                                /* 2116 */
        (void *) (asprintf),                              /* 2120 */
        (void *) (vsnprintf),                             /* 2124 */
        (void *) (pclose),                                /* 2128 */
        (void *) (popen),                                 /* 2132 */
        (void *) (fseeko),                                /* 2136 */
        (void *) (ftello),                                /* 2140 */
        (void *) (flockfile),                             /* 2144 */
        (void *) (funlockfile),                           /* 2148 */
        (void *) (ftrylockfile),                          /* 2152 */
        (void *) (vasprintf),                             /* 2156 */
        (void *) (vfscanf),                               /* 2160 */
        (void *) (vsscanf),                               /* 2164 */
        (void *) (vscanf),                                /* 2168 */
        (void *) (snprintf),                              /* 2172 */
        /* stdio_ext.h */
        (void *) (_flushlbf),                             /* 2176 */
        (void *) (__fsetlocking),                         /* 2180 */
        (void *) (__fwriting),                            /* 2184 */
        (void *) (__freading),                            /* 2188 */
        (void *) (__freadable),                           /* 2192 */
        (void *) (__fwritable),                           /* 2196 */
        (void *) (__flbf),                                /* 2200 */
        (void *) (__fbufsize),                            /* 2204 */
        (void *) (__fpending),                            /* 2208 */
        (void *) (__fpurge),                              /* 2212 */
        (void *) (fpurge),                                /* 2216 */
        (void *) (__fseterr),                             /* 2220 */
        (void *) (__freadahead),                          /* 2224 */
        (void *) (__freadptrinc),                         /* 2228 */
        /* stdlib.h */
        (void *) (__mb_cur_max),                          /* 2232 */
        (void *) (__getprogname),                         /* 2236 */
        (void *) (mblen),                                 /* 2240 */
        (void *) (mbtowc),                                /* 2244 */
        (void *) (_mbtowc_r),                             /* 2248 */
        (void *) (_mbstowcs_r),                           /* 2252 */
        (void *) (wctomb),                                /* 2256 */
        (void *) (_wctomb_r),                             /* 2260 */
        (void *) (mbstowcs),                              /* 2264 */
        (void *) (wcstombs),                              /* 2268 */
        (void *) (_wcstombs_r),                           /* 2272 */
        (void *) (malloc),                                /* 2276 */
        (void *) (calloc),                                /* 2280 */
        (void *) (free),                                  /* 2284 */
        (void *) (realloc),                               /* 2288 */
        (void *) (valloc),                                /* 2292 */
        (void *) (aligned_alloc),                         /* 2296 */
        (void *) (posix_memalign),                        /* 2300 */
        (void *) (abs),                                   /* 2304 */
        (void *) (labs),                                  /* 2308 */
        (void *) (div),                                   /* 2312 */
        (void *) (ldiv),                                  /* 2316 */
        (void *) (rand),                                  /* 2320 */
        (void *) (srand),                                 /* 2324 */
        (void *) (random),                                /* 2328 */
        (void *) (srandom),                               /* 2332 */
        (void *) (initstate),                             /* 2336 */
        (void *) (setstate),                              /* 2340 */
        (void *) (l64a),                                  /* 2344 */
        (void *) (a64l),                                  /* 2348 */
        (void *) (setkey),                                /* 2352 */
        (void *) (drand48),                               /* 2356 */
        (void *) (erand48),                               /* 2360 */
        (void *) (lrand48),                               /* 2364 */
        (void *) (nrand48),                               /* 2368 */
        (void *) (mrand48),                               /* 2372 */
        (void *) (jrand48),                               /* 2376 */
        (void *) (srand48),                               /* 2380 */
        (void *) (seed48),                                /* 2384 */
        (void *) (lcong48),                               /* 2388 */
        (void *) (system),                                /* 2392 */
        (void *) (exit),                                  /* 2396 */
        (void *) (abort),                                 /* 2400 */
        (void *) (atexit),                                /* 2404 */
        (void *) (getenv),                                /* 2408 */
        (void *) (bsearch),                               /* 2412 */
        (void *) (qsort),                                 /* 2416 */
        (void *) (strtod),                                /* 2420 */
        (void *) (strtol),                                /* 2424 */
        (void *) (strtoul),                               /* 2428 */
        (void *) (strtoq),                                /* 2432 */
        (void *) (atof),                                  /* 2436 */
        (void *) (atoi),                                  /* 2440 */
        (void *) (atol),                                  /* 2444 */
        (void *) (itoa),                                  /* 2448 */
        (void *) (lltoa),                                 /* 2452 */
        (void *) (_exit),                                 /* 2456 */
        (void *) (rand_r),                                /* 2460 */
        (void *) (mktemp),                                /* 2464 */
        (void *) (mkstemp),                               /* 2468 */
        (void *) (unsetenv),                              /* 2472 */
        (void *) (setenv),                                /* 2476 */
        (void *) (putenv),                                /* 2480 */
        (void *) (mkdtemp),                               /* 2484 */
        (void *) (getexecname),                           /* 2488 */
        (void *) (strtoll),                               /* 2492 */
        (void *) (strtold),                               /* 2496 */
        (void *) (strtoull),                              /* 2500 */
        (void *) (atoll),                                 /* 2504 */
        (void *) (llabs),                                 /* 2508 */
        (void *) (lldiv),                                 /* 2512 */
        (void *) (strtof),                                /* 2516 */
        (void *) (atoff),                                 /* 2520 */
        (void *) (_Exit),                                 /* 2524 */
        (void *) (ecvt),                                  /* 2528 */
        (void *) (fcvt),                                  /* 2532 */
        (void *) (gcvt),                                  /* 2536 */
        (void *) (secure_getenv),                         /* 2540 */
        (void *) (reallocarray),                          /* 2544 */
        (void *) (qsort_r),                               /* 2548 */
        (void *) (arc4random),                            /* 2552 */
        (void *) (arc4random_buf),                        /* 2556 */
        (void *) (arc4random_uniform),                    /* 2560 */
        (void *) (arc4random_stir),                       /* 2564 */
        (void *) (arc4random_addrandom),                  /* 2568 */
        /* string.h */
        (void *) (strerror),                              /* 2572 */
        (void *) (strcat),                                /* 2576 */
        (void *) (strncat),                               /* 2580 */
        (void *) (strcmp),                                /* 2584 */
        (void *) (strncmp),                               /* 2588 */
        (void *) (strcpy),                                /* 2592 */
        (void *) (strncpy),                               /* 2596 */
        (void *) (strnlen),                               /* 2600 */
        (void *) (strlen),                                /* 2604 */
        (void *) (strchr),                                /* 2608 */
        (void *) (strrchr),                               /* 2612 */
        (void *) (strspn),                                /* 2616 */
        (void *) (strcspn),                               /* 2620 */
        (void *) (strpbrk),                               /* 2624 */
        (void *) (strtok),                                /* 2628 */
        (void *) (strstr),                                /* 2632 */
        (void *) (strnstr),                               /* 2636 */
        (void *) (strsep),                                /* 2640 */
        (void *) (stpcpy),                                /* 2644 */
        (void *) (stpncpy),                               /* 2648 */
        (void *) (stccpy),                                /* 2652 */
        (void *) (strcoll),                               /* 2656 */
        (void *) (strxfrm),                               /* 2660 */
        (void *) (memmove),                               /* 2664 */
        (void *) (memchr),                                /* 2668 */
        (void *) (memcmp),                                /* 2672 */
        (void *) (memcpy),                                /* 2676 */
        (void *) (memset),                                /* 2680 */
        (void *) (strerror_r),                            /* 2684 */
        (void *) (strdup),                                /* 2688 */
        (void *) (strndup),                               /* 2692 */
        (void *) (bcopy),                                 /* 2696 */
        (void *) (bzero),                                 /* 2700 */
        (void *) (explicit_bzero),                        /* 2704 */
        (void *) (bcmp),                                  /* 2708 */
        (void *) (strlcpy),                               /* 2712 */
        (void *) (strlcat),                               /* 2716 */
        (void *) (strtok_r),                              /* 2720 */
        (void *) (strsignal),                             /* 2724 */
        (void *) (memccpy),                               /* 2728 */
        (void *) (index),                                 /* 2732 */
        (void *) (rindex),                                /* 2736 */
        (void *) (strverscmp),                            /* 2740 */
        (void *) (strchrnul),                             /* 2744 */
        (void *) (strcasestr),                            /* 2748 */
        (void *) (memmem),                                /* 2752 */
        (void *) (memrchr),                               /* 2756 */
        (void *) (mempcpy),                               /* 2760 */
        /* strings.h */
        (void *) (strcasecmp),                            /* 2764 */
        (void *) (strncasecmp),                           /* 2768 */
        (void *) (ffs),                                   /* 2772 */
        (void *) (ffsl),                                  /* 2776 */
        (void *) (ffsll),                                 /* 2780 */
        /* termcap.h */
        (void *) (tgetent),                               /* 2784 */
        (void *) (tgetnum),                               /* 2788 */
        (void *) (tgetflag),                              /* 2792 */
        (void *) (tgetstr),                               /* 2796 */
        (void *) (tputs),                                 /* 2800 */
        (void *) (tparam),                                /* 2804 */
        (void *) (tgoto),                                 /* 2808 */
        /* termios.h */
        (void *) (tcgetattr),                             /* 2812 */
        (void *) (tcsetattr),                             /* 2816 */
        (void *) (tcsendbreak),                           /* 2820 */
        (void *) (tcdrain),                               /* 2824 */
        (void *) (tcflush),                               /* 2828 */
        (void *) (tcflow),                                /* 2832 */
        (void *) (cfmakeraw),                             /* 2836 */
        (void *) (cfgetispeed),                           /* 2840 */
        (void *) (cfgetospeed),                           /* 2844 */
        (void *) (cfsetispeed),                           /* 2848 */
        (void *) (cfsetospeed),                           /* 2852 */
        /* time.h */
        (void *) (clock),                                 /* 2856 */
        (void *) (time),                                  /* 2860 */
        (void *) (asctime),                               /* 2864 */
        (void *) (ctime),                                 /* 2868 */
        (void *) (gmtime),                                /* 2872 */
        (void *) (localtime),                             /* 2876 */
        (void *) (mktime),                                /* 2880 */
        (void *) (difftime),                              /* 2884 */
        (void *) (strftime),                              /* 2888 */
        (void *) (strptime),                              /* 2892 */
        (void *) (asctime_r),                             /* 2896 */
        (void *) (ctime_r),                               /* 2900 */
        (void *) (gmtime_r),                              /* 2904 */
        (void *) (localtime_r),                           /* 2908 */
        (void *) (tzset),                                 /* 2912 */
        (void *) (nanosleep),                             /* 2916 */
        (void *) (clock_gettime),                         /* 2920 */
        (void *) (clock_settime),                         /* 2924 */
        (void *) (clock_getres),                          /* 2928 */
        (void *) (clock_nanosleep),                       /* 2932 */
        (void *) (rdtsc),                                 /* 2936 */
        (void *) (clock_gettime64),                       /* 2940 */
        /* uchar.h */
        (void *) (c16rtomb),                              /* 2944 */
        (void *) (mbrtoc16),                              /* 2948 */
        (void *) (c32rtomb),                              /* 2952 */
        (void *) (mbrtoc32),                              /* 2956 */
        /* ulimit.h */
        (void *) (ulimit),                                /* 2960 */
        /* unistd.h */
        (void *) (__environ),                             /* 2964 */
        (void *) (isatty),                                /* 2968 */
        (void *) (dup),                                   /* 2972 */
        (void *) (dup2),                                  /* 2976 */
        (void *) (lseek),                                 /* 2980 */
        (void *) (access),                                /* 2984 */
        (void *) (chown),                                 /* 2988 */
        (void *) (fchown),                                /* 2992 */
        (void *) (lchown),                                /* 2996 */
        (void *) (truncate),                              /* 3000 */
        (void *) (ftruncate),                             /* 3004 */
        (void *) (getpagesize),                           /* 3008 */
        (void *) (ftruncate64),                           /* 3012 */
        (void *) (truncate64),                            /* 3016 */
        (void *) (lseek64),                               /* 3020 */
        (void *) (alarm),                                 /* 3024 */
        (void *) (ualarm),                                /* 3028 */
        (void *) (link),                                  /* 3032 */
        (void *) (unlink),                                /* 3036 */
        (void *) (symlink),                               /* 3040 */
        (void *) (readlink),                              /* 3044 */
        (void *) (chdir),                                 /* 3048 */
        (void *) (fchdir),                                /* 3052 */
        (void *) (lockf),                                 /* 3056 */
        (void *) (sleep),                                 /* 3060 */
        (void *) (usleep),                                /* 3064 */
        (void *) (pause),                                 /* 3068 */
        (void *) (getpid),                                /* 3072 */
        (void *) (getppid),                               /* 3076 */
        (void *) (getpgrp),                               /* 3080 */
        (void *) (tcgetpgrp),                             /* 3084 */
        (void *) (tcsetpgrp),                             /* 3088 */
        (void *) (realpath),                              /* 3092 */
        (void *) (fsync),                                 /* 3096 */
        (void *) (fdatasync),                             /* 3100 */
        (void *) (ttyname),                               /* 3104 */
        (void *) (ttyname_r),                             /* 3108 */
        (void *) (execl),                                 /* 3112 */
        (void *) (execle),                                /* 3116 */
        (void *) (execlp),                                /* 3120 */
        (void *) (execv),                                 /* 3124 */
        (void *) (execve),                                /* 3128 */
        (void *) (execvp),                                /* 3132 */
        (void *) (encrypt),                               /* 3136 */
        (void *) (spawnv),                                /* 3140 */
        (void *) (spawnvp),                               /* 3144 */
        (void *) (sysconf),                               /* 3148 */
        (void *) (enableUnixPaths),                       /* 3152 */
        (void *) (disableUnixPaths),                      /* 3156 */
        (void *) (enableAltivec),                         /* 3160 */
        (void *) (disableAltivec),                        /* 3164 */
        (void *) (enableOptimizedFunctions),              /* 3168 */
        (void *) (disableOptimizedFunctions),             /* 3172 */
        (void *) (getcwd),                                /* 3176 */
        (void *) (getwd),                                 /* 3180 */
        (void *) (get_current_dir_name),                  /* 3184 */
        (void *) (gethostid),                             /* 3188 */
        (void *) (gethostname),                           /* 3192 */
        (void *) (getdomainname),                         /* 3196 */
        (void *) (setdomainname),                         /* 3200 */
        (void *) (getlogin),                              /* 3204 */
        (void *) (getlogin_r),                            /* 3208 */
        (void *) (crypt),                                 /* 3212 */
        (void *) (getegid),                               /* 3216 */
        (void *) (geteuid),                               /* 3220 */
        (void *) (getgid),                                /* 3224 */
        (void *) (getgroups),                             /* 3228 */
        (void *) (getpass),                               /* 3232 */
        (void *) (getuid),                                /* 3236 */
        (void *) (initgroups),                            /* 3240 */
        (void *) (setegid),                               /* 3244 */
        (void *) (seteuid),                               /* 3248 */
        (void *) (setgid),                                /* 3252 */
        (void *) (setgroups),                             /* 3256 */
        (void *) (setregid),                              /* 3260 */
        (void *) (setreuid),                              /* 3264 */
        (void *) (setsid),                                /* 3268 */
        (void *) (setuid),                                /* 3272 */
        (void *) (setlogin),                              /* 3276 */
        (void *) (pathconf),                              /* 3280 */
        (void *) (fpathconf),                             /* 3284 */
        (void *) (pipe),                                  /* 3288 */
        (void *) (pipe2),                                 /* 3292 */
        (void *) (pread),                                 /* 3296 */
        (void *) (pwrite),                                /* 3300 */
        (void *) (pread64),                               /* 3304 */
        (void *) (pwrite64),                              /* 3308 */
        /* utime.h */
        (void *) (utime),                                 /* 3312 */
        /* wchar.h */
        (void *) (btowc),                                 /* 3316 */
        (void *) (wctob),                                 /* 3320 */
        (void *) (wcscat),                                /* 3324 */
        (void *) (wcsncat),                               /* 3328 */
        (void *) (wcscmp),                                /* 3332 */
        (void *) (wcsncmp),                               /* 3336 */
        (void *) (wcscpy),                                /* 3340 */
        (void *) (wcsncpy),                               /* 3344 */
        (void *) (wcslen),                                /* 3348 */
        (void *) (wcschr),                                /* 3352 */
        (void *) (wcsspn),                                /* 3356 */
        (void *) (wcspbrk),                               /* 3360 */
        (void *) (wcstok),                                /* 3364 */
        (void *) (wcsstr),                                /* 3368 */
        (void *) (wcswidth),                              /* 3372 */
        (void *) (wcwidth),                               /* 3376 */
        (void *) (wcstod),                                /* 3380 */
        (void *) (wcstol),                                /* 3384 */
        (void *) (wcstoul),                               /* 3388 */
        (void *) (wcstof),                                /* 3392 */
        (void *) (wscoll),                                /* 3396 */
        (void *) (wcsxfrm),                               /* 3400 */
        (void *) (wmemchr),                               /* 3404 */
        (void *) (wmemcmp),                               /* 3408 */
        (void *) (wmemcpy),                               /* 3412 */
        (void *) (wmemmove),                              /* 3416 */
        (void *) (wmemset),                               /* 3420 */
        (void *) (fwide),                                 /* 3424 */
        (void *) (fgetwc),                                /* 3428 */
        (void *) (getwc),                                 /* 3432 */
        (void *) (getwchar),                              /* 3436 */
        (void *) (ungetwc),                               /* 3440 */
        (void *) (fgetws),                                /* 3444 */
        (void *) (fwscanf),                               /* 3448 */
        (void *) (swscanf),                               /* 3452 */
        (void *) (vfwscanf),                              /* 3456 */
        (void *) (vswscanf),                              /* 3460 */
        (void *) (vwscanf),                               /* 3464 */
        (void *) (wscanf),                                /* 3468 */
        (void *) (fputwc),                                /* 3472 */
        (void *) (putwc),                                 /* 3476 */
        (void *) (putwchar),                              /* 3480 */
        (void *) (fputws),                                /* 3484 */
        (void *) (fwprintf),                              /* 3488 */
        (void *) (swprintf),                              /* 3492 */
        (void *) (vfwprintf),                             /* 3496 */
        (void *) (vswprintf),                             /* 3500 */
        (void *) (vwprintf),                              /* 3504 */
        (void *) (wprintf),                               /* 3508 */
        (void *) (wcsftime),                              /* 3512 */
        (void *) (mbrlen),                                /* 3516 */
        (void *) (mbrtowc),                               /* 3520 */
        (void *) (mbsinit),                               /* 3524 */
        (void *) (mbsrtowcs),                             /* 3528 */
        (void *) (wcrtomb),                               /* 3532 */
        (void *) (wcscoll),                               /* 3536 */
        (void *) (wcscspn),                               /* 3540 */
        (void *) (wcsrchr),                               /* 3544 */
        (void *) (wcsrtombs),                             /* 3548 */
        (void *) (wcstoll),                               /* 3552 */
        (void *) (wcstoull),                              /* 3556 */
        (void *) (wcstold),                               /* 3560 */
        (void *) (mbsnrtowcs),                            /* 3564 */
        (void *) (wcsnrtombs),                            /* 3568 */
        (void *) (wcsdup),                                /* 3572 */
        (void *) (wcsnlen),                               /* 3576 */
        (void *) (wcpcpy),                                /* 3580 */
        (void *) (wcpncpy),                               /* 3584 */
        (void *) (wcscasecmp),                            /* 3588 */
        (void *) (wcscasecmp_l),                          /* 3592 */
        (void *) (wcsncasecmp),                           /* 3596 */
        (void *) (wcsncasecmp_l),                         /* 3600 */
        (void *) (wcscoll_l),                             /* 3604 */
        (void *) (wcsxfrm_l),                             /* 3608 */
        /* wctype.h */
        (void *) (iswalnum),                              /* 3612 */
        (void *) (iswalpha),                              /* 3616 */
        (void *) (iswcntrl),                              /* 3620 */
        (void *) (iswdigit),                              /* 3624 */
        (void *) (iswxdigit),                             /* 3628 */
        (void *) (iswgraph),                              /* 3632 */
        (void *) (iswpunct),                              /* 3636 */
        (void *) (iswprint),                              /* 3640 */
        (void *) (iswlower),                              /* 3644 */
        (void *) (iswupper),                              /* 3648 */
        (void *) (iswspace),                              /* 3652 */
        (void *) (iswblank),                              /* 3656 */
        (void *) (towlower),                              /* 3660 */
        (void *) (towupper),                              /* 3664 */
        (void *) (wctype),                                /* 3668 */
        (void *) (iswctype),                              /* 3672 */
        (void *) (wctrans),                               /* 3676 */
        (void *) (towctrans),                             /* 3680 */
        /* arpa/inet.h */
        (void *) (inet_addr),                             /* 3684 */
        (void *) (inet_aton),                             /* 3688 */
        (void *) (inet_lnaof),                            /* 3692 */
        (void *) (inet_makeaddr),                         /* 3696 */
        (void *) (inet_netof),                            /* 3700 */
        (void *) (inet_network),                          /* 3704 */
        (void *) (inet_ntoa),                             /* 3708 */
        (void *) (inet_ntop),                             /* 3712 */
        (void *) (inet_pton),                             /* 3716 */
        /* arpa/nameser.h */
        (void *) (ns_get16),                              /* 3720 */
        (void *) (ns_get32),                              /* 3724 */
        (void *) (ns_put16),                              /* 3728 */
        (void *) (ns_put32),                              /* 3732 */
        (void *) (ns_initparse),                          /* 3736 */
        (void *) (ns_parserr),                            /* 3740 */
        (void *) (ns_skiprr),                             /* 3744 */
        (void *) (ns_name_uncompress),                    /* 3748 */
        /* net/if.h */
        (void *) (if_nametoindex),                        /* 3752 */
        (void *) (if_indextoname),                        /* 3756 */
        /* netinet/in.h */
        (void *) (bindresvport),                          /* 3760 */
        (void *) (bindresvport6),                         /* 3764 */
        /* sys/byteswap.h */
        (void *) (bswap16),                               /* 3768 */
        (void *) (bswap24),                               /* 3772 */
        (void *) (bswap32),                               /* 3776 */
        (void *) (bswap64),                               /* 3780 */
        (void *) (swab),                                  /* 3784 */
        (void *) (swab24),                                /* 3788 */
        (void *) (swab32),                                /* 3792 */
        (void *) (swab64),                                /* 3796 */
        /* sys/file.h */
        (void *) (flock),                                 /* 3800 */
        /* sys/ioctl.h */
        (void *) (ioctl),                                 /* 3804 */
        /* sys/ipc.h */
        (void *) (ftok),                                  /* 3808 */
        /* sys/mman.h */
        (void *) (mmap),                                  /* 3812 */
        (void *) (munmap),                                /* 3816 */
        (void *) (msync),                                 /* 3820 */
        /* sys/mount.h */
        (void *) (statfs),                                /* 3824 */
        (void *) (fstatfs),                               /* 3828 */
        /* sys/msg.h */
        (void *) (_msgctl),                               /* 3832 */
        (void *) (_msgget),                               /* 3836 */
        (void *) (_msgrcv),                               /* 3840 */
        (void *) (_msgsnd),                               /* 3844 */
        (void *) (_msgsnap),                              /* 3848 */
        (void *) (_msgids),                               /* 3852 */
        /* sys/resource.h */
        (void *) (getrlimit),                             /* 3856 */
        (void *) (setrlimit),                             /* 3860 */
        (void *) (getrusage),                             /* 3864 */
        /* sys/select.h */
        (void *) (select),                                /* 3868 */
        (void *) (waitselect),                            /* 3872 */
        /* sys/sem.h */
        (void *) (_semctl),                               /* 3876 */
        (void *) (_semget),                               /* 3880 */
        (void *) (_semop),                                /* 3884 */
        (void *) (_semids),                               /* 3888 */
        (void *) (_semtimedop),                           /* 3892 */
        /* sys/shm.h */
        (void *) (_shmat),                                /* 3896 */
        (void *) (_shmctl),                               /* 3900 */
        (void *) (_shmdt),                                /* 3904 */
        (void *) (_shmget),                               /* 3908 */
        (void *) (_shmids),                               /* 3912 */
        /* sys/socket.h */
        (void *) (accept),                                /* 3916 */
        (void *) (bind),                                  /* 3920 */
        (void *) (connect),                               /* 3924 */
        (void *) (getpeername),                           /* 3928 */
        (void *) (getsockname),                           /* 3932 */
        (void *) (getsockopt),                            /* 3936 */
        (void *) (listen),                                /* 3940 */
        (void *) (recv),                                  /* 3944 */
        (void *) (recvfrom),                              /* 3948 */
        (void *) (recvmsg),                               /* 3952 */
        (void *) (send),                                  /* 3956 */
        (void *) (sendmsg),                               /* 3960 */
        (void *) (sendto),                                /* 3964 */
        (void *) (setsockopt),                            /* 3968 */
        (void *) (shutdown),                              /* 3972 */
        (void *) (socket),                                /* 3976 */
        (void *) (socketpair),                            /* 3980 */
        /* sys/stat.h */
        (void *) (stat),                                  /* 3984 */
        (void *) (fstat),                                 /* 3988 */
        (void *) (lstat),                                 /* 3992 */
        (void *) (chmod),                                 /* 3996 */
        (void *) (fchmod),                                /* 4000 */
        (void *) (mkdir),                                 /* 4004 */
        (void *) (rmdir),                                 /* 4008 */
        (void *) (umask),                                 /* 4012 */
        /* sys/statvfs.h */
        (void *) (statvfs),                               /* 4016 */
        (void *) (fstatvfs),                              /* 4020 */
        /* sys/syslog.h */
        (void *) (closelog),                              /* 4024 */
        (void *) (openlog),                               /* 4028 */
        (void *) (setlogmask),                            /* 4032 */
        (void *) (syslog),                                /* 4036 */
        (void *) (vsyslog),                               /* 4040 */
        /* sys/systeminfo.h */
        (void *) (sysinfo),                               /* 4044 */
        /* sys/time.h */
        (void *) (gettimeofday),                          /* 4048 */
        (void *) (settimeofday),                          /* 4052 */
        (void *) (utimes),                                /* 4056 */
        (void *) (getitimer),                             /* 4060 */
        (void *) (setitimer),                             /* 4064 */
        /* sys/timeb.h */
        (void *) (ftime),                                 /* 4068 */
        /* sys/times.h */
        (void *) (times),                                 /* 4072 */
        /* sys/uio.h */
        (void *) (readv),                                 /* 4076 */
        (void *) (writev),                                /* 4080 */
        /* sys/utsname.h */
        (void *) (uname),                                 /* 4084 */

        /* END OF CLIB2 VERSION 1.0   */
        /* New function will go below */

        (void *) (futimens),                              /* 4088 */
        (void *) (utimensat),                             /* 4092 */
        (void *) (__isnan),                               /* 4096 */
        (void *) (__isnanf),                              /* 4100 */
        (void *) (__isnanl),                              /* 4104 */
        (void *) (__isinf),                               /* 4108 */
        (void *) (__isinff),                              /* 4112 */
        (void *) (__isinfl),                              /* 4116 */
        (void *) (__isnormal),                            /* 4120 */
        (void *) (__isnormalf),                           /* 4124 */
        (void *) (__isnormall),                           /* 4128 */
        (void *) (__isfinite_double),                     /* 4132 */
        (void *) (__isfinite_float),                      /* 4136 */
        (void *) (__isfinite_long_double),                /* 4140 */
        (void *) (strtouq),                               /* 4144 */

        (void *) (gettext),                               /* 4148 */
        (void *) (dgettext),                              /* 4152 */
        (void *) (dcgettext),                             /* 4156 */
        (void *) (ngettext),                              /* 4160 */
        (void *) (dngettext),                             /* 4164 */
        (void *) (dcngettext),                            /* 4168 */
        (void *) (textdomain),                            /* 4172 */
        (void *) (bindtextdomain),                        /* 4176 */
        (void *) (bind_textdomain_codeset),               /* 4180 */

        (void *) (ether_ntoa),                            /* 4184 */
        (void *) (ether_aton),                            /* 4188 */
        (void *) (ether_ntoa_r),                          /* 4192 */
        (void *) (ether_aton_r),                          /* 4196 */
        (void *) (ether_line),                            /* 4200 */
        (void *) (ether_ntohost),                         /* 4204 */
        (void *) (ether_hostton),                         /* 4208 */

        (void *) (getrandom),                             /* 4212 */
        (void *) (getentropy),                            /* 4216 */

        (void *) (timegm),                                /* 4220 */
        (void *) (stime),                                 /* 4224 */

        (void *) (dbm_clearerr),                          /* 4228 */
        (void *) (dbm_close),                             /* 4232 */
        (void *) (dbm_delete),                            /* 4236 */
        (void *) (dbm_error),                             /* 4240 */
        (void *) (dbm_fetch),                             /* 4244 */
        (void *) (dbm_firstkey),                          /* 4248 */
        (void *) (dbm_nextkey),                           /* 4252 */
        (void *) (dbm_open),                              /* 4256 */
        (void *) (dbm_store),                             /* 4260 */
        (void *) (dbm_dirfno),                            /* 4264 */
        (void *) (dbopen),                                /* 4268 */

        (void *) (mkostemp),                              /* 4272 */
        (void *) (mkostemps),                             /* 4276 */

        (void *) (strtof_l),                              /* 4282 */
        (void *) (strtod_l),                              /* 4286 */

        (void *) (fpgetround),                            /* 4290 */
        (void *) (fpsetround),                            /* 4294 */
        (void *) (fpgetmask),                             /* 4298 */
        (void *) (fpsetmask),                             /* 4302 */
        (void *) (fpgetsticky),                           /* 4306 */

#ifdef __SPE__
        (void *) (* __addsf3),                           /* 4310 */
        (void *) (* __adddf3),                           /* 4314 */
        (void *) (* __divdf3),                           /* 4318 */
        (void *) (* __divsf3),                           /* 4322 */
        (void *) (* __divtf3),                           /* 4326 */
        (void *) (* __eqdf2),                            /* 4330 */
        (void *) (* __eqsf2),                            /* 4334 */
        (void *) (* __extendsfdf2),                      /* 4338 */
        (void *) (* __fixdfsi),                          /* 4342 */
        (void *) (* __fixsfsi),                          /* 4346 */
        (void *) (* __fixunsdfsi),                       /* 4350 */
        (void *) (* __fixunssfsi),                       /* 4354 */
        (void *) (* __floatsidf),                        /* 4358 */
        (void *) (* __floatsisf),                        /* 4362 */
        (void *) (* __floatunsidf),                      /* 4366 */
        (void *) (* __floatunsisf),                      /* 4370 */
        (void *) (* __gesf2),                            /* 4374 */
        (void *) (* __gedf2),                            /* 4378 */
        (void *) (* __gtdf2),                            /* 4382 */
        (void *) (* __gtsf2),                            /* 4386 */
        (void *) (* __ledf2),                            /* 4390 */
        (void *) (* __lesf2),                            /* 4394 */
        (void *) (* __ltdf2),                            /* 4398 */
        (void *) (* __ltsf2),                            /* 4402 */
        (void *) (* __muldf3),                           /* 4406 */
        (void *) (* __mulsf3),                           /* 4410 */
        (void *) (* __nedf2),                            /* 4414 */
        (void *) (* __nesf2),                            /* 4418 */
        (void *) (* __subdf3),                           /* 4422 */
        (void *) (* __subsf3),                           /* 4426 */
        (void *) (* __truncdfsf2),                       /* 4430 */
#else
        (void *) (* libReserved),                        /* 4310 */
        (void *) (* libReserved),                        /* 4314 */
        (void *) (* libReserved),                        /* 4318 */
        (void *) (* libReserved),                        /* 4322 */
        (void *) (* libReserved),                        /* 4326 */
        (void *) (* libReserved),                        /* 4330 */
        (void *) (* libReserved),                        /* 4334 */
        (void *) (* libReserved),                        /* 4338 */
        (void *) (* libReserved),                        /* 4342 */
        (void *) (* libReserved),                        /* 4346 */
        (void *) (* libReserved),                        /* 4350 */
        (void *) (* libReserved),                        /* 4354 */
        (void *) (* libReserved),                        /* 4358 */
        (void *) (* libReserved),                        /* 4362 */
        (void *) (* libReserved),                        /* 4366 */
        (void *) (* libReserved),                        /* 4370 */
        (void *) (* libReserved),                        /* 4374 */
        (void *) (* libReserved),                        /* 4378 */
        (void *) (* libReserved),                        /* 4382 */
        (void *) (* libReserved),                        /* 4386 */
        (void *) (* libReserved),                        /* 4390 */
        (void *) (* libReserved),                        /* 4394 */
        (void *) (* libReserved),                        /* 4398 */
        (void *) (* libReserved),                        /* 4402 */
        (void *) (* libReserved),                        /* 4406 */
        (void *) (* libReserved),                        /* 4410 */
        (void *) (* libReserved),                        /* 4414 */
        (void *) (* libReserved),                        /* 4418 */
        (void *) (* libReserved),                        /* 4422 */
        (void *) (* libReserved),                        /* 4426 */
        (void *) (* libReserved),                        /* 4430 */
#endif

};