/* TRANSLATOR:  M�rio Ka�m�r /Mario Kacmar/ aka Kario (kario@szm.sk)
 * DATE OF TR:  22-01-2008
 * Encoding  :  Latin II (852)
 * LastChange:  22-05-2011
 */

#pragma once

MUI_LAYOUTS skSKLayouts[] =
{
    { L"041B", L"0000041B" },
    { L"041B", L"0001041B" },
    { L"0409", L"00000409" },
    { NULL, NULL }
};

static MUI_ENTRY skSKLanguagePageEntries[] =
{
    {
        4,
        3,
         " In�tal�tor syst�mu ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "V�ber jazyka.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  Zvo�te si jazyk, ktor� sa pou�ije po�as in�tal�cie.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   Potom stla�te ENTER.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Tento jazyk bude predvolen�m jazykom nain�talovan�ho syst�mu.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Pokra�ova�   F3 = Skon�i�",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY skSKWelcomePageEntries[] =
{
    {
        4,
        3,
         " In�tal�tor syst�mu ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "V�ta V�s In�tal�tor syst�mu ReactOS",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        6,
        11,
        "Tento stupe� In�tal�tora skop�ruje opera�n� syst�m ReactOS na V��",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "po��ta� a priprav� druh� stupe� In�tal�tora.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "\x07  Stla�te ENTER pre nain�talovanie syst�mu ReactOS.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  Stla�te R pre opravu alebo aktualiz�ciu syst�mu ReactOS.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Stla�te L, ak chcete zobrazi� licen�n� podmienky syst�mu ReactOS.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  Stla�te F3 pre skon�enie in�tal�cie, syst�m ReactOS sa nenain�taluje.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        23,
        "Pre viac inform�ci� o syst�me ReactOS, nav�t�vte pros�m:",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        24,
        "http://www.reactos.org",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        0,
        0,
        "ENTER = Pokra�ova�  R = Opravi�  L = Licencia  F3 = Skon�i�",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY skSKIntroPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Setup ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "ReactOS Version Status",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        6,
        11,
        "ReactOS is in Alpha stage, meaning it is not feature-complete",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "and is under heavy development. It is recommended to use it only for",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        13,
        "evaluation and testing purposes and not as your daily-usage OS.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        15,
        "Backup your data or test on a secondary computer if you attempt",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        16,
        "to run ReactOS on real hardware.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Press ENTER to continue ReactOS Setup.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  Press F3 to quit without installing ReactOS.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Continue   F3 = Quit",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY skSKLicensePageEntries[] =
{
    {
        4,
        3,
        " In�tal�tor syst�mu ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        6,
        "Licencia:",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        8,
        "Syst�m ReactOS je vydan� za podmienok licencie",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        9,
        "GNU GPL s �as�ami obsahuj�cimi k�d z in�ch kompatibiln�ch",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "licenci� ako s� X11 alebo BSD a licencie GNU LGPL.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "Preto v�etok softv�r, ktor� je s��as�ou syst�mu ReactOS,",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        12,
        "je vydan� pod licenciou GNU GPL, a rovnako s� zachovan�",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "aj p�vodn� licencie.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "Tento softv�r prich�dza BEZ Z�RUKY alebo obmedzen� pou��vania",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        16,
        "s v�nimkou platn�ho miestneho a medzin�rodn�ho pr�va. Licencia",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "syst�mu ReactOS pokr�va iba distrib�ciu k tren�m stran�m.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        18,
        "Ak z nejak�ho d�vodu neobdr��te k�piu licencie GNU GPL",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "spolu so syst�mom ReactOS, nav�t�vte, pros�m, str�nku:",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        20,
        "http://www.gnu.org/licenses/licenses.html",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        22,
        "Z�ruka:",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        24,
        "Toto je slobodn� softv�r; see the source for copying conditions.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        25,
        "There is NO warranty; not even for MERCHANTABILITY or",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        26,
        "FITNESS FOR A PARTICULAR PURPOSE",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = N�vrat",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY skSKDevicePageEntries[] =
{
    {
        4,
        3,
        " In�tal�tor syst�mu ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Zoznam ni��ie, zobrazuje s��asn� nastavenia zariaden�.",
        TEXT_STYLE_NORMAL
    },
    {
        24,
        11,
        "Po��ta�:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        12,
        "Monitor:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        13,
        "Kl�vesnica:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        14,
        "Rozlo�enie kl.:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        16,
        "Akceptova�:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        25,
        16, "Akceptova� tieto nastavenia zariaden�",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        19,
        "M��ete zmeni� hardv�rov� nastavenia stla�en�m kl�vesov HORE alebo DOLE",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        20,
        "pre v�ber polo�ky. Potom stla�te kl�ves ENTER pre v�ber alternat�vnych",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        21,
        "nastaven�.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        23,
        "Ak s� v�etky nastavenia spr�vne, vyberte polo�ku",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        24,
        "\"Akceptova� tieto nastavenia zariaden�\" a stla�te ENTER.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Pokra�ova�   F3 = Skon�i�",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY skSKRepairPageEntries[] =
{
    {
        4,
        3,
        " In�tal�tor syst�mu ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "In�tal�tor syst�mu ReactOS je v za�iato�nom �t�diu v�voja. Zatia�",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "nepodporuje v�etky funkcie plne vyu��vaj�ce program In�tal�tor.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "Funkcie na opravu syst�mu zatia� nie s� implementovan�.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "\x07  Stla�te U pre aktualiz�ciu OS.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  Stla�te R pre z�chrann� konzolu.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Stla�te ESC pre n�vrat na hlavn� str�nku.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  Stla�te ENTER pre re�tart po��ta�a.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ESC = Hlavn� str�nka  U = Aktualizova�  R = Z�chrana  ENTER = Re�tart",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY skSKComputerPageEntries[] =
{
    {
        4,
        3,
        " In�tal�tor syst�mu ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Chcete zmeni� typ po��ta�a, ktor� m� by� nain�talovan�.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  Stla�te kl�ves HORE alebo DOLE pre v�ber po�adovan�ho typu po��ta�a.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   Potom stla�te ENTER.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Stla�te kl�ves ESC pre n�vrat na predch�dzaj�cu str�nku bez zmeny",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   typu po��ta�a.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Pokra�ova�   ESC = Zru�i�   F3 = Skon�i�",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY skSKFlushPageEntries[] =
{
    {
        4,
        3,
        " In�tal�tor syst�mu ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        10,
        6,
        "Syst�m pr�ve overuje v�etky ulo�en� �daje na Va�om disku",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        8,
        "To m��e trva� nieko�ko min�t",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        9,
        "Ke� skon��, po��ta� sa automaticky re�tartuje",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "Vypr�zd�ujem cache", //Flushing cache (zapisuje sa na disk obsah cache, doslovne "Preplachovanie cashe")
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY skSKQuitPageEntries[] =
{
    {
        4,
        3,
        " In�tal�tor syst�mu ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        10,
        6,
        "Syst�m ReactOS nie je nain�talovan� kompletne",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        8,
        "Vyberte disketu z mechaniky A: a",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        9,
        "v�etky m�di� CD-ROM z CD mechan�k.",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        11,
        "Stla�te ENTER pre re�tart po��ta�a.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "Po�kajte, pros�m ...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY skSKDisplayPageEntries[] =
{
    {
        4,
        3,
        " In�tal�tor syst�mu ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Chcete zmeni� typ monitora, ktor� m� by� nain�talovan�.",
        TEXT_STYLE_NORMAL
    },
    {   8,
        10,
         "\x07  Stla�te kl�ves HORE alebo DOLE pre v�ber po�adovan�ho typu monitora.",
         TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   Potom stla�te ENTER.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Stla�te kl�ves ESC pre n�vrat na predch�dzaj�cu str�nku bez zmeny",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   typu monitora.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Pokra�ova�   ESC = Zru�i�   F3 = Skon�i�",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY skSKSuccessPageEntries[] =
{
    {
        4,
        3,
        " In�tal�tor syst�mu ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        10,
        6,
        "Z�kladn� s��ast� syst�mu ReactOS boli �spe�ne nain�talovan�.",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        8,
        "Vyberte disketu z mechaniky A: a",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        9,
        "v�etky m�di� CD-ROM z CD mechan�k.",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        11,
        "Stla�te ENTER pre re�tart po��ta�a.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Re�tart po��ta�a",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY skSKBootPageEntries[] =
{
    {
        4,
        3,
        " In�tal�tor syst�mu ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "In�tal�tor nem��e nain�talova� zav�dza� syst�mu na pevn� disk V��ho", //bootloader = zav�dza� syst�mu
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "po��ta�a",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        13,
        "Vlo�te pros�m, naform�tovan� disketu do mechaniky A:",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        14,
        "a stla�te ENTER.",
        TEXT_STYLE_NORMAL,
    },
    {
        0,
        0,
        "ENTER = Pokra�ova�   F3 = Skon�i�",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }

};

static MUI_ENTRY skSKSelectPartitionEntries[] =
{
    {
        4,
        3,
        " In�tal�tor syst�mu ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Zoznam ni��ie, zobrazuje existuj�ce oblasti a nevyu�it� miesto",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "na disku vhodn� pre nov� oblasti.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "\x07  Stla�te HORE alebo DOLE pre v�ber zo zoznamu polo�iek.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Stla�te ENTER pre in�tal�ciu syst�mu ReactOS na vybran� oblas�.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "\x07  Press P to create a primary partition.",
//        "\x07  Stla�te C pre vytvorenie novej oblasti.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  Press E to create an extended partition.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Press L to create a logical partition.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  Stla�te D pre vymazanie existuj�cej oblasti.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "Po�kajte, pros�m ...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY skSKConfirmDeleteSystemPartitionEntries[] =
{
    {
        4,
        3,
        " In�tal�tor syst�mu ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "You have chosen to delete the system partition.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        10,
        "System partitions can contain diagnostic programs, hardware configuration",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        11,
        "programs, programs to start an operating system (like ReactOS) or other",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "programs provided by the hardware manufacturer.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        14,
        "Delete a system partition only when you are sure that there are no such",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        15,
        "programs on the partition, or when you are sure you want to delete them.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        16,
        "When you delete the partition, you might not be able to boot the",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        17,
        "computer from the harddisk until you finished the ReactOS Setup.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        20,
        "\x07  Press ENTER to delete the system partition. You will be asked",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "   to confirm the deletion of the partition again later.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        24,
        "\x07  Press ESC to return to the previous page. The partition will",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        25,
        "   not be deleted.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER=Continue  ESC=Cancel",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY skSKFormatPartitionEntries[] =
{
    {
        4,
        3,
        " In�tal�tor syst�mu ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Form�tovanie oblasti",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        10,
        "In�tal�tor teraz naform�tuje oblas�. Stla�te ENTER pre pokra�ovanie.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Pokra�ova�   F3 = Skon�i�",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        TEXT_STYLE_NORMAL
    }
};

static MUI_ENTRY skSKInstallDirectoryEntries[] =
{
    {
        4,
        3,
        " In�tal�tor syst�mu ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "In�tal�tor nain�taluje s�bory syst�mu ReactOS na zvolen� oblas�.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "Vyberte adres�r kam chcete nain�talova� syst�m ReactOS:",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        14,
        "Ak chcete zmeni� odpor��an� adres�r, stla�te BACKSPACE a vyma�te",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        15,
        "znaky. Potom nap��te n�zov adres�ra, v ktorom chcete aby bol",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        16,
        "syst�m ReactOS nain�talovan�.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Pokra�ova�   F3 = Skon�i�",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY skSKFileCopyEntries[] =
{
    {
        4,
        3,
        " In�tal�tor syst�mu ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        11,
        12,
        "Po�kajte, pros�m, k�m In�tal�tor skop�ruje s�bory do in�tala�n�ho",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        30,
        13,
        "prie�inka pre ReactOS.",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        20,
        14,
        "Dokon�enie m��e trva� nieko�ko min�t.",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        50,
        0,
        "\xB3 Po�kajte, pros�m ...    ",
        TEXT_TYPE_STATUS
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY skSKBootLoaderEntries[] =
{
    {
        4,
        3,
        " In�tal�tor syst�mu ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "In�tal�tor je pripraven� nain�talova� zav�dza� opera�n�ho syst�mu",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        12,
        "Nain�talova� zav�dza� syst�mu na pevn� disk (MBR a VBR).",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "Nain�talova� zav�dza� syst�mu na pevn� disk (iba VBR).",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "Nain�talova� zav�dza� syst�mu na disketu.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "Presko�i� in�tal�ciu zav�dza�a syst�mu.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Pokra�ova�   F3 = Skon�i�",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY skSKKeyboardSettingsEntries[] =
{
    {
        4,
        3,
        " In�tal�tor syst�mu ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Chcete zmeni� typ kl�vesnice, ktor� m� by� nain�talovan�.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  Stla�te kl�ves HORE alebo DOLE a vyberte po�adovan� typ kl�vesnice.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   Potom stla�te ENTER.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Stla�te kl�ves ESC pre n�vrat na predch�dzaj�cu str�nku bez zmeny",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   typu kl�vesnice.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Pokra�ova�   ESC = Zru�i�   F3 = Skon�i�",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY skSKLayoutSettingsEntries[] =
{
    {
        4,
        3,
        " In�tal�tor syst�mu ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Pros�m, vyberte rozlo�enie, ktor� sa nain�taluje ako predvolen�.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  Stla�te kl�ves HORE alebo DOLE pre v�ber po�adovan�ho rozlo�enia",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   kl�vesnice. Potom stla�te ENTER.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Stla�te kl�ves ESC pre n�vrat na predch�dzaj�cu str�nku bez zmeny",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   rozlo�enia kl�vesnice.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Pokra�ova�   ESC = Zru�i�   F3 = Skon�i�",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    },

};

static MUI_ENTRY skSKPrepareCopyEntries[] =
{
    {
        4,
        3,
        " In�tal�tor syst�mu ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Pripravuje sa kop�rovanie s�borov syst�mu ReactOS. ",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "Vytv�ra sa zoznam potrebn�ch s�borov ...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    },

};

static MUI_ENTRY skSKSelectFSEntries[] =
{
    {
        4,
        3,
        " In�tal�tor syst�mu ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        17,
        "Vyberte syst�m s�borov zo zoznamu uveden�ho ni��ie.",
        0
    },
    {
        8,
        19,
        "\x07  Stla�te HORE alebo DOLE pre v�ber syst�mu s�borov.",
        0
    },
    {
        8,
        21,
        "\x07  Stla�te ENTER pre form�tovanie oblasti.",
        0
    },
    {
        8,
        23,
        "\x07  Stla�te ESC pre v�ber inej oblasti.",
        0
    },
    {
        0,
        0,
        "ENTER = Pokra�ova�   ESC = Zru�i�   F3 = Skon�i�",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },

    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY skSKDeletePartitionEntries[] =
{
    {
        4,
        3,
        " In�tal�tor syst�mu ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Vybrali ste si odstr�nenie oblasti",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        18,
        "\x07  Stla�te D pre odstr�nenie oblasti.",
        TEXT_STYLE_NORMAL
    },
    {
        11,
        19,
        "UPOZORNENIE: V�etky �daje na tejto oblasti sa nen�vratne stratia!",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  Stla�te ESC pre zru�enie.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "D = Odstr�ni� oblas�   ESC = Zru�i�   F3 = Skon�i�",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY skSKRegistryEntries[] =
{
    {
        4,
        3,
        " In�tal�tor syst�mu ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Aktualizuj� sa syst�mov� nastavenia.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "Vytv�raj� sa polo�ky registrov ...", //registry hives
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    },

};

MUI_ERROR skSKErrorEntries[] =
{
    {
        // NOT_AN_ERROR
        "Success\n"
    },
    {
        //ERROR_NOT_INSTALLED
        "Syst�m ReactOS nie je kompletne nain�talovan� na Va�om\n"
        "po��ta�i. Ak teraz preru�te in�tal�ciu, budete musie�\n"
        "spusti� In�tal�tor znova, aby sa syst�m ReactOS nain�taloval.\n"
        "\n"
        "  \x07  Stla�te ENTER pre pokra�ovanie v in�tal�cii.\n"
        "  \x07  Stla�te F3 pre skon�enie in�tal�cie.",
        "F3 = Skon�i�  ENTER = Pokra�ova�"
    },
    {
        //ERROR_NO_HDD
        "In�tal�toru sa nepodarilo n�js� pevn� disk.\n",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_NO_SOURCE_DRIVE
        "In�tal�toru sa nepodarilo n�js� jej zdrojov� mechaniku.\n",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_LOAD_TXTSETUPSIF
        "In�tal�tor zlyhal pri nahr�van� s�boru TXTSETUP.SIF.\n",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_CORRUPT_TXTSETUPSIF
        "In�tal�tor na�iel po�koden� s�bor TXTSETUP.SIF.\n",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_SIGNATURE_TXTSETUPSIF,
        "Setup found an invalid signature in TXTSETUP.SIF.\n", //chybn� (neplatn�) podpis (znak, zna�ka, �ifra)
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_DRIVE_INFORMATION
        "In�tal�tor nemohol z�ska� inform�cie o syst�mov�ch diskoch.\n",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_WRITE_BOOT,
        "In�tal�toru sa nepodarilo nain�talova� zav�dzac� k�d s�borov�ho\n"
        "syst�mu FAT na syst�mov� part�ciu.",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_LOAD_COMPUTER,
        "In�tal�tor zlyhal pri nahr�van� zoznamu typov po��ta�ov.\n",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_LOAD_DISPLAY,
        "In�tal�tor zlyhal pri nahr�van� zoznamu nastaven� monitora.\n",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_LOAD_KEYBOARD,
        "In�tal�tor zlyhal pri nahr�van� zoznamu typov kl�vesn�c.\n",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_LOAD_KBLAYOUT,
        "In�tal�tor zlyhal pri nahr�van� zoznamu rozlo�enia kl�vesn�c.\n",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_WARN_PARTITION,
//          "In�tal�tor zistil, �e najmenej jeden pevn� disk obsahuje nekompatibiln�\n"
          "In�tal�tor na�iel najmenej na jednom pevnom disku nekompatibiln�\n"
          "tabu�ku oblast�, s ktorou sa ned� spr�vne zaobch�dza�!\n"
          "\n"
          "Vytvorenie alebo odstr�nenie oblast� m��e zni�i� tabu�ku oblast�.\n"
          "\n"
          "  \x07  Stla�te F3 pre skon�enie in�tal�cie.\n"
          "  \x07  Stla�te ENTER pre pokra�ovanie.",
          "F3 = Skon�i�  ENTER = Pokra�ova�"
    },
    {
        //ERROR_NEW_PARTITION,
        "Nem��ete vytvori� nov� oblas�\n"
        "vo vn�tri u� existuj�cej oblasti!\n"
        "\n"
        "  * Pokra�ujte stla�en�m �ubovo�n�ho kl�vesu.",
        NULL
    },
    {
        //ERROR_DELETE_SPACE,
        "Nem��ete odstr�ni� miesto na disku, ktor� nie je oblas�ou!\n"
        "\n"
        "  * Pokra�ujte stla�en�m �ubovo�n�ho kl�vesu.",
        NULL
    },
    {
        //ERROR_INSTALL_BOOTCODE,
        "In�tal�toru sa nepodarilo nain�talova� zav�dzac� k�d s�borov�ho\n"
        "syst�mu FAT na syst�mov� part�ciu.",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_NO_FLOPPY,
        "V mechanike A: nie je disketa.",
        "ENTER = Pokra�ova�"
    },
    {
        //ERROR_UPDATE_KBSETTINGS,
        "In�tal�tor zlyhal pri aktualiz�cii nastaven� rozlo�enia kl�vesnice.",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_UPDATE_DISPLAY_SETTINGS,
        "Setup failed to update display registry settings.",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_IMPORT_HIVE,
        "Setup failed to import a hive file.",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_FIND_REGISTRY
        "Setup failed to find the registry data files.",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_CREATE_HIVE,
        "Setup failed to create the registry hives.",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_INITIALIZE_REGISTRY,
        "Setup failed to set the initialize the registry.",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_INVALID_CABINET_INF,
        "Cabinet has no valid inf file.\n",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_CABINET_MISSING,
        "Cabinet not found.\n",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_CABINET_SCRIPT,
        "Cabinet has no setup script.\n",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_COPY_QUEUE,
        "Setup failed to open the copy file queue.\n",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_CREATE_DIR,
        "In�tal�tor nemohol vytvori� in�tala�n� adres�re.",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_TXTSETUP_SECTION,
        "Setup failed to find the 'Directories' section\n"
        "in TXTSETUP.SIF.\n",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_CABINET_SECTION,
        "Setup failed to find the 'Directories' section\n"
        "in the cabinet.\n",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_CREATE_INSTALL_DIR
        "In�tal�tor nemohol vytvori� in�tala�n� adres�r.", //could not = nemohol
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_FIND_SETUPDATA,
        "In�tal�tor zlyhal pri h�adan� sekcie 'SetupData'\n"
        "v s�bore TXTSETUP.SIF.\n",
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_WRITE_PTABLE,
        "In�tal�tor zlyhal pri z�pise do tabuliek oblast�.\n"
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_ADDING_CODEPAGE,
        "In�tal�tor zlyhal pri prid�van� k�dovej str�nky do registrov.\n"
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_UPDATE_LOCALESETTINGS,
        "Setup could not set the system locale.\n"
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_ADDING_KBLAYOUTS,
        "In�tal�tor zlyhal pri prid�van� rozlo�en� kl�vesnice do registrov.\n"
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_UPDATE_GEOID,
        "In�tal�tor nemohol nastavi� geo id.\n"
        "ENTER = Re�tart po��ta�a"
    },
    {
        //ERROR_DIRECTORY_NAME,
        "Invalid directory name.\n"
        "\n"
        "  * Press any key to continue."
    },
    {
        //ERROR_INSUFFICIENT_PARTITION_SIZE,
        "The selected partition is not large enough to install ReactOS.\n"
        "The install partition must have a size of at least %lu MB.\n"
        "\n"
        "  * Pokra�ujte stla�en�m �ubovo�n�ho kl�vesu.",
        NULL
    },
    {
        //ERROR_PARTITION_TABLE_FULL,
        "You can not create a new primary or extended partition in the\n"
        "partition table of this disk because the partition table is full.\n"
        "\n"
        "  * Press any key to continue."
    },
    {
        //ERROR_ONLY_ONE_EXTENDED,
        "You can not create more than one extended partition per disk.\n"
        "\n"
        "  * Press any key to continue."
    },
    {
        //ERROR_FORMATTING_PARTITION,
        "Setup is unable to format the partition:\n"
        " %S\n"
        "\n"
        "ENTER = Reboot computer"
    },
    {
        NULL,
        NULL
    }
};

MUI_PAGE skSKPages[] =
{
    {
        LANGUAGE_PAGE,
        skSKLanguagePageEntries
    },
    {
        START_PAGE,
        skSKWelcomePageEntries
    },
    {
        INSTALL_INTRO_PAGE,
        skSKIntroPageEntries
    },
    {
        LICENSE_PAGE,
        skSKLicensePageEntries
    },
    {
        DEVICE_SETTINGS_PAGE,
        skSKDevicePageEntries
    },
    {
        REPAIR_INTRO_PAGE,
        skSKRepairPageEntries
    },
    {
        COMPUTER_SETTINGS_PAGE,
        skSKComputerPageEntries
    },
    {
        DISPLAY_SETTINGS_PAGE,
        skSKDisplayPageEntries
    },
    {
        FLUSH_PAGE,
        skSKFlushPageEntries
    },
    {
        SELECT_PARTITION_PAGE,
        skSKSelectPartitionEntries
    },
    {
        CONFIRM_DELETE_SYSTEM_PARTITION_PAGE,
        skSKConfirmDeleteSystemPartitionEntries
    },
    {
        SELECT_FILE_SYSTEM_PAGE,
        skSKSelectFSEntries
    },
    {
        FORMAT_PARTITION_PAGE,
        skSKFormatPartitionEntries
    },
    {
        DELETE_PARTITION_PAGE,
        skSKDeletePartitionEntries
    },
    {
        INSTALL_DIRECTORY_PAGE,
        skSKInstallDirectoryEntries
    },
    {
        PREPARE_COPY_PAGE,
        skSKPrepareCopyEntries
    },
    {
        FILE_COPY_PAGE,
        skSKFileCopyEntries
    },
    {
        KEYBOARD_SETTINGS_PAGE,
        skSKKeyboardSettingsEntries
    },
    {
        BOOT_LOADER_PAGE,
        skSKBootLoaderEntries
    },
    {
        LAYOUT_SETTINGS_PAGE,
        skSKLayoutSettingsEntries
    },
    {
        QUIT_PAGE,
        skSKQuitPageEntries
    },
    {
        SUCCESS_PAGE,
        skSKSuccessPageEntries
    },
    {
        BOOT_LOADER_FLOPPY_PAGE,
        skSKBootPageEntries
    },
    {
        REGISTRY_PAGE,
        skSKRegistryEntries
    },
    {
        -1,
        NULL
    }
};

MUI_STRING skSKStrings[] =
{
    {STRING_PLEASEWAIT,
     "   Po�kajte, pros�m ..."},
    {STRING_INSTALLCREATEPARTITION,
     "   ENTER = Install   P = Create Primary   E = Create Extended   F3 = Quit"},
//     "   ENTER = In�talova�   C = Vytvori� oblas�   F3 = Skon�i�"},
    {STRING_INSTALLCREATELOGICAL,
     "   ENTER = Install   L = Create Logical Partition   F3 = Quit"},
    {STRING_INSTALLDELETEPARTITION,
     "   ENTER = In�talova�   D = Odstr�ni� oblas�   F3 = Skon�i�"},
    {STRING_DELETEPARTITION,
     "   D = Delete Partition   F3 = Quit"},
    {STRING_PARTITIONSIZE,
     "Ve�kos� novej oblasti:"},
    {STRING_CHOOSENEWPARTITION,
     "You have chosen to create a primary partition on"},
//     "Zvolili ste vytvorenie novej oblasti na"},
    {STRING_CHOOSE_NEW_EXTENDED_PARTITION,
     "You have chosen to create an extended partition on"},
    {STRING_CHOOSE_NEW_LOGICAL_PARTITION,
     "You have chosen to create a logical partition on"},
    {STRING_HDDSIZE,
    "Zadajte, pros�m, ve�kos� novej oblasti v megabajtoch."},
    {STRING_CREATEPARTITION,
     "   ENTER = Vytvori� oblas�   ESC = Zru�i�   F3 = Skon�i�"},
    {STRING_PARTFORMAT,
    "T�to oblas� sa bude form�tova� ako �al�ia."},
    {STRING_NONFORMATTEDPART,
    "Zvolili ste in�tal�ciu syst�mu ReactOS na nov� alebo nenaform�tovan� oblas�."},
    {STRING_NONFORMATTEDSYSTEMPART,
    "The system partition is not formatted yet."},
    {STRING_NONFORMATTEDOTHERPART,
    "The new partition is not formatted yet."},
    {STRING_INSTALLONPART,
    "In�tal�tor nain�taluje syst�m ReactOS na oblas�"},
    {STRING_CHECKINGPART,
    "In�tal�tor teraz skontroluje vybran� oblas�."},
    {STRING_CONTINUE,
    "ENTER = Pokra�ova�"},
    {STRING_QUITCONTINUE,
    "F3 = Skon�i�  ENTER = Pokra�ova�"},
    {STRING_REBOOTCOMPUTER,
    "ENTER = Re�tart po��ta�a"},
    {STRING_TXTSETUPFAILED,
    "In�tal�tor zlyhal pri h�adan� sekcie '%S'\nv s�bore TXTSETUP.SIF.\n"},
    {STRING_COPYING,
     "   Kop�ruje sa s�bor: %S"},
    {STRING_SETUPCOPYINGFILES,
     "In�tal�tor kop�ruje s�bory..."},
    {STRING_REGHIVEUPDATE,
    "   Aktualizujem polo�ky registrov..."},
    {STRING_IMPORTFILE,
    "   Importujem %S..."},
    {STRING_DISPLAYETTINGSUPDATE,
    "   Aktualizujem nastavenia obrazovky v registrov..."}, //display registry settings
    {STRING_LOCALESETTINGSUPDATE,
    "   Aktualizujem miestne nastavenia..."},
    {STRING_KEYBOARDSETTINGSUPDATE,
    "   Aktualizujem nastavenia rozlo�enia kl�vesnice..."},
    {STRING_CODEPAGEINFOUPDATE,
    "   Prid�vam do registrov inform�cie o k�dovej str�nke..."},
    {STRING_DONE,
    "   Hotovo..."},
    {STRING_REBOOTCOMPUTER2,
    "   ENTER = Re�tart po��ta�a"},
    {STRING_CONSOLEFAIL1,
    "Nemo�no otvori� konzolu\r\n\r\n"},
    {STRING_CONSOLEFAIL2,
    "Najbe�nej�ou pr��inou tohto je pou�itie USB kl�vesnice\r\n"},
    {STRING_CONSOLEFAIL3,
    "USB kl�vesnica e�te nie je plne podporovan�\r\n"},
    {STRING_FORMATTINGDISK,
    "In�tal�tor form�tuje V�� disk"},
    {STRING_CHECKINGDISK,
    "In�tal�tor kontroluje V�� disk"},
    {STRING_FORMATDISK1,
    " Naform�tova� oblas� ako syst�m s�borov %S (r�chly form�t) "},
    {STRING_FORMATDISK2,
    " Naform�tova� oblas� ako syst�m s�borov %S "},
    {STRING_KEEPFORMAT,
    " Ponecha� s��asn� syst�m s�borov (bez zmeny) "},
    {STRING_HDINFOPARTCREATE,
    "%I64u %s  pevnom disku %lu  (Port=%hu, Bus=%hu, Id=%hu) na %wZ."},
    {STRING_HDDINFOUNK1,
    "%I64u %s  pevn� disk %lu  (Port=%hu, Bus=%hu, Id=%hu)."},
    {STRING_HDDINFOUNK2,
    "   %c%c  typ 0x%02X    %I64u %s"},
    {STRING_HDINFOPARTDELETE,
    "na %I64u %s  pevnom disku %lu  (Port=%hu, Bus=%hu, Id=%hu) na %wZ."},
    {STRING_HDDINFOUNK3,
    "na %I64u %s  pevnom disku %lu  (Port=%hu, Bus=%hu, Id=%hu)."},
    {STRING_HDINFOPARTZEROED,
    "pevn� disk %lu (%I64u %s), Port=%hu, Bus=%hu, Id=%hu (%wZ)."},
    {STRING_HDDINFOUNK4,
    "%c%c  typ 0x%02X    %I64u %s"},
    {STRING_HDINFOPARTEXISTS,
    "na pevnom disku %lu (%I64u %s), Port=%hu, Bus=%hu, Id=%hu (%wZ)."},
    {STRING_HDDINFOUNK5,
    "%c%c %c %styp %-3u%s                      %6lu %s"},
    {STRING_HDINFOPARTSELECT,
    "%6lu %s  pevn� disk %lu  (Port=%hu, Bus=%hu, Id=%hu) na %S"},
    {STRING_HDDINFOUNK6,
    "%6lu %s  pevnom disku %lu  (Port=%hu, Bus=%hu, Id=%hu)"},
    {STRING_NEWPARTITION,
    "In�tal�tor vytvoril nov� oblas� na"},
    {STRING_UNPSPACE,
    "    %sMiesto bez oblast�%s             %6lu %s"},
    {STRING_MAXSIZE,
    "MB (max. %lu MB)"},
    {STRING_EXTENDED_PARTITION,
    "Extended Partition"},
    {STRING_UNFORMATTED,
    "Nov� (Nenaform�tovan�)"},
    {STRING_FORMATUNUSED,
    "Nepou�it�"},
    {STRING_FORMATUNKNOWN,
    "Nezn�me"},
    {STRING_KB,
    "KB"},
    {STRING_MB,
    "MB"},
    {STRING_GB,
    "GB"},
    {STRING_ADDKBLAYOUTS,
    "Prid�vam rozlo�enia kl�vesnice"},
    {0, 0}
};
