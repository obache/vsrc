# $NetBSD: Makefile,v 1.25 2021/04/23 23:57:29 wiz Exp $

DISTNAME=	lhs-0.1
PKGREVISION=	10
CATEGORIES=	www
#MASTER_SITES=	ftp://dev.null.pl/pub/

MAINTAINER=	dawszy@arhea.net
#HOMEPAGE=	http://dev.null.pl/
COMMENT=	Lightweight HTTP Server, IPv6-aware and SSL-enabled

WRKSRC=		${WRKDIR}/lhs
GNU_CONFIGURE=	yes

BUILD_DEFS+=	IPV6_READY

MAKE_ENV+=	OPENSSL_ROOT=${BUILDLINK_PREFIX.openssl}
MAKE_ENV+=	DEFAULT_ROOT_DIR=${PREFIX}/share/httpd/htdocs

LIBS.SunOS+=	-lsocket

# overrides definition of read
FORTIFY_SUPPORTED=	no

INSTALLATION_DIRS=	sbin

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/lhs ${DESTDIR}${PREFIX}/sbin/lhs

.include "../../security/openssl/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
