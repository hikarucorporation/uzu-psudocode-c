// Function : png_read_filter_row_up
// Namespace: juce:pnglibNamespace
// Entry    : 003aa460
// Prototype: undefined png_read_filter_row_up(long param_1, char * param_2, char * param_3)
// Body     : 003aa460 - 003aa648


/* WARNING: Removing unreachable block (ram,0x003aa63c) */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_read_filter_row_up(juce::pnglibNamespace::png_row_info_struct*,
   unsigned char*, unsigned char const*) */

void __cdecl juce::pnglibNamespace::png_read_filter_row_up(long param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  char cVar70;
  char cVar71;
  char cVar72;
  char cVar73;
  char cVar74;
  char cVar75;
  char cVar76;
  char cVar77;
  char cVar78;
  char cVar79;
  char cVar80;
  char cVar81;
  char cVar82;
  char cVar83;
  char cVar84;
  char cVar85;
  char cVar86;
  char cVar87;
  char cVar88;
  char cVar89;
  char cVar90;
  char cVar91;
  char cVar92;
  char cVar93;
  char cVar94;
  char cVar95;
  char cVar96;
  char cVar97;
  char cVar98;
  char cVar99;
  ulong uVar100;
  long lVar101;
  char *pcVar102;
  ulong uVar103;
  ulong uVar104;
  ulong uVar105;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if (uVar5 == 0) {
    return;
  }
  if ((uVar5 < 8) || ((param_2 < param_3 + uVar5 && (param_3 < param_2 + uVar5)))) {
    uVar105 = 0;
    pcVar102 = param_3;
    goto LAB_003aa490;
  }
  if (uVar5 < 0x20) {
    uVar103 = 0;
  }
  else {
    uVar105 = uVar5 & 0xffffffffffffffe0;
    uVar103 = (uVar105 - 0x20 >> 5) + 1;
    if (uVar105 - 0x20 == 0) {
      lVar101 = 0;
LAB_003aa5b5:
      pcVar102 = param_2 + lVar101;
      cVar6 = pcVar102[1];
      cVar7 = pcVar102[2];
      cVar8 = pcVar102[3];
      cVar9 = pcVar102[4];
      cVar10 = pcVar102[5];
      cVar11 = pcVar102[6];
      cVar12 = pcVar102[7];
      cVar13 = pcVar102[8];
      cVar14 = pcVar102[9];
      cVar15 = pcVar102[10];
      cVar16 = pcVar102[0xb];
      cVar17 = pcVar102[0xc];
      cVar18 = pcVar102[0xd];
      cVar19 = pcVar102[0xe];
      cVar20 = pcVar102[0xf];
      pcVar1 = param_2 + lVar101 + 0x10;
      cVar21 = *pcVar1;
      cVar22 = pcVar1[1];
      cVar23 = pcVar1[2];
      cVar24 = pcVar1[3];
      cVar25 = pcVar1[4];
      cVar26 = pcVar1[5];
      cVar27 = pcVar1[6];
      cVar28 = pcVar1[7];
      cVar29 = pcVar1[8];
      cVar30 = pcVar1[9];
      cVar31 = pcVar1[10];
      cVar32 = pcVar1[0xb];
      cVar33 = pcVar1[0xc];
      cVar34 = pcVar1[0xd];
      cVar35 = pcVar1[0xe];
      cVar36 = pcVar1[0xf];
      pcVar1 = param_3 + lVar101;
      cVar37 = pcVar1[1];
      cVar38 = pcVar1[2];
      cVar39 = pcVar1[3];
      cVar40 = pcVar1[4];
      cVar41 = pcVar1[5];
      cVar42 = pcVar1[6];
      cVar43 = pcVar1[7];
      cVar44 = pcVar1[8];
      cVar45 = pcVar1[9];
      cVar46 = pcVar1[10];
      cVar47 = pcVar1[0xb];
      cVar48 = pcVar1[0xc];
      cVar49 = pcVar1[0xd];
      cVar50 = pcVar1[0xe];
      cVar51 = pcVar1[0xf];
      pcVar2 = param_3 + lVar101 + 0x10;
      cVar52 = *pcVar2;
      cVar53 = pcVar2[1];
      cVar54 = pcVar2[2];
      cVar55 = pcVar2[3];
      cVar56 = pcVar2[4];
      cVar57 = pcVar2[5];
      cVar58 = pcVar2[6];
      cVar59 = pcVar2[7];
      cVar60 = pcVar2[8];
      cVar61 = pcVar2[9];
      cVar62 = pcVar2[10];
      cVar63 = pcVar2[0xb];
      cVar64 = pcVar2[0xc];
      cVar65 = pcVar2[0xd];
      cVar66 = pcVar2[0xe];
      cVar67 = pcVar2[0xf];
      pcVar2 = param_2 + lVar101;
      *pcVar2 = *pcVar1 + *pcVar102;
      pcVar2[1] = cVar37 + cVar6;
      pcVar2[2] = cVar38 + cVar7;
      pcVar2[3] = cVar39 + cVar8;
      pcVar2[4] = cVar40 + cVar9;
      pcVar2[5] = cVar41 + cVar10;
      pcVar2[6] = cVar42 + cVar11;
      pcVar2[7] = cVar43 + cVar12;
      pcVar2[8] = cVar44 + cVar13;
      pcVar2[9] = cVar45 + cVar14;
      pcVar2[10] = cVar46 + cVar15;
      pcVar2[0xb] = cVar47 + cVar16;
      pcVar2[0xc] = cVar48 + cVar17;
      pcVar2[0xd] = cVar49 + cVar18;
      pcVar2[0xe] = cVar50 + cVar19;
      pcVar2[0xf] = cVar51 + cVar20;
      pcVar102 = param_2 + lVar101 + 0x10;
      *pcVar102 = cVar52 + cVar21;
      pcVar102[1] = cVar53 + cVar22;
      pcVar102[2] = cVar54 + cVar23;
      pcVar102[3] = cVar55 + cVar24;
      pcVar102[4] = cVar56 + cVar25;
      pcVar102[5] = cVar57 + cVar26;
      pcVar102[6] = cVar58 + cVar27;
      pcVar102[7] = cVar59 + cVar28;
      pcVar102[8] = cVar60 + cVar29;
      pcVar102[9] = cVar61 + cVar30;
      pcVar102[10] = cVar62 + cVar31;
      pcVar102[0xb] = cVar63 + cVar32;
      pcVar102[0xc] = cVar64 + cVar33;
      pcVar102[0xd] = cVar65 + cVar34;
      pcVar102[0xe] = cVar66 + cVar35;
      pcVar102[0xf] = cVar67 + cVar36;
    }
    else {
      uVar104 = uVar103 & 0xfffffffffffffffe;
      lVar101 = 0;
      do {
        pcVar102 = param_3 + lVar101;
        cVar6 = pcVar102[1];
        cVar7 = pcVar102[2];
        cVar8 = pcVar102[3];
        cVar9 = pcVar102[4];
        cVar10 = pcVar102[5];
        cVar11 = pcVar102[6];
        cVar12 = pcVar102[7];
        cVar13 = pcVar102[8];
        cVar14 = pcVar102[9];
        cVar15 = pcVar102[10];
        cVar16 = pcVar102[0xb];
        cVar17 = pcVar102[0xc];
        cVar18 = pcVar102[0xd];
        cVar19 = pcVar102[0xe];
        cVar20 = pcVar102[0xf];
        pcVar1 = param_3 + lVar101 + 0x10;
        cVar21 = *pcVar1;
        cVar22 = pcVar1[1];
        cVar23 = pcVar1[2];
        cVar24 = pcVar1[3];
        cVar25 = pcVar1[4];
        cVar26 = pcVar1[5];
        cVar27 = pcVar1[6];
        cVar28 = pcVar1[7];
        cVar29 = pcVar1[8];
        cVar30 = pcVar1[9];
        cVar31 = pcVar1[10];
        cVar32 = pcVar1[0xb];
        cVar33 = pcVar1[0xc];
        cVar34 = pcVar1[0xd];
        cVar35 = pcVar1[0xe];
        cVar36 = pcVar1[0xf];
        pcVar1 = param_2 + lVar101;
        cVar37 = pcVar1[1];
        cVar38 = pcVar1[2];
        cVar39 = pcVar1[3];
        cVar40 = pcVar1[4];
        cVar41 = pcVar1[5];
        cVar42 = pcVar1[6];
        cVar43 = pcVar1[7];
        cVar44 = pcVar1[8];
        cVar45 = pcVar1[9];
        cVar46 = pcVar1[10];
        cVar47 = pcVar1[0xb];
        cVar48 = pcVar1[0xc];
        cVar49 = pcVar1[0xd];
        cVar50 = pcVar1[0xe];
        cVar51 = pcVar1[0xf];
        pcVar2 = param_2 + lVar101 + 0x10;
        cVar52 = *pcVar2;
        cVar53 = pcVar2[1];
        cVar54 = pcVar2[2];
        cVar55 = pcVar2[3];
        cVar56 = pcVar2[4];
        cVar57 = pcVar2[5];
        cVar58 = pcVar2[6];
        cVar59 = pcVar2[7];
        cVar60 = pcVar2[8];
        cVar61 = pcVar2[9];
        cVar62 = pcVar2[10];
        cVar63 = pcVar2[0xb];
        cVar64 = pcVar2[0xc];
        cVar65 = pcVar2[0xd];
        cVar66 = pcVar2[0xe];
        cVar67 = pcVar2[0xf];
        pcVar2 = param_2 + lVar101 + 0x20;
        cVar68 = *pcVar2;
        cVar69 = pcVar2[1];
        cVar70 = pcVar2[2];
        cVar71 = pcVar2[3];
        cVar72 = pcVar2[4];
        cVar73 = pcVar2[5];
        cVar74 = pcVar2[6];
        cVar75 = pcVar2[7];
        cVar76 = pcVar2[8];
        cVar77 = pcVar2[9];
        cVar78 = pcVar2[10];
        cVar79 = pcVar2[0xb];
        cVar80 = pcVar2[0xc];
        cVar81 = pcVar2[0xd];
        cVar82 = pcVar2[0xe];
        cVar83 = pcVar2[0xf];
        pcVar2 = param_2 + lVar101 + 0x30;
        cVar84 = *pcVar2;
        cVar85 = pcVar2[1];
        cVar86 = pcVar2[2];
        cVar87 = pcVar2[3];
        cVar88 = pcVar2[4];
        cVar89 = pcVar2[5];
        cVar90 = pcVar2[6];
        cVar91 = pcVar2[7];
        cVar92 = pcVar2[8];
        cVar93 = pcVar2[9];
        cVar94 = pcVar2[10];
        cVar95 = pcVar2[0xb];
        cVar96 = pcVar2[0xc];
        cVar97 = pcVar2[0xd];
        cVar98 = pcVar2[0xe];
        cVar99 = pcVar2[0xf];
        pcVar2 = param_2 + lVar101;
        *pcVar2 = *pcVar1 + *pcVar102;
        pcVar2[1] = cVar37 + cVar6;
        pcVar2[2] = cVar38 + cVar7;
        pcVar2[3] = cVar39 + cVar8;
        pcVar2[4] = cVar40 + cVar9;
        pcVar2[5] = cVar41 + cVar10;
        pcVar2[6] = cVar42 + cVar11;
        pcVar2[7] = cVar43 + cVar12;
        pcVar2[8] = cVar44 + cVar13;
        pcVar2[9] = cVar45 + cVar14;
        pcVar2[10] = cVar46 + cVar15;
        pcVar2[0xb] = cVar47 + cVar16;
        pcVar2[0xc] = cVar48 + cVar17;
        pcVar2[0xd] = cVar49 + cVar18;
        pcVar2[0xe] = cVar50 + cVar19;
        pcVar2[0xf] = cVar51 + cVar20;
        pcVar102 = param_2 + lVar101 + 0x10;
        *pcVar102 = cVar52 + cVar21;
        pcVar102[1] = cVar53 + cVar22;
        pcVar102[2] = cVar54 + cVar23;
        pcVar102[3] = cVar55 + cVar24;
        pcVar102[4] = cVar56 + cVar25;
        pcVar102[5] = cVar57 + cVar26;
        pcVar102[6] = cVar58 + cVar27;
        pcVar102[7] = cVar59 + cVar28;
        pcVar102[8] = cVar60 + cVar29;
        pcVar102[9] = cVar61 + cVar30;
        pcVar102[10] = cVar62 + cVar31;
        pcVar102[0xb] = cVar63 + cVar32;
        pcVar102[0xc] = cVar64 + cVar33;
        pcVar102[0xd] = cVar65 + cVar34;
        pcVar102[0xe] = cVar66 + cVar35;
        pcVar102[0xf] = cVar67 + cVar36;
        pcVar102 = param_3 + lVar101 + 0x20;
        cVar6 = pcVar102[1];
        cVar7 = pcVar102[2];
        cVar8 = pcVar102[3];
        cVar9 = pcVar102[4];
        cVar10 = pcVar102[5];
        cVar11 = pcVar102[6];
        cVar12 = pcVar102[7];
        cVar13 = pcVar102[8];
        cVar14 = pcVar102[9];
        cVar15 = pcVar102[10];
        cVar16 = pcVar102[0xb];
        cVar17 = pcVar102[0xc];
        cVar18 = pcVar102[0xd];
        cVar19 = pcVar102[0xe];
        cVar20 = pcVar102[0xf];
        pcVar1 = param_3 + lVar101 + 0x30;
        cVar21 = *pcVar1;
        cVar22 = pcVar1[1];
        cVar23 = pcVar1[2];
        cVar24 = pcVar1[3];
        cVar25 = pcVar1[4];
        cVar26 = pcVar1[5];
        cVar27 = pcVar1[6];
        cVar28 = pcVar1[7];
        cVar29 = pcVar1[8];
        cVar30 = pcVar1[9];
        cVar31 = pcVar1[10];
        cVar32 = pcVar1[0xb];
        cVar33 = pcVar1[0xc];
        cVar34 = pcVar1[0xd];
        cVar35 = pcVar1[0xe];
        cVar36 = pcVar1[0xf];
        pcVar1 = param_2 + lVar101 + 0x20;
        *pcVar1 = *pcVar102 + cVar68;
        pcVar1[1] = cVar6 + cVar69;
        pcVar1[2] = cVar7 + cVar70;
        pcVar1[3] = cVar8 + cVar71;
        pcVar1[4] = cVar9 + cVar72;
        pcVar1[5] = cVar10 + cVar73;
        pcVar1[6] = cVar11 + cVar74;
        pcVar1[7] = cVar12 + cVar75;
        pcVar1[8] = cVar13 + cVar76;
        pcVar1[9] = cVar14 + cVar77;
        pcVar1[10] = cVar15 + cVar78;
        pcVar1[0xb] = cVar16 + cVar79;
        pcVar1[0xc] = cVar17 + cVar80;
        pcVar1[0xd] = cVar18 + cVar81;
        pcVar1[0xe] = cVar19 + cVar82;
        pcVar1[0xf] = cVar20 + cVar83;
        pcVar102 = param_2 + lVar101 + 0x30;
        *pcVar102 = cVar21 + cVar84;
        pcVar102[1] = cVar22 + cVar85;
        pcVar102[2] = cVar23 + cVar86;
        pcVar102[3] = cVar24 + cVar87;
        pcVar102[4] = cVar25 + cVar88;
        pcVar102[5] = cVar26 + cVar89;
        pcVar102[6] = cVar27 + cVar90;
        pcVar102[7] = cVar28 + cVar91;
        pcVar102[8] = cVar29 + cVar92;
        pcVar102[9] = cVar30 + cVar93;
        pcVar102[10] = cVar31 + cVar94;
        pcVar102[0xb] = cVar32 + cVar95;
        pcVar102[0xc] = cVar33 + cVar96;
        pcVar102[0xd] = cVar34 + cVar97;
        pcVar102[0xe] = cVar35 + cVar98;
        pcVar102[0xf] = cVar36 + cVar99;
        lVar101 = lVar101 + 0x40;
        uVar104 = uVar104 - 2;
      } while (uVar104 != 0);
      if ((uVar103 & 1) != 0) goto LAB_003aa5b5;
    }
    if (uVar5 == uVar105) {
      return;
    }
    uVar103 = uVar105;
    if ((uVar5 & 0x18) == 0) {
      param_2 = param_2 + uVar105;
      pcVar102 = param_3 + uVar105;
      goto LAB_003aa490;
    }
  }
  uVar105 = uVar5 & 0xfffffffffffffff8;
  pcVar102 = param_3 + uVar105;
  do {
    uVar3 = *(undefined8 *)(param_2 + uVar103);
    uVar4 = *(undefined8 *)(param_3 + uVar103);
    *(ulong *)(param_2 + uVar103) =
         CONCAT17((char)((ulong)uVar4 >> 0x38) + (char)((ulong)uVar3 >> 0x38),
                  CONCAT16((char)((ulong)uVar4 >> 0x30) + (char)((ulong)uVar3 >> 0x30),
                           CONCAT15((char)((ulong)uVar4 >> 0x28) + (char)((ulong)uVar3 >> 0x28),
                                    CONCAT14((char)((ulong)uVar4 >> 0x20) +
                                             (char)((ulong)uVar3 >> 0x20),
                                             CONCAT13((char)((ulong)uVar4 >> 0x18) +
                                                      (char)((ulong)uVar3 >> 0x18),
                                                      CONCAT12((char)((ulong)uVar4 >> 0x10) +
                                                               (char)((ulong)uVar3 >> 0x10),
                                                               CONCAT11((char)((ulong)uVar4 >> 8) +
                                                                        (char)((ulong)uVar3 >> 8),
                                                                        (char)uVar4 + (char)uVar3)))
                                            ))));
    uVar103 = uVar103 + 8;
  } while (uVar105 != uVar103);
  if (uVar5 == uVar105) {
    return;
  }
  param_2 = param_2 + uVar105;
LAB_003aa490:
  uVar103 = ~uVar105;
  uVar104 = uVar5 & 3;
  if (uVar104 != 0) {
    uVar100 = uVar104;
    do {
      *param_2 = *param_2 + *pcVar102;
      pcVar102 = pcVar102 + 1;
      param_2 = param_2 + 1;
      uVar100 = uVar100 - 1;
    } while (uVar100 != 0);
    uVar105 = uVar105 | uVar104;
  }
  if (2 < uVar103 + uVar5) {
    lVar101 = 0;
    do {
      param_2[lVar101] = param_2[lVar101] + pcVar102[lVar101];
      param_2[lVar101 + 1] = param_2[lVar101 + 1] + pcVar102[lVar101 + 1];
      param_2[lVar101 + 2] = param_2[lVar101 + 2] + pcVar102[lVar101 + 2];
      param_2[lVar101 + 3] = param_2[lVar101 + 3] + pcVar102[lVar101 + 3];
      lVar101 = lVar101 + 4;
    } while (uVar5 - uVar105 != lVar101);
  }
  return;
}


