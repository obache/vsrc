$NetBSD: patch-src_unichar.cpp,v 1.2 2020/05/26 11:29:17 joerg Exp $

--- src/unichar.cpp.orig	2020-03-25 15:28:01.041787497 +0000
+++ src/unichar.cpp
@@ -6,6 +6,8 @@
 #include <cassert>
 #include <iostream>
 
+using icu::UnicodeString;
+
 UConverter *g_utf16be;
 
 static void InitConverter() __attribute__((constructor));
