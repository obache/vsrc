# $NetBSD: Makefile,v 1.29 2017/01/19 18:52:18 agc Exp $

DISTNAME=	zorro-1.1p8
PKGNAME=	zorro-1.1pl8
PKGREVISION=	1
CATEGORIES=	misc tk
MASTER_SITES=	ftp://ftp.nuug.no/pub/anders/distfiles/
MASTER_SITES+=	http://atreides.freenix.no/~anders/
MASTER_SITES+=	ftp://totem.fix.no/pub/mirrors/misc/

MAINTAINER=	pkgsrc-users@NetBSD.org
COMMENT=	Simple to-do list manager

NO_BUILD=	yes

USE_TOOLS+=	wish:run

REPLACE_WISH+=		zorro

INSTALLATION_DIRS=	bin share/zorro

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/zorro ${DESTDIR}${PREFIX}/bin/zorro
	${INSTALL_DATA} ${WRKSRC}/DOTzorrorc ${DESTDIR}${PREFIX}/share/zorro

.include "../../x11/tk/interpreter.mk"
.include "../../mk/bsd.pkg.mk"
