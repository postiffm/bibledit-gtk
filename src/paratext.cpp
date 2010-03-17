/*
 ** Copyright (©) 2003-2009 Teus Benschop.
 **  
 ** This program is free software; you can redistribute it and/or modify
 ** it under the terms of the GNU General Public License as published by
 ** the Free Software Foundation; either version 3 of the License, or
 ** (at your option) any later version.
 **  
 ** This program is distributed in the hope that it will be useful,
 ** but WITHOUT ANY WARRANTY; without even the implied warranty of
 ** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 ** GNU General Public License for more details.
 **  
 ** You should have received a copy of the GNU General Public License
 ** along with this program; if not, write to the Free Software
 ** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 **  
 */

#include "paratext.h"
#include "directories.h"
#include "gwrappers.h"
#include "styles.h"
#include "utilities.h"

ExportParatextStylesheet::ExportParatextStylesheet(int dummy) {
  // Load the standard Paratext stylesheet.
  {
    ReadText rt(gw_build_filename(directories_get_package_data(), "usfm.sty"), true, false);
    stylesheet_lines = rt.lines;
  }
  // Indicate it was exported from bibledit.
  if (!stylesheet_lines.empty()) {
    stylesheet_lines[0].append("# Exported from Bibledit-Gtk");
  }
}

ExportParatextStylesheet::~ExportParatextStylesheet() {
}

void ExportParatextStylesheet::convert(const ustring &name) {
  // Pointer to the styles object.
  extern Styles *styles;

  // The stylesheet to export.
  Stylesheet *sheet = styles->stylesheet(name);

  // Go through the markers.
  for (unsigned int i = 0; i < sheet->styles.size(); i++) {
    StyleV2 *style = sheet->styles[i];
    marker = style->marker;
    if (marker == "id") {
    } else if (marker == "ide") {
    } else if (marker == "h") {
    } else if (marker == "h1") {
    } else if (marker == "h2") {
    } else if (marker == "h3") {
    } else if (marker == "toc1") {
    } else if (marker == "toc2") {
    } else if (marker == "toc3") {
    } else if (marker == "rem") {
    } else if (marker == "sts") {
    } else if (marker == "restore") {
    } else if (marker == "imt") {
      //set_font_size (style->fontsize);
    } else if (marker == "ide") {
    } else if (marker == "ide") {
    } else if (marker == "ide") {
    } else if (marker == "ide") {
    } else if (marker == "ide") {
    } // Be aware that this has not yet been implemented. The export just produces the standard Paratext stylesheet.
  }
  /*
\Marker imt
\Name imt - Introduction - Major Title Level 1
\Description Introduction major title, level 1 (if single level) (basic)
\OccursUnder id
\Rank 5
\TextProperties paragraph publishable vernacular level_1
\TextType Other
\StyleType Paragraph
\FontSize 14
\Bold
\Justification Center
\SpaceBefore 8
\SpaceAfter 4

\Marker imt1
\Name imt1 - Introduction - Major Title Level 1
\Description Introduction major title, level 1 (if multiple levels)
\OccursUnder id
\Rank 5
\TextProperties paragraph publishable vernacular level_1
\TextType Other
\StyleType Paragraph
\FontSize 14
\Bold
\Justification Center
\SpaceBefore 8
\SpaceAfter 4

\Marker imt2
\Name imt2 - Introduction - Major Title Level 2
\Description Introduction major title, level 2
\OccursUnder id
\Rank 5
\TextProperties paragraph publishable vernacular level_2
\TextType other
\StyleType Paragraph
\FontSize 13
\Italic
\Justification Center
\SpaceBefore 6
\SpaceAfter 3

\Marker imt3
\Name imt3 - Introduction - Major Title Level 3
\Description Introduction major title, level 3
\OccursUnder id
\Rank 5
\TextProperties paragraph publishable vernacular level_3
\TextType Other
\StyleType Paragraph
\FontSize 12
\Bold
\Justification Center
\SpaceBefore 2
\SpaceAfter 2

\Marker imt4
\Name imt4 - Introduction - Major Title Level 4
\Description Introduction major title, level 4 (usually within parenthesis)
\OccursUnder id
\Rank 5
\TextProperties paragraph publishable vernacular level_4
\TextType Other
\StyleType Paragraph
\FontSize 12
\Italic
\Justification Center
\SpaceBefore 2
\SpaceAfter 2
 
\Marker imte
\Name imte - Introduction - [Uncommon] Major Title at Introduction End Level 1
\Description Introduction major title at introduction end, level 1 (if single level)
\TextProperties paragraph publishable vernacular level_1
\TextType Other
\OccursUnder id
\Rank 7
\StyleType Paragraph
\FontSize 20
\Bold
\Justification Center
\SpaceBefore 8
\SpaceAfter 4

\Marker imte1
\Name imte1 - Introduction - [Uncommon] Major Title at Introduction End Level 1
\Description Introduction major title at introduction end, level 1 (if multiple levels)
\TextProperties paragraph publishable vernacular level_1
\TextType Other
\OccursUnder id
\Rank 7
\StyleType Paragraph
\FontSize 20
\Bold
\Justification Center
\SpaceBefore 8
\SpaceAfter 4

\Marker imte2
\Name imte2 - Introduction - [Uncommon] Major Title at Introduction End Level 2
\Description Introduction major title at introduction end, level 2
\TextProperties paragraph publishable vernacular level_2
\TextType Other
\OccursUnder id
\Rank 7
\StyleType Paragraph
\FontSize 16
\Italic
\Justification Center
\SpaceAfter 2 

\Marker is
\Name is - Introduction - Section Heading Level 1
\Description Introduction section heading, level 1 (if single level) (basic)
\OccursUnder id
\Rank 6
\TextType Other
\TextProperties paragraph publishable vernacular level_1
\StyleType Paragraph
\FontSize 14
\Bold
\Justification Center
\SpaceBefore 8
\SpaceAfter 4

\Marker is1 
\Name is1 - Introduction - Section Heading Level 1
\Description Introduction section heading, level 1 (if multiple levels)
\OccursUnder id
\Rank 6
\TextType Other
\TextProperties paragraph publishable vernacular level_1
\StyleType Paragraph
\FontSize 14
\Bold
\Justification Center
\SpaceBefore 8
\SpaceAfter 4

\Marker is2
\Name is2 - Introduction - Section Heading Level 2
\Description Introduction section heading, level 2 
\OccursUnder id
\Rank 6
\TextType Other
\TextProperties paragraph publishable vernacular level_2
\StyleType Paragraph
\FontSize 12
\Bold
\Justification Center
\SpaceBefore 8
\SpaceAfter 4

\Marker iot 
\Name iot - Introduction - Outline Title
\Description Introduction outline title (basic)
\OccursUnder id
\Rank 6
\TextType Other
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\Bold
\Justification Center
\SpaceBefore 8
\SpaceAfter 4

\Marker io
\Name io - Introduction - Outline Level 1
\Description Introduction outline text, level 1 (if single level)
\OccursUnder id
\Rank 6
\TextType Other
\TextProperties paragraph publishable vernacular level_1
\StyleType paragraph
\FontSize 12
\LeftMargin .5

\Marker io1
\Name io1 - Introduction - Outline Level 1
\Description Introduction outline text, level 1 (if multiple levels) (basic)
\OccursUnder id
\Rank 6
\TextType Other
\TextProperties paragraph publishable vernacular level_1
\StyleType paragraph
\FontSize 12
\LeftMargin .5

\Marker io2
\Name io2 - Introduction - Outline Level 2
\Description Introduction outline text, level 2 
\OccursUnder id
\Rank 6
\TextType Other
\TextProperties paragraph publishable vernacular level_2
\StyleType paragraph
\FontSize 12
\LeftMargin .75

\Marker io3
\Name io3 - Introduction - Outline Level 3
\Description Introduction outline text, level 3 
\OccursUnder id
\Rank 6
\TextType Other
\TextProperties paragraph publishable vernacular level_3
\StyleType paragraph
\FontSize 12
\LeftMargin 1

\Marker io4
\Name io4 - Introduction - Outline Level 4
\Description Introduction outline text, level 4 
\OccursUnder id
\Rank 6
\TextType Other
\TextProperties paragraph publishable vernacular level_4
\StyleType paragraph
\FontSize 12
\LeftMargin 1.25

\Marker ior
\Endmarker ior*
\Name ior...ior* - Introduction - Outline References Range
\Description Introduction references range for outline entry; for marking references separately
\OccursUnder id io io1 io2 io3 io4 NEST
\TextType Other
\TextProperties paragraph publishable vernacular level_4
\StyleType Character
\FontSize 12

\Marker ip
\Name ip - Introduction - Paragraph
\Description Introduction prose paragraph (basic)
\OccursUnder id
\Rank 6
\TextType Other
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\FirstLineIndent .125   # 1/8 inch first line indent

\Marker im
\Name im - Introduction - Paragraph - no first line indent
\Description Introduction prose paragraph, with no first line indent (may occur after poetry)
\OccursUnder id
\Rank 6
\TextType Other
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12

\Marker ipi
\Name ipi - Introduction - Indented Para - first line indent
\Description Introduction prose paragraph, indented, with first line indent
\OccursUnder id
\Rank 6
\TextType Other
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\FirstLineIndent .125   # 1/8 inch first line indent
\LeftMargin .25
\RightMargin .25

\Marker imi
\Name imi - Introduction - Indented Para - no first line indent
\Description Introduction prose paragraph text, indented, with no first line indent
\OccursUnder id
\Rank 6
\TextType Other
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\LeftMargin .25
\RightMargin .25

\Marker ili
\Name ili - Introduction - List Entry - Level 1
\Description A list entry, level 1 (if single level)
\OccursUnder id
\Rank 6
\TextType Other
\TextProperties paragraph publishable vernacular
\StyleType paragraph
\FontSize 12
\LeftMargin .625
\FirstLineIndent -.375 # 1/4 inch indent, 5/8 inch wrap

\Marker ili1
\Name ili1 - Introduction - List Entry - Level 1
\Description A list entry, level 1 (if multiple levels)
\OccursUnder id
\Rank 6
\TextType Other
\TextProperties paragraph publishable vernacular
\StyleType paragraph
\FontSize 12
\LeftMargin .5
\FirstLineIndent -.25 # 1/4 inch indent, 5/8 inch wrap

\Marker ili2
\Name ili2 - Introduction - List Entry - Level 2
\Description A list entry, level 2
\OccursUnder id
\Rank 6
\TextType Other
\TextProperties paragraph publishable vernacular
\StyleType paragraph
\FontSize 12
\LeftMargin .75
\FirstLineIndent -.25  # 6/16 inch

\Marker ipq
\Name ipq - Introduction - Paragraph - quote from text
\Description Introduction prose paragraph, quote from the body text
\OccursUnder id
\Rank 6
\TextType Other
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\LeftMargin .25
\RightMargin .25
\FirstLineIndent .125   # 1/8 inch first line indent
\Italic

\Marker imq
\Name imq - Introduction - Paragraph - quote from text - no first line indent
\Description Introduction prose paragraph, quote from the body text, with no first line indent
\OccursUnder id
\Rank 6
\TextType Other
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\LeftMargin .25
\RightMargin .25
\Italic

\Marker ipr
\Name ipr - Introduction - Paragraph - right aligned
\Description Introduction prose paragraph, right aligned
\OccursUnder id
\Rank 6
\TextType Other
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\LeftMargin .25
\RightMargin .25
\Justification Right
\Italic

\Marker ib
\Name ib - Introduction - Blank Line
\Description Introduction blank line
\OccursUnder id
\Rank 6
\TextProperties paragraph publishable vernacular poetic
\TextType Other
\FontSize 10
\StyleType paragraph

\Marker iq
\Name iq - Introduction - Poetry Level 1
\Description Introduction poetry text, level 1 (if single level)
\OccursUnder id
\Rank 6
\TextType Other
\TextProperties paragraph publishable vernacular poetic level_1
\StyleType Paragraph
\FontSize 12
\LeftMargin 1
\FirstLineIndent -.75  # 1/4 inch indent, 1 inch wrap
\Italic

\Marker iq1
\Name iq1 - Introduction - Poetry Level 1
\Description Introduction poetry text, level 1 (if multiple levels)
\OccursUnder id
\Rank 6
\TextType Other
\TextProperties paragraph publishable vernacular poetic level_1
\StyleType Paragraph
\FontSize 12
\LeftMargin 1
\FirstLineIndent -.75  # 1/4 inch indent, 1 inch wrap
\Italic

\Marker iq2
\Name iq2 - Introduction - Poetry Level 2
\Description Introduction poetry text, level 2 
\OccursUnder id
\Rank 6
\TextType Other
\TextProperties paragraph publishable vernacular poetic level_2
\StyleType Paragraph
\FontSize 12
\LeftMargin 1
\FirstLineIndent -.5  # 1/2 inch indent, 1 inch wrap
\Italic

\Marker iq3
\Name iq3 - Introduction - Poetry Level 3
\Description Introduction poetry text, level 3
\OccursUnder id
\Rank 6
\TextType Other
\TextProperties paragraph publishable vernacular poetic level_3
\StyleType Paragraph
\FontSize 12
\LeftMargin 1
\FirstLineIndent -.25 # 3/4 inch indent, 1 inch wrap
\Italic

\Marker iex
\Name iex - Introduction - Explanatory or Bridge Text
\Description Introduction explanatory or bridge text (e.g. explanation of missing book in Short Old Testament)
\OccursUnder id c
\TextType Other
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\FirstLineIndent .125   # 1/8 inch first line indent
\SpaceBefore 4
\SpaceAfter 4

\Marker iqt
\Endmarker iqt*
\Name iqt...iqt* - Special Text - Quoted Scripture Text in Introduction
\Description For quoted scripture text appearing in the introduction
\OccursUnder id NEST
\TextType Other
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Italic

\Marker ie
\Name ie - Introduction - End Marker
\Description Introduction ending marker
\OccursUnder id
\Rank 6
\TextProperties paragraph publishable vernacular
\TextType Other
\FontSize 10
\StyleType paragraph

# Chapters and Verses

\Marker c
\Name c - Chapter Number
\Description Chapter number (necessary for normal Paratext operation)
\OccursUnder id
\Rank 8
\TextType ChapterNumber
\TextProperties chapter
\StyleType Paragraph
\Bold
\FontSize 18
\SpaceBefore 8
\SpaceAfter 4

\Marker ca
\Endmarker ca*
\Name ca...ca* - Chapter Number - Alternate
\Description Second (alternate) chapter number (for coding dual versification; useful for places where different traditions of chapter breaks need to be supported in the same translation)
\OccursUnder c 
\TextType Other
\StyleType Character
\Italic
\FontSize 16
\Color 2263842

\Marker cp
\Name cp - Chapter Number - Publishing Alternate
\Description Published chapter number (this is a chapter marking that would be used in the published text)
\OccursUnder c 
\Rank 4
\TextType Other
\TextProperties paragraph
\StyleType Paragraph
\Bold
\FontSize 18
\SpaceBefore 8
\SpaceAfter 4
\Color 16711680

\Marker cl
\Name cl - Chapter - Publishing Label
\Description Chapter label used for translations that add a word such as "Chapter" before chapter numbers (e.g. Psalms). The subsequent text is the chapter label.
\OccursUnder id c ms ms1 ms2 ms3 mr
\TextType Other
\TextProperties paragraph
\StyleType Paragraph
\Bold
\FontSize 18
\SpaceBefore 8
\SpaceAfter 4
\Justification Center

\Marker cd
\Name cd - Chapter - Description
\Description Chapter Description (Publishing option D, e.g. in Russian Bibles)
\OccursUnder c
\TextType Other
\TextProperties paragraph
\StyleType Paragraph
\FontSize 11
\SpaceBefore 8
\SpaceAfter 4

\Marker v
\Name v - Verse Number
\Description A verse number (Necessary for normal paratext operation) (basic)
\OccursUnder li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 qm4 tc1 tc2 tc3 tc4 tcr1 tcr2 tcr3 tcr4 s3 d sp
\TextType VerseNumber
\TextProperties verse
\StyleType Character
\FontSize 12
\Superscript

\Marker va
\Endmarker va*
\Name va...va* - Verse Number - Alternate
\Description Second (alternate) verse number (for coding dual numeration in Psalms; see also NRSV Exo 22.1-4)
\OccursUnder li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 qm4 tc1 tc2 tc3 tc4 s3 d
\TextType Other
\StyleType Character
\FontSize 12
\Superscript
\Color 2263842

\Marker vp
\Endmarker vp*
\Name vp...vp* - Verse Number - Publishing Alternate
\Description Published verse marker - this is a verse marking that would be used in the published text
\OccursUnder li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 tc1 tc2 tc3 tc4 s3
\TextType Other
\StyleType Character
\FontSize 12
\Superscript
\Color 16711680

# Paragraphs

\Marker p
\Name p - Paragraph - Normal - First Line Indent
\Description Paragraph text, with first line indent (basic)
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\FirstLineIndent .125   # 1/8 inch first line indent

\Marker m
\Name m - Paragraph - Margin - No First Line Indent
\Description Paragraph text, with no first line indent (may occur after poetry) (basic)
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12

\Marker pmo
\Name pmo - Paragraph - Embedded Text Opening
\Description Embedded text opening
\OccursUnder m mi nb p pc ph phi pi pi1 pi2 pi3 pr q q1 q2 q3 q4 qc qr
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\LeftMargin .25
\RightMargin .25

\Marker pm
\Name pm - Paragraph - Embedded Text
\Description Embedded text paragraph
\OccursUnder m mi nb p pc ph phi pi pi1 pi2 pi3 pr  psi q q1 q2 q3 q4 qc qr
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\FirstLineIndent .125   # 1/8 inch first line indent
\LeftMargin .25
\RightMargin .25

\Marker pmc
\Name pmc - Paragraph - Embedded Text Closing
\Description Embedded text closing
\OccursUnder m mi nb p pc ph phi pi pi1 pi2 pi3 pr q q1 q2 q3 q4 qc qr
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\LeftMargin .25
\RightMargin .25

\Marker pmr
\Name pmr - Paragraph - Embedded Text Refrain
\Description Embedded text refrain (e.g. Then all the people shall say, "Amen!")
\OccursUnder m mi nb p pc ph phi pi pi1 pi2 pi3 pr q q1 q2 q3 q4 qc qr
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\Justification Right
\LeftMargin .25
\RightMargin .25

\Marker pi
\Name pi - Paragraph - Indented - Level 1 - First Line Indent
\Description Paragraph text, level 1 indent (if sinlge level), with first line indent; often used for discourse (basic)
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\FirstLineIndent .125   # 1/8 inch first line indent
\LeftMargin .25
\RightMargin .25

\Marker pi1
\Name pi1 - Paragraph - Indented - Level 1 - First Line Indent
\Description Paragraph text, level 1 indent (if multiple levels), with first line indent; often used for discourse
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\FirstLineIndent .125   # 1/8 inch first line indent
\LeftMargin .25
\RightMargin .25

\Marker pi2
\Name pi2 - Paragraph - Indented - Level 2 - First Line Indent
\Description Paragraph text, level 2 indent, with first line indent; often used for discourse
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\FirstLineIndent .125   # 1/8 inch first line indent
\LeftMargin .5
\RightMargin .25

\Marker pi3
\Name pi3 - Paragraph - Indented - Level 3 - First Line Indent
\Description Paragraph text, level 3 indent, with first line indent; often used for discourse
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\FirstLineIndent .125   # 1/8 inch first line indent
\LeftMargin .75
\RightMargin .25

\Marker pc
\Name pc - Paragraph - Centered (for Inscription)
\Description Paragraph text, centered (for Inscription)
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\Justification Center
\FontSize 12

\Marker mi
\Name mi - Paragraph - Indented - No First Line Indent
\Description Paragraph text, indented, with no first line indent; often used for discourse
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\LeftMargin .25
\RightMargin .25

\Marker nb
\Name nb - Paragraph - No Break with Previous Paragraph
\Description Paragraph text, with no break from previous paragraph text (at chapter boundary) (basic)
\OccursUnder c 
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12

\Marker cls
\Name cls - Paragraph - Closure of an Epistle
\Description Closure of an Epistle
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\Justification Right

# Poetry

\Marker q
\Name q - Poetry - Indent Level 1 - Single Level Only
\Description Poetry text, level 1 indent (if single level)
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular poetic level_1
\StyleType Paragraph
\FontSize 12
\LeftMargin 1.25
\FirstLineIndent -1  # 1/4 inch indent, 1 inch wrap

\Marker q1
\Name q1 - Poetry - Indent Level 1
\Description Poetry text, level 1 indent (if multiple levels) (basic)
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular poetic level_1
\StyleType Paragraph
\FontSize 12
\LeftMargin 1.25
\FirstLineIndent -1  # 1/4 inch indent, 1 inch wrap

\Marker q2
\Name q2 - Poetry - Indent Level 2
\Description Poetry text, level 2 indent (basic)
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular poetic level_2
\StyleType Paragraph
\FontSize 12
\LeftMargin 1.25
\FirstLineIndent -.75  # 1/2 inch indent, 1 inch wrap

\Marker q3
\Name q3 - Poetry - Indent Level 3
\Description Poetry text, level 3 indent
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular poetic level_3
\StyleType Paragraph
\FontSize 12
\LeftMargin 1.25
\FirstLineIndent -.5 # 3/4 inch indent, 1 inch wrap

\Marker q4
\Name q4 - Poetry - Indent Level 4
\Description Poetry text, level 4 indent
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular poetic level_3
\StyleType Paragraph
\FontSize 12
\LeftMargin 1.25
\FirstLineIndent -.25 # 3/4 inch indent, 1 inch wrap

\Marker qc
\Name qc - Poetry - Centered
\Description Poetry text, centered
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular poetic
\StyleType Paragraph
\FontSize 12
\Justification Center

\Marker qr
\Name qr - Poetry - Right Aligned
\Description Poetry text, Right Aligned
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular poetic
\StyleType Paragraph
\FontSize 12
\Justification Right

\Marker qs
\Endmarker qs*
\Name qs...qs* - Poetry Text - Selah
\Description Poetry text, Selah
\OccursUnder q q1 q2 q3 q4 qc qr NEST
\Rank 4
\TextType VerseText
\TextProperties publishable vernacular poetic
\StyleType Character
\FontSize 12
\Italic

\Marker qa
\Name qa - Poetry - Acrostic Heading/Marker
\Description Poetry text, Acrostic marker/heading
\OccursUnder c
\Rank 4
\TextType Other
\TextProperties paragraph publishable vernacular poetic
\StyleType Paragraph
\FontSize 12
\Italic

\Marker qac
\Endmarker qac*
\Name qac...qac* - Poetry Text - Acrostic Letter
\Description Poetry text, Acrostic markup of the first character of a line of acrostic poetry
\OccursUnder q q1 q2 q3 q4 qc qr  NEST
\Rank 4
\TextType Other
\TextProperties paragraph publishable vernacular poetic
\StyleType Character
\FontSize 12
\Italic

\Marker qm
\Name qm - Poetry - Embedded Text - Indent Level 1 - Single Level Only
\Description Poetry text, embedded, level 1 indent (if single level)
\OccursUnder m mi nb p pc ph phi pi pi1 pi2 pi3 pr q q1 q2 q3 q4 qc qr
\TextType VerseText
\TextProperties paragraph publishable vernacular poetic
\StyleType Paragraph
\FontSize 12
\LeftMargin 1
\FirstLineIndent -.75  # 1/4 inch indent, 1 inch wrap

\Marker qm1
\Name qm1 - Poetry - Embedded Text - Indent Level 1
\Description Poetry text, embedded, level 1 indent (if multiple levels)
\OccursUnder m mi nb p pc ph phi pi pi1 pi2 pi3 pr q q1 q2 q3 q4 qc qr
\TextType VerseText
\TextProperties paragraph publishable vernacular poetic level_1
\StyleType Paragraph
\FontSize 12
\LeftMargin 1
\FirstLineIndent -.75  # 1/4 inch indent, 1 inch wrap

\Marker qm2
\Name qm2 - Poetry - Embedded Text - Indent Level 2
\Description Poetry text, embedded, level 2 indent
\OccursUnder m mi nb p pc ph phi pi pi1 pi2 pi3 pr q q1 q2 q3 q4 qc qr
\TextType VerseText
\TextProperties paragraph publishable vernacular poetic level_2
\StyleType Paragraph
\FontSize 12
\LeftMargin 1
\FirstLineIndent -.5  # 1/2 inch indent, 1 inch wrap

\Marker qm3
\Name qm3 - Poetry - Embedded Text - Indent Level 3
\Description Poetry text, embedded, level 3 indent
\OccursUnder m mi nb p pc ph phi pi pi1 pi2 pi3 pr q q1 q2 q3 q4 qc qr
\TextType VerseText
\TextProperties paragraph publishable vernacular poetic level_3
\StyleType Paragraph
\FontSize 12
\LeftMargin 1
\FirstLineIndent -.25 # 3/4 inch indent, 1 inch wrap

\Marker b
\Name b - Poetry - Stanza Break (Blank Line)
\Description Poetry text stanza break (e.g. stanza break) (basic)
\OccursUnder c
\Rank 4
\TextProperties paragraph publishable vernacular poetic
\TextType VerseText
\FontSize 10
\StyleType paragraph

# Titles & Headings

\Marker mt
\Name mt - Title - Major Title Level 1
\Description The main title of the book (if single level)
\OccursUnder id
\Rank 3
\TextProperties paragraph publishable vernacular level_1
\TextType Title
\StyleType Paragraph
\FontSize 20
\Bold
\Justification Center
\SpaceBefore 8
\SpaceAfter 4

\Marker mt1
\Name mt1 - Title - Major Title Level 1
\Description The main title of the book (if multiple levels) (basic)
\OccursUnder id
\Rank 3
\TextProperties paragraph publishable vernacular level_1
\TextType Title
\StyleType Paragraph
\FontSize 20
\Bold
\Justification Center
\SpaceBefore 2
\SpaceAfter 4

\Marker mt2
\Name mt2 - Title - Major Title Level 2
\Description A secondary title usually occurring before the main title (basic)
\OccursUnder id
\Rank 3
\TextProperties paragraph publishable vernacular level_2
\TextType Title
\StyleType Paragraph
\FontSize 16
\Italic
\Justification Center
\SpaceAfter 2

\Marker mt3
\Name mt3 - Title - Major Title Level 3
\Description A secondary title occurring after the main title
\OccursUnder id
\Rank 3
\TextProperties paragraph publishable vernacular level_3
\TextType Title
\StyleType Paragraph
\FontSize 16
\Bold
\Justification Center
\SpaceBefore 2
\SpaceAfter 2

\Marker mt4
\Name mt4 - Title - Major Title level 4
\Description A small secondary title sometimes occuring within parentheses
\OccursUnder id
\Rank 3
\TextProperties paragraph publishable vernacular level_4
\TextType Title
\StyleType Paragraph
\FontSize 12
\Justification Center
\SpaceBefore 2
\SpaceAfter 2

\Marker mte
\Name mte - Title - [Uncommon] Major Title Ending Level 1
\Description The main title of the book repeated at the end of the book, level 1 (if single level)
\TextProperties paragraph publishable vernacular level_1
\TextType Title
\OccursUnder c
\Rank 2
\StyleType Paragraph
\FontSize 20
\Bold
\Justification Center
\SpaceBefore 8
\SpaceAfter 4

\Marker mte1
\Name mte1 - Title - [Uncommon] Major Title Ending Level 1
\Description The main title of the book repeated at the end of the book, level 1 (if multiple levels)
\TextProperties paragraph publishable vernacular level_1
\TextType Title
\OccursUnder li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 tc1 tc2 tc3 tc4 s3 d
\Rank 2
\StyleType Paragraph
\FontSize 20
\Bold
\Justification Center
\SpaceBefore 8
\SpaceAfter 4
 
\Marker mte2
\Name mte2 - Title - [Uncommon] Major Title Ending Level 2
\Description A secondary title occurring before or after the 'ending' main title
\TextProperties paragraph publishable vernacular level_2
\TextType Title
\OccursUnder mte1
\Rank 2
\StyleType Paragraph
\FontSize 16
\Italic
\Justification Center
\SpaceAfter 2

\Marker ms
\Name ms - Heading - Major Section Level 1
\Description A major section division heading, level 1 (if single level) (basic)
\OccursUnder c
\Rank 4
\TextType Section
\TextProperties paragraph publishable vernacular level_1
\StyleType Paragraph
\FontSize 14
\Bold
\Justification Center
\SpaceBefore 16
\SpaceAfter 4

\Marker ms1
\Name ms1 - Heading - Major Section Level 1
\Description A major section division heading, level 1 (if multiple levels)
\OccursUnder c
\Rank 4
\TextType Section
\TextProperties paragraph publishable vernacular level_1
\StyleType Paragraph
\FontSize 14
\Bold
\Justification Center
\SpaceBefore 16
\SpaceAfter 4

\Marker ms2
\Name ms2 - Heading - Major Section Level 2
\Description A major section division heading, level 2
\OccursUnder c
\Rank 4
\TextType Section
\TextProperties paragraph publishable vernacular level_1
\StyleType Paragraph
\FontSize 14
\Bold
\Justification Center
\SpaceBefore 16
\SpaceAfter 4

\Marker ms3
\Name ms3 - Heading - Major Section Level 3
\Description A major section division heading, level 3
\OccursUnder c
\Rank 4
\TextType Section
\TextProperties paragraph publishable vernacular level_1
\StyleType Paragraph
\FontSize 14
\Italic
\Justification Center
\SpaceBefore 16
\SpaceAfter 4

\Marker mr
\Name mr - Heading - Major Section Range References
\Description A major section division references range heading (basic)
\OccursUnder ms ms1 ms2 ms3
\TextType Section
\TextProperties paragraph publishable vernacular level_1
\StyleType Paragraph
\FontSize 12
\Italic
\Justification Center
\SpaceAfter 4

\Marker s
\Name s - Heading - Section Level 1
\Description A section heading, level 1 (if single level) (basic)
\OccursUnder c
\Rank 4
\TextType Section
\TextProperties paragraph publishable vernacular level_1
\StyleType Paragraph
\FontSize 12
\Bold
\Justification Center
\SpaceBefore 8
\SpaceAfter 4

\Marker s1
\Name s1 - Heading - Section Level 1
\Description A section heading, level 1 (if multiple levels)
\OccursUnder c
\Rank 4
\TextType Section
\TextProperties paragraph publishable vernacular level_1
\StyleType Paragraph
\FontSize 12
\Bold
\Justification Center
\SpaceBefore 8
\SpaceAfter 4

\Marker s2
\Name s2 - Heading - Section Level 2
\Description A section heading, level 2 (e.g. Proverbs 22-24)
\OccursUnder c
\Rank 4
\TextType Section
\TextProperties paragraph publishable vernacular level_2
\StyleType Paragraph
\FontSize 12
\Italic
\Justification Center
\SpaceBefore 8
\SpaceAfter 4

\Marker s3
\Name s3 - Heading - Section Level 3
\Description A section heading, level 3 (e.g. Genesis "The First Day")
\OccursUnder c
\Rank 4
\TextType Section
\TextProperties paragraph publishable vernacular level_3
\StyleType Paragraph
\FontSize 12
\Italic
\Justification Left
\SpaceBefore 6
\SpaceAfter 3

\Marker s4
\Name s4 - Heading - Section Level 4
\Description A section heading, level 4
\OccursUnder c
\Rank 4
\TextType Section
\TextProperties paragraph publishable vernacular level_4
\StyleType Paragraph
\FontSize 12
\Italic
\Justification Left
\SpaceBefore 6
\SpaceAfter 3

\Marker sr
\Name sr - Heading - Section Range References
\Description A section division references range heading
\OccursUnder s s1 s2 s3 s4
\TextType Section
\TextProperties paragraph publishable vernacular level_1
\StyleType Paragraph
\FontSize 12
\Bold
\Justification Center
\SpaceAfter 4

\Marker r
\Name r - Heading - Parallel References
\Description Parallel reference(s) (basic)
\OccursUnder c s s1 s2 s3 s4
\TextType Section
\TextProperties paragraph publishable vernacular level_1
\StyleType Paragraph
\FontSize 12
\Italic
\Justification Center
\SpaceAfter 4

\Marker sp
\Name sp - Heading - Speaker
\Description A heading, to identify the speaker (e.g. Job)
\OccursUnder c
\Rank 4
\TextType Section
\TextProperties paragraph publishable vernacular level_1
\StyleType Paragraph
\FontSize 12
\Italic
\Justification Left
\SpaceBefore 8
\SpaceAfter 4

\Marker d
\Name d - Heading - Descriptive Title - Hebrew Subtitle
\Description A Hebrew text heading, to provide description (e.g. Psalms)
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular level_1
\StyleType Paragraph
\FontSize 12
\Italic
\Justification Center
\SpaceBefore 4
\SpaceAfter 4

# Tables

\Marker tr
\Name tr - Table - Row
\Description A new table row
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\LeftMargin .5
\FirstLineIndent -.25  # 6/16 inch

\Marker th1 
\Name th1 - Table - Column 1 Heading
\Description A table heading, column 1
\OccursUnder tr
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Italic

\Marker th2
\Name th2 - Table - Column 2 Heading
\Description A table heading, column 2
\OccursUnder tr
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Italic

\Marker th3
\Name th3 - Table - Column 3 Heading
\Description A table heading, column 3
\OccursUnder tr
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Italic

\Marker th4
\Name th4 - Table - Column 4 Heading
\Description A table heading, column 4
\OccursUnder tr
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Italic

\Marker tc1
\Name tc1 - Table - Column 1 Cell
\Description A table cell item, column 1
\OccursUnder tr
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12

\Marker tc2
\Name tc2 - Table - Column 2 Cell
\Description A table cell item, column 2
\OccursUnder tr
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12

\Marker tc3
\Name tc3 - Table - Column 3 Cell
\Description A table cell item, column 3
\OccursUnder tr
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12

\Marker tc4
\Name tc4 - Table - Column 4 Cell
\Description A table cell item, column 4
\OccursUnder tr
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12

# Right Aligned Table Heads and Columns

\Marker thr1 
\Name thr1 - Table - Column 1 Heading - Right Aligned
\Description A table heading, column 1, right aligned
\OccursUnder tr
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Italic
\Justification right


\Marker thr2
\Name thr2 - Table - Column 2 Heading - Right Aligned
\Description A table heading, column 2, right aligned
\OccursUnder tr
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Italic
\Justification right

\Marker thr3
\Name thr3 - Table - Column 3 Heading - Right Aligned
\Description A table heading, column 3, right aligned
\OccursUnder tr
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Italic
\Justification right

\Marker thr4
\Name thr4 - Table - Column 4 Heading - Right Aligned
\Description A table heading, column 4, right aligned
\OccursUnder tr
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Italic
\Justification right

\Marker tcr1 
\Name tcr1 - Table - Column 1 Cell - Right Aligned
\Description A table cell item, column 1, right aligned
\OccursUnder tr
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Justification right

\Marker tcr2
\Name tcr2 - Table - Column 2 Cell - Right Aligned
\Description A table cell item, column 2, right aligned
\OccursUnder tr
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Justification right

\Marker tcr3
\Name tcr3 - Table - Column 3 Cell - Right Aligned
\Description A table cell item, column 3, right aligned
\OccursUnder tr
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Justification right

\Marker tcr4
\Name tcr4 - Table - Column 4 Cell - Right Aligned
\Description A table cell item, column 4, right aligned
\OccursUnder tr
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Justification right

# Lists

\Marker li
\Name li - List Entry - Level 1
\Description A list entry, level 1 (if single level)
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType paragraph
\FontSize 12
\LeftMargin .625
\FirstLineIndent -.375 # 1/4 inch indent, 5/8 inch wrap

\Marker li1
\Name li1 - List Entry - Level 1
\Description A list entry, level 1 (if multiple levels)
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType paragraph
\FontSize 12
\LeftMargin .5
\FirstLineIndent -.25 # 1/4 inch indent, 5/8 inch wrap

\Marker li2
\Name li2 - List Entry - Level 2
\Description A list entry, level 2
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType paragraph
\FontSize 12
\LeftMargin .75
\FirstLineIndent -.25  # 6/16 inch

\Marker li3
\Name li3 - List Entry - Level 3
\Description A list entry, level 3
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType paragraph
\FontSize 12
\LeftMargin 1
\FirstLineIndent -.25  # 6/16 inch

\Marker li4
\Name li4 - List Entry - Level 4
\Description A list entry, level 4
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType paragraph
\FontSize 12
\LeftMargin 1.25
\FirstLineIndent -.25  # 6/16 inch

# Footnotes

\Marker f
\Endmarker f*
\Name f...f* - Footnote 
\Description A Footnote text item (basic)
\OccursUnder c li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 qs sp tc1 tc2 tc3 tc4 mt mt1 mt2 mt3 ms ms1 ms2 ms3 s s1 s2 s3 spd d ip cp
\TextProperties publishable vernacular note
\TextType NoteText
\StyleType Note
\FontSize 12

\Marker fe
\Endmarker fe*
\Name fe...fe* - Endnote
\Description An Endnote text item
\OccursUnder c li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 sp tc1 tc2 tc3 tc4 ms ms1 ms2 ms3 s s1 s2 s3 spd d ip
\TextProperties publishable vernacular note
\TextType NoteText
\StyleType Note
\FontSize 12

\Marker fr
\Endmarker fr*
\Name fr - Footnote - Reference
\Description The origin reference for the footnote (basic)
\OccursUnder f fe
\TextType NoteText
\TextProperties publishable vernacular note
\StyleType Character
\FontSize 12
\Bold

\Marker ft
\Endmarker ft*
\Name ft - Footnote - Text
\Description Footnote text, Protocanon (basic)
\OccursUnder f fe
\TextProperties publishable vernacular note
\TextType NoteText
\StyleType Character
\FontSize 12

\Marker fk
\Endmarker fk*
\Name fk - Footnote - Keyword
\Description A footnote keyword (basic)
\OccursUnder f fe
\TextProperties publishable vernacular note
\TextType NoteText
\StyleType Character
\FontSize 12
\Bold
\Italic

\Marker fq
\Endmarker fq*
\Name fq - Footnote - Quotation or Alternate Rendering
\Description A footnote scripture quote or alternate rendering (basic)
\OccursUnder f fe
\TextProperties publishable vernacular note
\TextType NoteText
\StyleType Character
\FontSize 12
\Italic

\Marker fqa
\Endmarker fqa*
\Name fqa - Footnote - Alternate Translation Rendering
\Description A footnote alternate rendering for a portion of scripture text
\OccursUnder f fe
\TextProperties publishable vernacular note
\TextType NoteText
\StyleType Character
\FontSize 12
\Italic

\Marker fl
\Endmarker fl*
\Name fl - Footnote - Label Text
\Description A footnote label text item, for marking or "labelling" the type or alternate translation being provided in the note.
\OccursUnder f fe
\TextProperties publishable vernacular note
\TextType NoteText
\StyleType Character
\FontSize 12
\Italic
\Bold

\Marker fp
\Endmarker fp*
\Name fp - Footnote Paragraph Mark
\Description A Footnote additional paragraph marker
\OccursUnder f fe
\TextProperties publishable vernacular note
\TextType NoteText
\StyleType Character
\FontSize 12

\Marker fv
\Endmarker fv*
\Name fv...fv* - Footnote - Embedded Verse Number
\Description A verse number within the footnote text
\OccursUnder f fe
\TextProperties publishable vernacular note
\TextType NoteText
\StyleType Character
\FontSize 12
\Superscript

\Marker fdc
\Endmarker fdc*
\Name fdc...fdc* - Footnote - DC text
\Description Footnote text, applies to Deuterocanon only
\OccursUnder f fe
\TextProperties publishable vernacular note
\TextType NoteText
\StyleType Character
\FontSize 12

\Marker fm
\Endmarker fm*
\Name fm - Footnote - Additional Caller to Previous Note
\Description An additional footnote marker location for a previous footnote 
\OccursUnder li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 sp tc1 tc2 tc3 tc4 ms ms1 ms2 s s1 s2 s3 spd d ip
\TextType Other
\TextProperties paragraph publishable vernacular
\StyleType Character
\FontSize 12
\Superscript

# Cross References

\Marker x
\Endmarker x*
\Name x...x* - Cross Reference
\Description A list of cross references (basic)
\OccursUnder li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 qs sp tc1 tc2 tc3 tc4 mt mt1 mt2 mt3 ms ms1 ms2 s s1 s2 s3 spd d
\TextProperties publishable vernacular note crossreference
\TextType NoteText
\StyleType Note
\FontSize 12

\Marker xo
\Endmarker xo*
\Name xo - Cross Reference - Origin Reference
\Description The cross reference origin reference (basic)
\OccursUnder x
\TextProperties publishable vernacular note
\TextType NoteText
\StyleType Character
\FontSize 12
\Bold

\Marker xt
\Endmarker xt*
\Name xt - Cross Reference - Target References
\Description The cross reference target reference(s), protocanon only (basic)
\OccursUnder x f ef ip ipi im imi ili ili1 ili2
\TextProperties publishable vernacular note
\TextType NoteText
\StyleType Character
\FontSize 12

\Marker xk
\Endmarker xk*
\Name xk - Cross Reference - Keyword
\Description A cross reference keyword
\OccursUnder x
\TextProperties publishable vernacular note
\TextType NoteText
\StyleType Character
\FontSize 12
\Italic

\Marker xq
\Endmarker xq*
\Name xq - Cross Reference - Quotation
\Description A cross-reference quotation from the scripture text
\OccursUnder x
\TextProperties publishable vernacular note
\TextType NoteText
\StyleType Character
\FontSize 12
\Italic

\Marker xot
\Endmarker xot*
\Name xot...xot* - Cross Reference - OT Target Refs (optional)
\Description Cross-reference target reference(s), Old Testament only
\OccursUnder x
\TextProperties publishable vernacular note
\TextType NoteText
\StyleType Character
\FontSize 12

\Marker xnt
\Endmarker xnt*
\Name xnt...xnt* - Cross Reference - NT Target Refs (optional)
\Description Cross-reference target reference(s), New Testament only
\OccursUnder x
\TextProperties publishable vernacular note
\TextType NoteText
\StyleType Character
\FontSize 12

\Marker xdc
\Endmarker xdc*
\Name xdc...xdc* - Cross Reference - DC Target Refs
\Description Cross-reference target reference(s), Deuterocanon only
\OccursUnder x
\TextProperties publishable vernacular note
\TextType NoteText
\StyleType Character
\FontSize 12

\Marker rq
\Endmarker rq*
\Name rq...rq* - Cross Reference - Inline Quotation References
\Description A cross-reference indicating the source text for the preceding quotation.
\OccursUnder li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 NEST
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 10
\Italic

# Study material extensions to existing USFM markup.

\Marker efm
\Endmarker efm*
\Name efm - Study Note - ID/Caller
\Description ID or Caller for an extended (study) note. Used within a source project duplicte (target) text when autoring study material.
\OccursUnder li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 qm4 tc1 tc2 tc3 tc4 s3 d NEST
\TextType Other
\StyleType Character
\FontSize 10
\Bold
\Color 255

# Other Special Text

\Marker qt
\Endmarker qt*
\Name qt...qt* - Special Text - Quoted Text - OT in NT
\Description For Old Testament quoted text appearing in the New Testament (basic)
\OccursUnder li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 sp tc1 tc2 tc3 tc4 ip im ili ili1 ili2 io io1 io2 f fe NEST
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Italic

\Marker nd
\Endmarker nd*
\Name nd...nd* - Special Text - Name of Deity
\Description For name of deity (basic)
\OccursUnder ip im ipi imi ipq imq ipr iq iq1 iq2 iq3 li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 sp tc1 tc2 tc3 tc4 ms ms1 ms2 s s1 s2 s3 spd d ip f fe NEST
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Underline

\Marker tl
\Endmarker tl*
\Name tl...tl* - Special Text - Transliterated Word
\Description For transliterated words
\OccursUnder li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 sp tc1 tc2 tc3 tc4 ms ms1 ms2 s s1 s2 s3 spd d ip f fe NEST
\TextType VerseText
\TextProperties publishable nonvernacular
\StyleType Character
\FontSize 12
\Italic

\Marker dc
\Endmarker dc*
\Name dc...dc* - Special Text - Deuterocanonical/LXX Additions
\Description Deuterocanonical/LXX additions or insertions in the Protocanonical text
\OccursUnder li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 sp tc1 tc2 tc3 tc4 ms ms1 ms2 s s1 s2 s3 spd d ip f fe NEST
\TextProperties publishable vernacular
\StyleType Character
\Italic

\Marker bk
\Endmarker bk*
\Name bk...bk* - Special Text - Quoted book title
\Description For the quoted name of a book
\OccursUnder li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 sp tc1 tc2 tc3 tc4 ms ms1 ms2 s s1 s2 s3 spd d ip im ili ili1 ili2 io io1 io2 f fe NEST
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Italic

\Marker sig
\Endmarker sig*
\Name sig...sig* - Special Text - Author's Signature (Epistles)
\Description For the signature of the author of an Epistle
\OccursUnder li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 sp tc1 tc2 tc3 tc4 ms ms1 ms2 s s1 s2 s3 spd d ip NEST
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Italic

\Marker pn
\Endmarker pn*
\Name pn...pn* - Special Text - Proper Name
\Description For a proper name
\OccursUnder ip im ipi imi ipq imq ipr iq iq1 iq2 iq3 li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 sp tc1 tc2 tc3 tc4 ms ms1 ms2 s s1 s2 s3 spd d ip f fe NEST
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Bold
\Underline

\Marker addpn
\Endmarker addpn*
\Name (addpn...addpn*) - Special Text for Chinese
\Description For chinese words to be dot underline & underline
\OccursUnder ip im ipi imi ipq imq ipr iq iq1 iq2 iq3 li li1 li2 li3 li4 m mi mis nb p pc ph phi pi pi1 pi2 pi3 pr ps psi q q1 q2 q3 q4 qc qr sp tc1 tc2 tc3 tc4 ms ms1 ms2 s s1 s2 s3 spd d ip f fe NEST
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Character
\FontSize 12
\Color 2263842
\Bold
\Italic
\Underline

\Marker wj
\Endmarker wj*
\Name wj...wj* - Special Text - Words of Jesus
\Description For marking the words of Jesus
\OccursUnder li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 sp tc1 tc2 tc3 tc4 ms ms1 ms2 s s1 s2 s3 spd d ip f fe NEST
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Color 255

\Marker k
\Endmarker k*
\Name k...k* - Special Text - Keyword
\Description For a keyword
\OccursUnder li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 sp tc1 tc2 tc3 tc4 ms ms1 ms2 s s1 s2 s3 spd d ip im io1 io2 f fe NEST
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Italic
\Bold

\Marker sls
\Endmarker sls*
\Name sls...sls* - Special Text - Secondary Language or Text Source
\Description To represent where the original text is in a secondary language or from an alternate text source
\OccursUnder li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 sp tc1 tc2 tc3 tc4 f fe NEST
\TextType VerseText
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Italic

\Marker ord
\Endmarker ord*
\Name ord...ord* - Special Text - Ordinal number text portion
\Description For the text portion of an ordinal number
\OccursUnder ip im li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 sp tc1 tc2 tc3 tc4 ms ms1 ms2 s s1 s2 s3 spd d ip f fe NEST
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Character
\FontSize 12
\Superscript

\Marker add
\Endmarker add*
\Name add...add* - Special Text - Translational Addition
\Description For a translational addition to the text
\OccursUnder li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 sp tc1 tc2 tc3 tc4 ms ms1 ms2 s s1 s2 s3 spd d ip f fe NEST
\TextType Other
\TextProperties publishable vernacular
\StyleType Character
\Color 2263842
\Bold
\Italic

\Marker lit
\Name lit - Special Text - Liturgical note
\Description For a comment or note inserted for liturgical use
\OccursUnder c
\TextType Other
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\Justification Right
\FontSize 12
\Bold

# Character Styling

\Marker no
\Endmarker no*
\Name no...no* - Character - Normal Text
\Description A character style, use normal text
\OccursUnder is ip ipi im imi ili ili1 ili2 imq ipq iex iq iot io1 io2 io3 io4 s s1 s2 s3 NEST
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12

\Marker it
\Endmarker it*
\Name it...it* - Character - Italic Text
\Description A character style, use italic text
\OccursUnder ip ipi im imi ili ili1 ili2 iex io1 io2 io3 io4 cd li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 sp tc1 tc2 tc3 tc4 ms ms1 ms2 s s1 s2 s3 spd d ip f fe NEST
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Italic

\Marker bd
\Endmarker bd*
\Name bd...bd* - Character - Bold Text
\Description A character style, use bold text
\OccursUnder ip ipi im imi ili ili1 ili2 iex io1 io2 io3 io4 cd li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 sp tc1 tc2 tc3 tc4 ms ms1 ms2 s s1 s2 s3 spd d ip f fe NEST
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Bold

\Marker bdit
\Endmarker bdit*
\Name bdit...bdit* - Character - BoldItalic Text
\Description A character style, use bold + italic text
\OccursUnder ip ipi im imi ili ili1 ili2 iex io1 io2 io3 io4 cd li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 sp tc1 tc2 tc3 tc4 ms ms1 ms2 s s1 s2 s3 spd d ip f fe NEST
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Bold
\Italic

\Marker em
\Endmarker em*
\Name em...em* - Character - Emphasized Text
\Description A character style, use emphasized text style
\OccursUnder ip ipi im imi ili ili1 ili2 iex io1 io2 io3 io4 cd li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 sp tc1 tc2 tc3 tc4 ms ms1 ms2 s s1 s2 s3 spd d ip f fe NEST
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12
\Italic

\Marker sc
\Endmarker sc*
\Name sc...sc* - Character - Small Caps
\Description A character style, for small capitalization text
\OccursUnder ip ipi im imi ili ili1 ili2 iex io1 io2 io3 io4 cd li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 sp tc1 tc2 tc3 tc4 ms ms1 ms2 s s1 s2 s3 spd d ip f fe NEST
\TextProperties publishable vernacular
\StyleType Character
\FontSize 12

# Breaks

\Marker pb
\Name pb - Break - Page Break
\Description Page Break used for new reader portions and children's bibles where content is controlled by the page
\OccursUnder c
\Rank 4
\TextType Other
\TextProperties publishable
\StyleType Paragraph
\FontSize 12

# Special Features

\Marker fig
\Endmarker fig*
\Name fig...fig* - Auxiliary - Figure/Illustration/Map
\Description Illustration [Columns to span, height, filename, caption text]
\OccursUnder li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 sp tc1 tc2 tc3 tc4 ms ms1 ms2 s s1 s2 s3 spd d ip
\TextType Other
\TextProperties paragraph publishable vernacular
\StyleType Character
\FontSize 12

\Marker pro
\Endmarker pro*
\Name pro...pro* - Special Text - CJK Pronunciation
\Description For indicating pronunciation in CJK texts
\OccursUnder ip im ipi imi ipq imq ipr iq iq1 iq2 iq3 li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 sp tc1 tc2 tc3 tc4 ms ms1 ms2 s s1 s2 s3 spd d ip f fe NEST
\TextType Other
\TextProperties Nonpublishable
\StyleType Character
\FontSize 10
\Color 128

# Peripheral References

\Marker w
\Endmarker w*
\Name w...w* - Peripheral Ref - Wordlist Entry
\Description A wordlist text item
\OccursUnder ip im li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr d q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 tc1 tc2 tc3 tc4 s s1 s2 s3 s4 NEST
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Character
\FontSize 12
\Color 16711935
\Bold
\Italic

\Marker wh
\Endmarker wh*
\Name wh...wh* - Peripheral Ref - Hebrew Wordlist Entry
\Description A Hebrew wordlist text item
\OccursUnder li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr d q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 tc1 tc2 tc3 tc4 s s1 s2 s3 s4 NEST
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Character
\FontSize 12
\Color 16711935
\Bold
\Italic

\Marker wg
\Endmarker wg*
\Name wg...wg* - Peripheral Ref - Greek Wordlist Entry
\Description A Greek Wordlist text item
\OccursUnder li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr d q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 tc1 tc2 tc3 tc4 s s1 s2 s3 s4 NEST
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Character
\FontSize 12
\Color 16711935
\Bold
\Italic

\Marker ndx
\Endmarker ndx*
\Name ndx...ndx* - Peripheral Ref - Subject Index Entry 
\Description A subject index text item
\OccursUnder li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr pmo pm pmc pmr q q1 q2 q3 q4 qc qr qm qm1 qm2 qm3 tc1 tc2 tc3 tc4 s s1 s2 s3 s4 NEST
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Character
\FontSize 12
\Color 16711935
\Bold
\Italic

# Peripheral Materials
# Content Division Marker

\Marker periph
\Name periph - Peripherals - Content Division Marker
\Description Periheral content division marker which should be followed by an additional division argument/title.
\OccursUnder id
\TextType Section
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 14
\Bold
\SpaceBefore 16
\SpaceAfter 4
\Color 33023

# Additional peripheral material extensions to existing USFM markup.

\Marker p1
\Name p1 - Periph - Front/Back Matter Paragraph Level 1
\Description Front or back matter text paragraph, level 1 (if multiple levels)
\OccursUnder id
\Rank 1
\TextType Other
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\FirstLineIndent .125   # 1/8 inch first line indent

\Marker p2
\Name p2 - Periph - Front/Back Matter Paragraph Level 2
\Description Front or back matter text paragraph, level 2 (if multiple levels)
\OccursUnder id
\Rank 1
\TextType Other
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\FirstLineIndent .125   # 1/4 inch first line indent
\LeftMargin .125

\Marker k1
\Name k1 - Periph - Concordance Keyword Level 1
\Description Concordance main entry text or keyword, level 1
\OccursUnder id
\Rank 1
\TextType Other
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12

\Marker k2
\Name k2 - Periph - Concordance Keyword Level 2
\Description Concordance main entry text or keyword, level 2
\OccursUnder id
\Rank 1
\TextType Other
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12

\Marker xtSee
\Endmarker xtSee*
\Name xtSee - Concordance and Names Index - Alternate Entry Target Reference
\Description Concordance and Names Index markup for an alternate entry target reference.
\OccursUnder p
\TextProperties publishable vernacular
\TextType NoteText
\StyleType Character
\FontSize 12
\Italic
\Color 16711680

\Marker xtSeeAlso
\Endmarker xtSeeAlso*
\Name xtSeeAlso - Concordance and Names Index - Additional Entry Target Reference
\Description Concordance and Names Index markup for an additional entry target reference.
\OccursUnder p
\TextProperties publishable vernacular
\TextType Other
\StyleType Character
\FontSize 12
\Italic
\color 16711680

# Other special text elements specified in USFM
#   ~ = fixed (no-break) space
#   // = discretionary line break

# Obsolete, deprecated, or no longer officially part of USFM.
# These markers may have existed in earlier resource and stylesheet revisions.

\Marker pr
\Name DEPRECATED pr - Paragraph - Right Aligned
\Description Paragraph text, right aligned
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\Justification Right
\FontSize 12

\Marker ph
\Name DEPRECATED ph - Paragraph - Hanging Indent - Level 1
\Description Paragraph text, with level 1 hanging indent (if single level)
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\LeftMargin .5
\FirstLineIndent -.25  # 1/4 inch indent, 1/2 inch wrap
\FontSize 12

\Marker ph1
\Name DEPRECATED ph1 - Paragraph - Hanging Indent - Level 1
\Description Paragraph text, with level 1 hanging indent (if multiple levels)
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\LeftMargin .5
\FirstLineIndent -.25  # 1/4 inch indent, 1/2 inch wrap
\FontSize 12

\Marker ph2
\Name DEPRECATED ph2 - Paragraph - Hanging Indent - Level 2
\Description Paragraph text, with level 2 hanging indent
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\LeftMargin .75
\FirstLineIndent -.25  # 1/2 inch indent, 3/4 inch wrap
\FontSize 12

\Marker ph3
\Name DEPRECATED ph3 - Paragraph - Hanging Indent - Level 3
\Description Paragraph text, with level 3 hanging indent
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\LeftMargin 1
\FirstLineIndent -.25  # 3/4 inch indent, 1 inch wrap
\FontSize 12

\Marker phi
\Name DEPRECATED phi - Paragraph - Indented - Hanging Indent
\Description Paragraph text, indented with hanging indent
\OccursUnder c 
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\LeftMargin 1

\Marker tr1
\Name OBSOLETE tr1 - Table - Row - Level 1
\Description A table Row
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\LeftMargin .5
\FirstLineIndent -.25  # 6/16 inch

\Marker tr2
\Name OBSOLETE tr2 - Table - Row - Level 2
\Description A table Row
\OccursUnder c
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\LeftMargin .75
\FirstLineIndent -.25  # 6/16 inch

\Marker ps
\Name OBSOLETE ps - Paragraph - No Break with Next Paragraph
\Description Paragraph text, no break with next paragraph text at chapter boundary
\OccursUnder c 
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FontSize 12
\FirstLineIndent .125   # 1/8 inch first line indent

\Marker psi
\Name OBSOLETE psi - Paragraph - Indented - No Break with Next
\Description Paragraph text, indented, with no break with next paragraph text (at chapter boundary)
\OccursUnder c 
\Rank 4
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Paragraph
\FirstLineIndent .125   # 1/8 inch first line indent
\LeftMargin .25
\RightMargin .25
\FontSize 12

\Marker wr
\Endmarker wr*
\Name OBSOLETE wr...wr* - Auxiliary - Wordlist/Glossary Reference 
\Description A Wordlist text item
\OccursUnder ms s li li1 li2 li3 li4 m mi nb p pc ph phi pi pi1 pi2 pi3 pr q q1 q2 q3 q4 qc qr tc1 tc2 tc3 tc4 f fe NEST
\TextProperties publishable vernacular note
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Character
\FontSize 12
\Italic

# 2.0x peripheral markup (replaced with \periph + Content Division Title/Argument)

\Marker pub
\Name OBSOLETE pub Peripherals - Front Matter Publication Data
\Description Front matter publication data
\OccursUnder id
\Rank 4
\TextProperties paragraph publishable vernacular poetic
\TextType VerseText
\FontSize 10
\StyleType paragraph

\Marker toc
\Name OBSOLETE toc Peripherals - Front Matter Table of Contents
\Description Front matter table of contents
\OccursUnder id
\Rank 4
\TextProperties paragraph publishable vernacular poetic
\TextType VerseText
\FontSize 10
\StyleType paragraph

\Marker pref
\Name OBSOLETE pref Peripherals - Front Matter Preface
\Description Front matter preface
\OccursUnder id
\Rank 4
\TextProperties paragraph publishable vernacular poetic
\TextType VerseText
\FontSize 10
\StyleType paragraph

\Marker intro
\Name OBSOLETE intro Peripherals - Front Matter Introduction
\Description Front matter introduction
\OccursUnder id
\Rank 4
\TextProperties paragraph publishable vernacular poetic
\TextType VerseText
\FontSize 10
\StyleType paragraph

\Marker conc
\Name OBSOLETE conc Peripherals - Back Matter Concordance
\Description Back matter concordance
\OccursUnder id
\Rank 4
\TextProperties paragraph publishable vernacular poetic
\TextType VerseText
\FontSize 10
\StyleType paragraph

\Marker glo
\Name OBSOLETE glo Peripherals - Back Matter Glossary
\Description Back matter glossary
\OccursUnder id
\Rank 4
\TextProperties paragraph publishable vernacular poetic
\TextType VerseText
\FontSize 10
\StyleType paragraph

\Marker idx
\Name OBSOLETE idx Peripherals - Back Matter Index
\Description Back matter index
\OccursUnder id
\Rank 4
\TextProperties paragraph publishable vernacular poetic
\TextType VerseText
\FontSize 10
\StyleType paragraph

\Marker maps
\Name OBSOLETE maps Peripherals - Back Matter Map Index
\Description Back matter map index
\OccursUnder id
\Rank 4
\TextProperties paragraph publishable vernacular poetic
\TextType VerseText
\FontSize 10
\StyleType paragraph

\Marker cov
\Name OBSOLETE cov Peripherals - Other - Cover
\Description Other peripheral materials - cover
\OccursUnder id
\Rank 4
\TextProperties paragraph publishable vernacular poetic
\TextType VerseText
\FontSize 10
\StyleType paragraph

\Marker spine
\Name OBSOLETE spine Peripherals - Other - Spine
\Description Other peripheral materials - spine
\OccursUnder id
\Rank 4
\TextProperties paragraph publishable vernacular poetic
\TextType VerseText
\FontSize 10
\StyleType paragraph

\Marker pubinfo
\Name OBSOLETE pubinfo - Publication - Information
\Description Publication information - Lang,Credit,Version,Copies,Publisher,Id,Logo
\OccursUnder id ide
\TextType Other
\TextProperties paragraph nonpublishable nonvernacular
\StyleType Paragraph
\FontSize 12
\Color 16711680

# Concordance/Names Index Tools - special sfms for use in Publishing Assistant

\Marker zpa-xb
\Endmarker zpa-xb*
\Name zpa-xb - Periph - Book
\Description Book Ref
\OccursUnder id
\Rank 1
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Character
\FontSize 12

\Marker zpa-xc
\Endmarker zpa-xc*
\Name zpa-xc - Periph - Chapter
\Description Chapter Ref
\OccursUnder id
\Rank 1
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Character
\FontSize 12
\Bold

\Marker zpa-xv
\Endmarker zpa-xv*
\Name zpa-xv - Periph - Verse
\Description Verse Ref
\OccursUnder id
\Rank 1
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Character
\FontSize 12

\Marker zpa-d
\Endmarker zpa-d*
\Name zpa-d - Periph - Description
\Description Description
\OccursUnder id
\Rank 1
\TextType VerseText
\TextProperties paragraph publishable vernacular
\StyleType Character
\FontSize 12

     */
}

void ExportParatextStylesheet::save(ustring filename) {
  // Write the stylesheet to file.
  if (!g_str_has_suffix(filename.c_str(), ".sty")) {
    filename.append(".sty");
  }
  write_lines(filename, stylesheet_lines);
}
