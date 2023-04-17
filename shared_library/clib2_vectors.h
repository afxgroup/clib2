extern long long int __divdi3(long long int, long long int);
extern long long int __moddi3(long long int, long long int);
extern unsigned long long int __udivdi3(unsigned long long int, unsigned long long int);
extern unsigned long long int __umoddi3(unsigned long long int, unsigned long long int);

static void *main_vectors[] =
{
    (void *) (LIB_Obtain),
    (void *) (LIB_Release),
    (void *) (NULL),
    (void *) (NULL),
    /* internal */
    (void *) (LIB_Reserved), //(clib2_start),
    (void *) (__getclib2),
    (void *) (__restore_path_name),
    (void *) (__translate_amiga_to_unix_path_name),
    (void *) (__translate_unix_to_amiga_path_name),
    (void *) (LIB_Reserved),
    (void *) (LIB_Reserved),
    (void *) (LIB_Reserved),
    (void *) (LIB_Reserved),
    (void *) (LIB_Reserved),
    /* aio.h */
    (void *) (aio_init),
    (void *) (aio_read),
    (void *) (aio_write),
    (void *) (lio_listio),
    (void *) (aio_error),
    (void *) (aio_return),
    (void *) (aio_cancel),
    (void *) (aio_suspend),
    (void *) (aio_fsync),
    (void *) (aio_read64),
    (void *) (aio_write64),
    /* argz.h */
    (void *) (argz_create),
    (void *) (argz_create_sep),
    (void *) (argz_count),
    (void *) (argz_extract),
    (void *) (argz_stringify),
    (void *) (argz_add),
    (void *) (argz_add_sep),
    (void *) (argz_append),
    (void *) (argz_delete),
    (void *) (argz_insert),
    (void *) (argz_next),
    (void *) (argz_replace),
    /* assert.h */
    (void *) (__assertion_failure),
    /* complex.h */
    (void *) (cacos),
    (void *) (cacosf),
    (void *) (cacosl),
    (void *) (casin),
    (void *) (casinf),
    (void *) (casinl),
    (void *) (catan),
    (void *) (catanf),
    (void *) (catanl),
    (void *) (ccos),
    (void *) (ccosf),
    (void *) (ccosl),
    (void *) (csin),
    (void *) (csinf),
    (void *) (csinl),
    (void *) (ctan),
    (void *) (ctanf),
    (void *) (ctanl),
    (void *) (cacosh),
    (void *) (cacoshf),
    (void *) (cacoshl),
    (void *) (casinh),
    (void *) (casinhf),
    (void *) (casinhl),
    (void *) (catanh),
    (void *) (catanhf),
    (void *) (catanhl),
    (void *) (ccosh),
    (void *) (ccoshf),
    (void *) (ccoshl),
    (void *) (csinh),
    (void *) (csinhf),
    (void *) (csinhl),
    (void *) (ctanh),
    (void *) (ctanhf),
    (void *) (ctanhl),
    (void *) (cexp),
    (void *) (cexpf),
    (void *) (cexpl),
    (void *) (clog),
    (void *) (clogf),
    (void *) (clogl),
    (void *) (cabs),
    (void *) (cabsf),
    (void *) (cabsl),
    (void *) (cpow),
    (void *) (cpowf),
    (void *) (cpowl),
    (void *) (csqrt),
    (void *) (csqrtf),
    (void *) (csqrtl),
    (void *) (carg),
    (void *) (cargf),
    (void *) (cargl),
    (void *) (conj),
    (void *) (conjf),
    (void *) (conjl),
    (void *) (cproj),
    (void *) (cprojf),
    (void *) (cprojl),
    (void *) (cimag),
    (void *) (cimagf),
    (void *) (cimagl),
    (void *) (creal),
    (void *) (crealf),
    (void *) (creall),
    /* crypt.h */
    (void *) (crypt_r),
    /* ctype.h */
    (void *) (isalnum),
    (void *) (isalpha),
    (void *) (iscntrl),
    (void *) (isdigit),
    (void *) (isgraph),
    (void *) (islower),
    (void *) (isprint),
    (void *) (ispunct),
    (void *) (isspace),
    (void *) (isupper),
    (void *) (isxdigit),
    (void *) (tolower),
    (void *) (toupper),
    (void *) (isblank),
    (void *) (isascii),
    (void *) (toascii),
    /* dirent.h */
    (void *) (opendir),
    (void *) (readdir),
    (void *) (rewinddir),
    (void *) (closedir),
    (void *) (fdopendir),
    (void *) (alphasort),
    (void *) (dirfd),
    (void *) (scandir),
    (void *) (readdir_r),
    (void *) (readdir64_r),
    /* dlfcn.h */
    (void *) (dlclose),
    (void *) (dlerror),
    (void *) (dlopen),
    (void *) (dlsym),
    /* envz.h */
    (void *) (envz_entry),
    (void *) (envz_get),
    (void *) (envz_add),
    (void *) (envz_merge),
    (void *) (envz_remove),
    (void *) (envz_strip),
    /* err.h */
    (void *) (warn),
    (void *) (vwarn),
    (void *) (warnx),
    (void *) (vwarnx),
    (void *) (err),
    (void *) (verr),
    (void *) (errx),
    (void *) (verrx),
    /* fcntl.h */
    (void *) (open),
    (void *) (openat),
    (void *) (creat),
    (void *) (close),
    (void *) (read),
    (void *) (write),
    (void *) (fcntl),
    /* fnmatch.h */
    (void *) (fnmatch),
    /* ftw.h */
    (void *) (ftw),
    (void *) (nftw),
    /* getopt.h */
    (void *) (getopt_long),
    (void *) (getopt_long_only),
    /* glob.h */
    (void *) (glob),
    (void *) (globfree),
    /* grp.h */
    (void *) (endgrent),
    (void *) (getgrent),
    (void *) (getgrgid),
    (void *) (getgrnam),
    (void *) (setgrent),
    /* iconv.h */
    (void *) (iconv_open),
    (void *) (iconv),
    (void *) (iconv_close),
    /* ifaddrs.h */
    (void *) (getifaddrs),
    (void *) (freeifaddrs),
    /* inttypes.h */
    (void *) (imaxabs),
    (void *) (imaxdiv),
    (void *) (strtoimax),
    (void *) (strtoumax),
    (void *) (wcstoimax),
    (void *) (wcstoumax),
    /* langinfo.h */
    (void *) (nl_langinfo),
    /* libgen.h */
    (void *) (basename),
    (void *) (dirname),
    /* locale.h */
    (void *) (setlocale),
    (void *) (localeconv),
    /* malloc.h */
    (void *) (memalign),
    /* math.h */
    (void *) (acos),
    (void *) (asin),
    (void *) (atan),
    (void *) (atan2),
    (void *) (ceil),
    (void *) (cos),
    (void *) (cosh),
    (void *) (sincos),
    (void *) (sincosf),
    (void *) (sincosl),
    (void *) (exp10),
    (void *) (exp10f),
    (void *) (exp10l),
    (void *) (exp),
    (void *) (fabs),
    (void *) (floor),
    (void *) (fmod),
    (void *) (frexp),
    (void *) (ldexp),
    (void *) (log),
    (void *) (log10),
    (void *) (modf),
    (void *) (pow),
    (void *) (pow10),
    (void *) (pow10f),
    (void *) (pow10l),
    (void *) (sin),
    (void *) (sinh),
    (void *) (sqrt),
    (void *) (tan),
    (void *) (tanh),
    (void *) (j0),
    (void *) (y0),
    (void *) (j0f),
    (void *) (y0f),
    (void *) (j1),
    (void *) (y1),
    (void *) (j1f),
    (void *) (y1f),
    (void *) (jn),
    (void *) (yn),
    (void *) (jnf),
    (void *) (ynf),
    (void *) (__fpclassify_float),
    (void *) (__fpclassify_double),
    (void *) (__fpclassify_long_double),
    (void *) (__isfinite_float),
    (void *) (__isfinite_double),
    (void *) (__isfinite_long_double),
    (void *) (__signbit_float),
    (void *) (__signbit_double),
    (void *) (__signbit_long_double),
    (void *) (__isnan),
    (void *) (__isnanf),
    (void *) (__isnanl),
    (void *) (__isinf),
    (void *) (__isinff),
    (void *) (__isinfl),
    (void *) (__isnormalf),
    (void *) (__isnormal),
    (void *) (__isnormall),
    (void *) (acosf),
    (void *) (asinf),
    (void *) (atanf),
    (void *) (atan2f),
    (void *) (ceilf),
    (void *) (cosf),
    (void *) (coshf),
    (void *) (expf),
    (void *) (fabsf),
    (void *) (floorf),
    (void *) (fmodf),
    (void *) (frexpf),
    (void *) (ldexpf),
    (void *) (logf),
    (void *) (log10f),
    (void *) (modff),
    (void *) (powf),
    (void *) (sinf),
    (void *) (sinhf),
    (void *) (sqrtf),
    (void *) (tanf),
    (void *) (tanhf),
    (void *) (acoshf),
    (void *) (asinhf),
    (void *) (atanhf),
    (void *) (cbrtf),
    (void *) (copysignf),
    (void *) (erfcf),
    (void *) (erff),
    (void *) (expm1f),
    (void *) (fdimf),
    (void *) (fmaf),
    (void *) (fmaxf),
    (void *) (fminf),
    (void *) (hypotf),
    (void *) (lgammaf),
    (void *) (log1pf),
    (void *) (logbf),
    (void *) (llrintf),
    (void *) (lrintf),
    (void *) (lroundf),
    (void *) (llround),
    (void *) (llroundf),
    (void *) (nanf),
    (void *) (nearbyintf),
    (void *) (nextafterf),
    (void *) (nexttowardf),
    (void *) (remainderf),
    (void *) (remquof),
    (void *) (rintf),
    (void *) (roundf),
    (void *) (scalblnf),
    (void *) (scalbnf),
    (void *) (tgammaf),
    (void *) (truncf),
    (void *) (ilogbf),
    (void *) (finite),
    (void *) (acosh),
    (void *) (asinh),
    (void *) (atanh),
    (void *) (cbrt),
    (void *) (copysign),
    (void *) (erf),
    (void *) (erfc),
    (void *) (expm1),
    (void *) (fdim),
    (void *) (fma),
    (void *) (fmax),
    (void *) (fmin),
    (void *) (hypot),
    (void *) (lgamma),
    (void *) (log1p),
    (void *) (logb),
    (void *) (llrint),
    (void *) (lrint),
    (void *) (lround),
    (void *) (nan),
    (void *) (nearbyint),
    (void *) (nexttoward),
    (void *) (nextafter),
    (void *) (remainder),
    (void *) (remquo),
    (void *) (rint),
    (void *) (round),
    (void *) (scalbln),
    (void *) (scalbn),
    (void *) (tgamma),
    (void *) (trunc),
    (void *) (ilogb),
    (void *) (exp2f),
    (void *) (exp2),
    (void *) (exp2l),
    //(void *) (log2),
    (void *) (log2f),
    (void *) (log2l),
    (void *) (acosl),
    (void *) (asinl),
    (void *) (atanl),
    (void *) (atan2l),
    (void *) (ceill),
    (void *) (cosl),
    (void *) (coshl),
    (void *) (expl),
    (void *) (fabsl),
    (void *) (floorl),
    (void *) (fmodl),
    (void *) (frexpl),
    (void *) (ldexpl),
    (void *) (logl),
    (void *) (log10l),
    (void *) (modfl),
    (void *) (powl),
    (void *) (sinl),
    (void *) (sinhl),
    (void *) (sqrtl),
    (void *) (tanl),
    (void *) (tanhl),
    (void *) (acoshl),
    (void *) (asinhl),
    (void *) (atanhl),
    (void *) (cbrtl),
    (void *) (copysignl),
    (void *) (erfcl),
    (void *) (erfl),
    (void *) (expm1l),
    (void *) (fdiml),
    (void *) (fmal),
    (void *) (fmaxl),
    (void *) (fminl),
    (void *) (hypotl),
    (void *) (lgammal),
    (void *) (log1pl),
    (void *) (logbl),
    (void *) (llrintl),
    (void *) (lrintl),
    (void *) (llroundl),
    (void *) (lroundl),
    (void *) (nanl),
    (void *) (nearbyintl),
    (void *) (nextafterl),
    (void *) (nexttowardl),
    (void *) (remainderl),
    (void *) (remquol),
    (void *) (rintl),
    (void *) (roundl),
    (void *) (scalblnl),
    (void *) (scalbnl),
    (void *) (tgammal),
    (void *) (truncl),
    (void *) (ilogbl),
    /* netdb.h */
    (void *) (gethostbyaddr),
    (void *) (gethostbyname),
    (void *) (getnetbyaddr),
    (void *) (getnetbyname),
    (void *) (getprotobyname),
    (void *) (getprotobynumber),
    (void *) (getservbyname),
    (void *) (getservbyport),
    (void *) (herror),
    (void *) (hstrerror),
    (void *) (gethostbyname_r),
    (void *) (gethostbyname2_r),
    (void *) (gethostbyname2),
    (void *) (gethostbyaddr_r),
    (void *) (getservbyport_r),
    (void *) (getservbyname_r),
    (void *) (gai_strerror),
    (void *) (getaddrinfo),
    (void *) (freeaddrinfo),
    (void *) (getnameinfo),
    /* nl_types.h */
    //(void *) (catopen),
    //(void *) (catgets),
    //(void *) (catclose),
    /* poll.h */
    (void *) (poll),
    /* pthread.h */
    (void *) (pthread_attr_init),
    (void *) (pthread_attr_destroy),
    (void *) (pthread_attr_getdetachstate),
    (void *) (pthread_attr_setdetachstate),
    (void *) (pthread_attr_getstack),
    (void *) (pthread_attr_setstack),
    (void *) (pthread_attr_getstacksize),
    (void *) (pthread_attr_setstacksize),
    (void *) (pthread_attr_getschedparam),
    (void *) (pthread_attr_setschedparam),
    (void *) (pthread_attr_getschedpolicy),
    (void *) (pthread_attr_setschedpolicy),
    (void *) (pthread_attr_getinheritsched),
    (void *) (pthread_attr_setinheritsched),
    (void *) (pthread_attr_getscope),
    (void *) (pthread_attr_setscope),
    (void *) (pthread_attr_setguardsize),
    (void *) (pthread_attr_getguardsize),
    (void *) (pthread_create),
    (void *) (pthread_detach),
    (void *) (pthread_equal),
    (void *) (pthread_exit),
    (void *) (pthread_join),
    (void *) (pthread_self),
    (void *) (pthread_cancel),
    (void *) (pthread_setcancelstate),
    (void *) (pthread_setcanceltype),
    (void *) (pthread_testcancel),
    (void *) (pthread_once),
    (void *) (pthread_setschedprio),
    (void *) (pthread_setschedparam),
    (void *) (pthread_getschedparam),
    (void *) (pthread_setconcurrency),
    (void *) (pthread_getconcurrency),
    (void *) (pthread_key_create),
    (void *) (pthread_key_delete),
    (void *) (pthread_setspecific),
    (void *) (pthread_getspecific),
    (void *) (pthread_mutexattr_init),
    (void *) (pthread_mutexattr_destroy),
    (void *) (pthread_mutexattr_getpshared),
    (void *) (pthread_mutexattr_setpshared),
    (void *) (pthread_mutexattr_gettype),
    (void *) (pthread_mutexattr_settype),
    (void *) (pthread_mutex_init),
    (void *) (pthread_mutex_destroy),
    (void *) (pthread_mutex_lock),
    (void *) (pthread_mutex_timedlock),
    (void *) (pthread_mutex_trylock),
    (void *) (pthread_mutex_unlock),
    (void *) (pthread_condattr_init),
    (void *) (pthread_condattr_destroy),
    (void *) (pthread_condattr_getpshared),
    (void *) (pthread_condattr_setpshared),
    (void *) (pthread_cond_init),
    (void *) (pthread_cond_destroy),
    (void *) (pthread_cond_wait),
    (void *) (pthread_cond_timedwait),
    (void *) (pthread_cond_signal),
    (void *) (pthread_cond_broadcast),
    (void *) (pthread_barrierattr_init),
    (void *) (pthread_barrierattr_destroy),
    (void *) (pthread_barrierattr_getpshared),
    (void *) (pthread_barrierattr_setpshared),
    (void *) (pthread_barrier_init),
    (void *) (pthread_barrier_destroy),
    (void *) (pthread_barrier_wait),
    (void *) (pthread_rwlockattr_init),
    (void *) (pthread_rwlockattr_destroy),
    (void *) (pthread_rwlockattr_getpshared),
    (void *) (pthread_rwlockattr_setpshared),
    (void *) (pthread_rwlock_init),
    (void *) (pthread_rwlock_destroy),
    (void *) (pthread_rwlock_tryrdlock),
    (void *) (pthread_rwlock_trywrlock),
    (void *) (pthread_rwlock_rdlock),
    (void *) (pthread_rwlock_timedrdlock),
    (void *) (pthread_rwlock_wrlock),
    (void *) (pthread_rwlock_timedwrlock),
    (void *) (pthread_rwlock_unlock),
    (void *) (pthread_spin_init),
    (void *) (pthread_spin_destroy),
    (void *) (pthread_spin_lock),
    (void *) (pthread_spin_trylock),
    (void *) (pthread_spin_unlock),
    (void *) (pthread_setname_np),
    (void *) (pthread_getname_np),
    (void *) (pthread_cond_timedwait_relative_np),
    (void *) (pthread_getattr_np),
    (void *) (pthread_cleanup_push),
    (void *) (pthread_cleanup_pop),
    (void *) (pthread_kill),
    /* pwd.h */
    (void *) (endpwent),
    (void *) (getpwent),
    (void *) (getpwnam),
    (void *) (getpwnam_r),
    (void *) (getpwuid),
    (void *) (getpwuid_r),
    (void *) (setpwent),
    /* regex.h */
    (void *) (regcomp),
    (void *) (regexec),
    (void *) (regfree),
    (void *) (regerror),
    /* resolv.h */
    (void *) (res_init),
    (void *) (res_query),
    (void *) (res_querydomain),
    (void *) (res_search),
    (void *) (res_mkquery),
    (void *) (res_send),
    (void *) (dn_comp),
    (void *) (dn_expand),
    (void *) (dn_skipname),
    /* sched.h */
    (void *) (sched_get_priority_max),
    (void *) (sched_get_priority_min),
    (void *) (sched_yield),
    /* search.h */
    (void *) (hcreate),
    (void *) (hdestroy),
    (void *) (hsearch),
    (void *) (hcreate_r),
    (void *) (hdestroy_r),
    (void *) (hsearch_r),
    (void *) (lfind),
    (void *) (lsearch),
    (void *) (tdelete),
    (void *) (tdestroy),
    (void *) (tfind),
    (void *) (tsearch),
    (void *) (twalk),
    /* semaphore.h */
    (void *) (sem_init),
    (void *) (sem_destroy),
    (void *) (sem_trywait),
    (void *) (sem_wait),
    (void *) (sem_timedwait),
    (void *) (sem_post),
    (void *) (sem_open),
    (void *) (sem_close),
    (void *) (sem_unlink),
    (void *) (sem_getvalue),
    /* setjmp.h */
    (void *) (setjmp),
    (void *) (__sigsetjmp),
    (void *) (_setjmp),
    (void *) (longjmp),
    (void *) (_longjmp),
    (void *) (siglongjmp),
    (void *) (__sigjmp_save),
    /* signal.h */
    (void *) (signal),
    (void *) (raise),
    (void *) (sigmask),
    (void *) (sigblock),
    (void *) (sigsetmask),
    (void *) (sigprocmask),
    (void *) (sigismember),
    (void *) (sigemptyset),
    (void *) (sigfillset),
    (void *) (sigdelset),
    (void *) (sigaddset),
    (void *) (kill),
    (void *) (sigaction),
    /* stdio.h */
    (void *) (perror),
    (void *) (fopen),
    (void *) (fclose),
    (void *) (fflush),
    (void *) (freopen),
    (void *) (setvbuf),
    (void *) (setbuf),
    (void *) (fseek),
    (void *) (ftell),
    (void *) (rewind),
    (void *) (fgetpos),
    (void *) (fsetpos),
    (void *) (fgetc),
    (void *) (getc),
    (void *) (getchar),
    (void *) (ungetc),
    (void *) (fputc),
    (void *) (putc),
    (void *) (putchar),
    (void *) (fgets),
    (void *) (gets),
    (void *) (fscanf),
    (void *) (scanf),
    (void *) (sscanf),
    (void *) (fputs),
    (void *) (puts),
    (void *) (dprintf),
    (void *) (fprintf),
    (void *) (printf),
    (void *) (sprintf),
    (void *) (vdprintf),
    (void *) (vfprintf),
    (void *) (vprintf),
    (void *) (vsprintf),
    (void *) (fread),
    (void *) (fwrite),
    (void *) (feof),
    (void *) (ferror),
    (void *) (clearerr),
    (void *) (rename),
    (void *) (remove),
    (void *) (tmpfile),
    (void *) (tmpnam),
    (void *) (tempnam),
    (void *) (ctermid),
    (void *) (__flush),
    (void *) (__unlockfile),
    (void *) (getc_unlocked),
    (void *) (getchar_unlocked),
    (void *) (putc_unlocked),
    (void *) (putchar_unlocked),
    (void *) (getline),
    (void *) (getdelim),
    (void *) (fdopen),
    (void *) (fileno),
    (void *) (asprintf),
    (void *) (vsnprintf),
    (void *) (pclose),
    (void *) (popen),
    (void *) (fseeko),
    (void *) (ftello),
    (void *) (flockfile),
    (void *) (funlockfile),
    (void *) (ftrylockfile),
    (void *) (vasprintf),
    (void *) (vfscanf),
    (void *) (vsscanf),
    (void *) (vscanf),
    (void *) (snprintf),
    /* stdio_ext.h */
    (void *) (_flushlbf),
    (void *) (__fsetlocking),
    (void *) (__fwriting),
    (void *) (__freading),
    (void *) (__freadable),
    (void *) (__fwritable),
    (void *) (__flbf),
    (void *) (__fbufsize),
    (void *) (__fpending),
    (void *) (__fpurge),
    (void *) (fpurge),
    (void *) (__fseterr),
    (void *) (__freadahead),
    (void *) (__freadptrinc),
    /* stdlib.h */
    (void *) (__mb_cur_max),
    (void *) (mblen),
    (void *) (mbtowc),
    (void *) (_mbtowc_r),
    (void *) (_mbstowcs_r),
    (void *) (wctomb),
    (void *) (_wctomb_r),
    (void *) (mbstowcs),
    (void *) (wcstombs),
    (void *) (_wcstombs_r),
    (void *) (malloc),
    (void *) (calloc),
    (void *) (free),
    (void *) (realloc),
    (void *) (valloc),
    (void *) (aligned_alloc),
    (void *) (posix_memalign),
    (void *) (abs),
    (void *) (labs),
    (void *) (div),
    (void *) (ldiv),
    (void *) (rand),
    (void *) (srand),
    (void *) (random),
    (void *) (srandom),
    (void *) (initstate),
    (void *) (setstate),
    (void *) (l64a),
    (void *) (a64l),
    (void *) (setkey),
    (void *) (system),
    (void *) (exit),
    (void *) (abort),
    (void *) (atexit),
    (void *) (getenv),
    (void *) (bsearch),
    (void *) (qsort),
    (void *) (strtod),
    (void *) (strtol),
    (void *) (strtoul),
    (void *) (strtoq),
    (void *) (atof),
    (void *) (atoi),
    (void *) (atol),
    (void *) (itoa),
    (void *) (lltoa),
    (void *) (_exit),
    (void *) (rand_r),
    (void *) (mktemp),
    (void *) (mkstemp),
    (void *) (unsetenv),
    (void *) (setenv),
    (void *) (putenv),
    (void *) (mkdtemp),
    (void *) (getexecname),
    (void *) (strtoll),
    (void *) (strtold),
    (void *) (strtoull),
    (void *) (atoll),
    (void *) (llabs),
    (void *) (lldiv),
    (void *) (strtof),
    (void *) (atoff),
    (void *) (_Exit),
    (void *) (ecvt),
    (void *) (fcvt),
    (void *) (gcvt),
    (void *) (secure_getenv),
    (void *) (reallocarray),
    (void *) (qsort_r),
    (void *) (arc4random),
    (void *) (arc4random_buf),
    (void *) (arc4random_uniform),
    (void *) (arc4random_stir),
    (void *) (arc4random_addrandom),
    /* string.h */
    (void *) (strerror),
    (void *) (strcat),
    (void *) (strncat),
    (void *) (strcmp),
    (void *) (strncmp),
    (void *) (strcpy),
    (void *) (strncpy),
    (void *) (strnlen),
    (void *) (strlen),
    (void *) (strchr),
    (void *) (strrchr),
    (void *) (strspn),
    (void *) (strcspn),
    (void *) (strpbrk),
    (void *) (strtok),
    (void *) (strstr),
    (void *) (strnstr),
    (void *) (strsep),
    (void *) (stpcpy),
    (void *) (stpncpy),
    (void *) (stccpy),
    (void *) (strcoll),
    (void *) (strxfrm),
    (void *) (memmove),
    (void *) (memchr),
    (void *) (memcmp),
    (void *) (memcpy),
    (void *) (memset),
    (void *) (strerror_r),
    (void *) (strdup),
    (void *) (strndup),
    (void *) (bcopy),
    (void *) (bzero),
    (void *) (explicit_bzero),
    (void *) (bcmp),
    (void *) (strlcpy),
    (void *) (strlcat),
    (void *) (strtok_r),
    (void *) (strsignal),
    (void *) (memccpy),
    (void *) (index),
    (void *) (rindex),
    (void *) (strverscmp),
    (void *) (strchrnul),
    (void *) (strcasestr),
    (void *) (memmem),
    (void *) (memrchr),
    (void *) (mempcpy),
    /* strings.h */
    (void *) (strcasecmp),
    (void *) (strncasecmp),
    (void *) (ffs),
    (void *) (ffsl),
    (void *) (ffsll),
    /* termcap.h */
    (void *) (tgetent),
    (void *) (tgetnum),
    (void *) (tgetflag),
    (void *) (tgetstr),
    (void *) (tputs),
    (void *) (tparam),
    (void *) (tgoto),
    /* termios.h */
    (void *) (tcgetattr),
    (void *) (tcsetattr),
    (void *) (tcsendbreak),
    (void *) (tcdrain),
    (void *) (tcflush),
    (void *) (tcflow),
    (void *) (cfmakeraw),
    (void *) (cfgetispeed),
    (void *) (cfgetospeed),
    (void *) (cfsetispeed),
    (void *) (cfsetospeed),
    /* time.h */
    (void *) (clock),
    (void *) (time),
    (void *) (asctime),
    (void *) (ctime),
    (void *) (gmtime),
    (void *) (localtime),
    (void *) (mktime),
    (void *) (difftime),
    (void *) (strftime),
    (void *) (strptime),
    (void *) (asctime_r),
    (void *) (ctime_r),
    (void *) (gmtime_r),
    (void *) (localtime_r),
    (void *) (tzset),
    (void *) (nanosleep),
    (void *) (clock_gettime),
    (void *) (clock_settime),
    (void *) (clock_getres),
    (void *) (clock_nanosleep),
    (void *) (rdtsc),
    (void *) (clock_gettime64),
    /* uchar.h */
    (void *) (c16rtomb),
    (void *) (mbrtoc16),
    (void *) (c32rtomb),
    (void *) (mbrtoc32),
    /* ulimit.h */
    (void *) (ulimit),
    /* unistd.h */
    (void *) (isatty),
    (void *) (dup),
    (void *) (dup2),
    (void *) (lseek),
    (void *) (access),
    (void *) (chown),
    (void *) (fchown),
    (void *) (lchown),
    (void *) (truncate),
    (void *) (ftruncate),
    (void *) (getpagesize),
    (void *) (ftruncate64),
    (void *) (truncate64),
    (void *) (lseek64),
    (void *) (alarm),
    (void *) (ualarm),
    (void *) (link),
    (void *) (unlink),
    (void *) (symlink),
    (void *) (readlink),
    (void *) (chdir),
    (void *) (fchdir),
    (void *) (lockf),
    (void *) (sleep),
    (void *) (usleep),
    (void *) (pause),
    (void *) (getopt),
    (void *) (getpid),
    (void *) (getppid),
    (void *) (getpgrp),
    (void *) (tcgetpgrp),
    (void *) (tcsetpgrp),
    (void *) (realpath),
    (void *) (fsync),
    (void *) (fdatasync),
    (void *) (ttyname),
    (void *) (ttyname_r),
    (void *) (encrypt),
    (void *) (execl),
    (void *) (execle),
    (void *) (execlp),
    (void *) (execv),
    (void *) (execve),
    (void *) (execvp),
    (void *) (spawnv),
    (void *) (spawnvp),
    (void *) (profil),
    (void *) (sysconf),
    (void *) (enableUnixPaths),
    (void *) (disableUnixPaths),
    (void *) (enableAltivec),
    (void *) (disableAltivec),
    (void *) (enableOptimizedFunctions),
    (void *) (disableOptimizedFunctions),
    (void *) (getcwd),
    (void *) (getwd),
    (void *) (get_current_dir_name),
    (void *) (gethostid),
    (void *) (gethostname),
    (void *) (getdomainname),
    (void *) (setdomainname),
    (void *) (getlogin),
    (void *) (getlogin_r),
    (void *) (crypt),
    (void *) (getegid),
    (void *) (geteuid),
    (void *) (getgid),
    (void *) (getgroups),
    (void *) (getpass),
    (void *) (getuid),
    (void *) (initgroups),
    (void *) (setegid),
    (void *) (seteuid),
    (void *) (setgid),
    (void *) (setgroups),
    (void *) (setregid),
    (void *) (setreuid),
    (void *) (setsid),
    (void *) (setuid),
    (void *) (setlogin),
    (void *) (pathconf),
    (void *) (fpathconf),
    (void *) (pipe),
    (void *) (pipe2),
    (void *) (pread),
    (void *) (pwrite),
    (void *) (pread64),
    (void *) (pwrite64),
    /* utime.h */
    (void *) (utime),
    /* wchar.h */
    (void *) (btowc),
    (void *) (wctob),
    (void *) (mbsinit),
    (void *) (wcrtomb),
    (void *) (mbsrtowcs),
    (void *) (wcscat),
    (void *) (wcsncat),
    (void *) (wcscmp),
    (void *) (wcsncmp),
    (void *) (wcscpy),
    (void *) (wcsncpy),
    (void *) (wcslen),
    (void *) (wcschr),
    (void *) (wcsspn),
    (void *) (wcspbrk),
    (void *) (wcstok),
    (void *) (wcsstr),
    (void *) (wcswidth),
    (void *) (wcwidth),
    (void *) (wcstod),
    (void *) (wcstol),
    (void *) (wcstoul),
    (void *) (wcstof),
    (void *) (wscoll),
    (void *) (wcsxfrm),
    (void *) (wmemchr),
    (void *) (wmemcmp),
    (void *) (wmemcpy),
    (void *) (wmemmove),
    (void *) (wmemset),
    (void *) (fwide),
    (void *) (fgetwc),
    (void *) (getwc),
    (void *) (getwchar),
    (void *) (ungetwc),
    (void *) (fgetws),
    (void *) (fwscanf),
    (void *) (swscanf),
    (void *) (vfwscanf),
    (void *) (vswscanf),
    (void *) (vwscanf),
    (void *) (wscanf),
    (void *) (fputwc),
    (void *) (putwc),
    (void *) (putwchar),
    (void *) (fputws),
    (void *) (fwprintf),
    (void *) (swprintf),
    (void *) (vfwprintf),
    (void *) (vswprintf),
    (void *) (vwprintf),
    (void *) (wprintf),
    (void *) (wcsftime),
    (void *) (mbrlen),
    (void *) (mbrtowc),
    (void *) (wcrtomb),
    (void *) (wcscoll),
    (void *) (wcscspn),
    (void *) (wcsrchr),
    (void *) (wcsrtombs),
    (void *) (wcstoll),
    (void *) (wcstoull),
    (void *) (wcstold),
    (void *) (mbsnrtowcs),
    (void *) (wcsnrtombs),
    (void *) (wcsdup),
    (void *) (wcsnlen),
    (void *) (wcpcpy),
    (void *) (wcpncpy),
    (void *) (wcscasecmp),
    (void *) (wcscasecmp_l),
    (void *) (wcsncasecmp),
    (void *) (wcsncasecmp_l),
    (void *) (wcscoll_l),
    (void *) (wcsxfrm_l),
    /* wctype.h */
    (void *) (iswalnum),
    (void *) (iswalpha),
    (void *) (iswcntrl),
    (void *) (iswdigit),
    (void *) (iswxdigit),
    (void *) (iswgraph),
    (void *) (iswpunct),
    (void *) (iswprint),
    (void *) (iswlower),
    (void *) (iswupper),
    (void *) (iswspace),
    (void *) (iswblank),
    (void *) (towlower),
    (void *) (towupper),
    (void *) (wctype),
    (void *) (iswctype),
    (void *) (wctrans),
    (void *) (towctrans),
    /* arpa/inet.h */
    (void *) (inet_addr),
    (void *) (inet_aton),
    (void *) (inet_lnaof),
    (void *) (inet_makeaddr),
    (void *) (inet_netof),
    (void *) (inet_network),
    (void *) (inet_ntoa),
    (void *) (inet_ntop),
    (void *) (inet_pton),
    /* arpa/nameser.h */
    (void *) (ns_get16),
    (void *) (ns_get32),
    (void *) (ns_put16),
    (void *) (ns_put32),
    (void *) (ns_initparse),
    (void *) (ns_parserr),
    (void *) (ns_skiprr),
    (void *) (ns_name_uncompress),
    /* net/if.h */
    (void *) (if_nametoindex),
    (void *) (if_indextoname),
    /* netinet/in.h */
    (void *) (bindresvport),
    (void *) (bindresvport6),
    /* sys/byteswap.h */
    (void *) (bswap16),
    (void *) (bswap24),
    (void *) (bswap32),
    (void *) (bswap64),
    (void *) (swab),
    (void *) (swab24),
    (void *) (swab32),
    (void *) (swab64),
    /* sys/file.h */
    (void *) (flock),
    /* sys/iconvnls.h */
    // (void *) (_iconv_nls_get_state),
    // (void *) (_iconv_nls_set_state),
    // (void *) (_iconv_nls_is_stateful),
    // (void *) (_iconv_nls_get_mb_cur_max),
    // (void *) (_iconv_nls_conv),
    // (void *) (_iconv_nls_construct_filename),
    // (void *) (_iconv_nls_open),
    // (void *) (_iconv_resolve_encoding_name),
    /* sys/ioctl.h */
    (void *) (ioctl),
    /* sys/ipc.h */
    (void *) (ftok),
    /* sys/mman.h */
    (void *) (mmap),
    (void *) (munmap),
    (void *) (msync),
    /* sys/mount.h */
    (void *) (statfs),
    (void *) (fstatfs),
    /* sys/msg.h */
    (void *) (_msgctl),
    (void *) (_msgget),
    (void *) (_msgrcv),
    (void *) (_msgsnd),
    (void *) (_msgsnap),
    (void *) (_msgids),
    /* sys/resource.h */
    (void *) (getrlimit),
    (void *) (setrlimit),
    (void *) (getrusage),
    /* sys/select.h */
    (void *) (select),
    (void *) (waitselect),
    /* sys/sem.h */
    (void *) (_semctl),
    (void *) (_semget),
    (void *) (_semop),
    (void *) (_semids),
    (void *) (_semtimedop),
    /* sys/shm.h */
    (void *) (_shmat),
    (void *) (_shmctl),
    (void *) (_shmdt),
    (void *) (_shmget),
    (void *) (_shmids),
    /* sys/socket.h */
    (void *) (accept),
    (void *) (bind),
    (void *) (connect),
    (void *) (getpeername),
    (void *) (getsockname),
    (void *) (getsockopt),
    (void *) (listen),
    (void *) (recv),
    (void *) (recvfrom),
    (void *) (recvmsg),
    (void *) (send),
    (void *) (sendmsg),
    (void *) (sendto),
    (void *) (setsockopt),
    (void *) (shutdown),
    (void *) (socket),
    (void *) (socketpair),
    /* sys/stat.h */
    (void *) (stat),
    (void *) (fstat),
    (void *) (lstat),
    (void *) (chmod),
    (void *) (fchmod),
    (void *) (mkdir),
    (void *) (rmdir),
    (void *) (umask),
    /* sys/statvfs.h */
    (void *) (statvfs),
    (void *) (fstatvfs),
    /* sys/syslog.h */
    (void *) (closelog),
    (void *) (openlog),
    (void *) (setlogmask),
    (void *) (syslog),
    (void *) (vsyslog),
    /* sys/systeminfo.h */
    (void *) (sysinfo),
    /* sys/time.h */
    (void *) (gettimeofday),
    (void *) (settimeofday),
    (void *) (utimes),
    (void *) (getitimer),
    (void *) (setitimer),
    /* sys/timeb.h */
    (void *) (ftime),
    /* sys/times.h */
    (void *) (times),
    /* sys/uio.h */
    (void *) (readv),
    (void *) (writev),
    /* sys/utsname.h */
    (void *) (uname)


    /* END OF CLIB2 VERSION 1.0   */
    /* New function will go below */
};