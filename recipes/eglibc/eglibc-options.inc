def eglibc_cfg(feature, features, tokens, cnf ):
        if type(tokens) == type(""):
                tokens = [tokens]
        if type(features) == type([]) and feature in features:
                cnf.extend([token + ' = n' for token in tokens])

# Map distro features to eglibc options settings
def features_to_eglibc_settings(d):
        cnf = ([])
        distro_features = bb.data.getVar('DISTRO_FEATURES', d, True).split()
        eglibc_cfg('noinet6',      distro_features, 'OPTION_EGLIBC_ADVANCED_INET6', cnf)
        eglibc_cfg('nobacktrace',      distro_features, 'OPTION_EGLIBC_BACKTRACE', cnf)
        eglibc_cfg('nobig-macros',      distro_features, 'OPTION_EGLIBC_BIG_MACROS', cnf)
        eglibc_cfg('nobsd',      distro_features, 'OPTION_EGLIBC_BSD', cnf)
        eglibc_cfg('nocxx-tests',      distro_features, 'OPTION_EGLIBC_CXX_TESTS', cnf)
        eglibc_cfg('nocatgets',      distro_features, 'OPTION_EGLIBC_CATGETS', cnf)
        eglibc_cfg('nocharsets',      distro_features, 'OPTION_EGLIBC_CHARSETS', cnf)
        eglibc_cfg('nocrypt',      distro_features, 'OPTION_EGLIBC_CRYPT', cnf)
        eglibc_cfg('nocrypt-ufc',      distro_features, 'OPTION_EGLIBC_CRYPT_UFC', cnf)
        eglibc_cfg('nodb-aliases',      distro_features, 'OPTION_EGLIBC_DB_ALIASES', cnf)
        eglibc_cfg('noenvz',      distro_features, 'OPTION_EGLIBC_ENVZ', cnf)
        eglibc_cfg('nofcvt',      distro_features, 'OPTION_EGLIBC_FCVT', cnf)
        eglibc_cfg('nofmtmsg',      distro_features, 'OPTION_EGLIBC_FMTMSG', cnf)
        eglibc_cfg('nofstab',      distro_features, 'OPTION_EGLIBC_FSTAB', cnf)
        eglibc_cfg('noftraverse',      distro_features, 'OPTION_EGLIBC_FTRAVERSE', cnf)
        eglibc_cfg('nogetlogin',      distro_features, 'OPTION_EGLIBC_GETLOGIN', cnf)
        eglibc_cfg('noidn',      distro_features, 'OPTION_EGLIBC_IDN', cnf)
        eglibc_cfg('noinet',      distro_features, 'OPTION_EGLIBC_INET', cnf)
        eglibc_cfg('noinet-anl',      distro_features, 'OPTION_EGLIBC_INET_ANL', cnf)
        eglibc_cfg('nolibm',      distro_features, 'OPTION_EGLIBC_LIBM', cnf)
        eglibc_cfg('nolibm-big',      distro_features, 'OPTION_EGLIBC_LIBM_BIG', cnf)
        eglibc_cfg('nolocales',      distro_features, 'OPTION_EGLIBC_LOCALES', cnf)
        eglibc_cfg('nolocale-code',      distro_features, 'OPTION_EGLIBC_LOCALE_CODE', cnf)
        eglibc_cfg('nomemusage',      distro_features, 'OPTION_EGLIBC_MEMUSAGE', cnf)
        eglibc_cfg('nonis',      distro_features, 'OPTION_EGLIBC_NIS', cnf)
        eglibc_cfg('nonsswitch',      distro_features, 'OPTION_EGLIBC_NSSWITCH', cnf)
        eglibc_cfg('norcmd',      distro_features, 'OPTION_EGLIBC_RCMD', cnf)
        eglibc_cfg('nortld-debug',      distro_features, 'OPTION_EGLIBC_RTLD_DEBUG', cnf)
        eglibc_cfg('nospawn',      distro_features, 'OPTION_EGLIBC_SPAWN', cnf)
        eglibc_cfg('nostreams',      distro_features, 'OPTION_EGLIBC_STREAMS', cnf)
        eglibc_cfg('nosunrpc',      distro_features, 'OPTION_EGLIBC_SUNRPC', cnf)
        eglibc_cfg('noutmp',      distro_features, 'OPTION_EGLIBC_UTMP', cnf)
        eglibc_cfg('noutmpx',      distro_features, 'OPTION_EGLIBC_UTMPX', cnf)
        eglibc_cfg('nowordexp',      distro_features, 'OPTION_EGLIBC_WORDEXP', cnf)
        eglibc_cfg('noposix-clang-wchar',      distro_features, 'OPTION_POSIX_C_LANG_WIDE_CHAR', cnf)
        eglibc_cfg('noposix-regexp',      distro_features, 'OPTION_POSIX_REGEXP', cnf)
        eglibc_cfg('noposix-regexp-glibc',      distro_features, 'OPTION_POSIX_REGEXP_GLIBC', cnf)
        eglibc_cfg('noposix-wchar-io',      distro_features, 'OPTION_POSIX_WIDE_CHAR_DEVICE_IO', cnf)
        return "\n".join(cnf)
