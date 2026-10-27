// Function : png_read_filter_row_sub
// Namespace: juce:pnglibNamespace
// Entry    : 003aa230
// Prototype: undefined png_read_filter_row_sub(long param_1, ulong param_2)
// Body     : 003aa230 - 003aa458


/* WARNING: Removing unreachable block (ram,0x003aa44b) */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_read_filter_row_sub(juce::pnglibNamespace::png_row_info_struct*,
   unsigned char*, unsigned char const*) */

void __cdecl juce::pnglibNamespace::png_read_filter_row_sub(long param_1,ulong param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
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
  char cVar100;
  char cVar101;
  long lVar102;
  char *pcVar103;
  uint uVar104;
  ulong uVar105;
  ulong uVar106;
  undefined8 *puVar107;
  ulong uVar108;
  ulong uVar109;
  long lVar110;
  ulong uVar111;
  
  uVar7 = *(ulong *)(param_1 + 8);
  uVar111 = (ulong)*(byte *)(param_1 + 0x13) + 7 >> 3;
  uVar108 = uVar7 - uVar111;
  if (uVar7 < uVar111 || uVar108 == 0) {
    return;
  }
  pcVar103 = (char *)(param_2 + uVar111);
  lVar110 = -uVar111;
  if ((uVar108 < 8) || ((pcVar103 < (char *)(param_2 + uVar108) && (param_2 < param_2 + uVar7)))) {
    uVar109 = uVar111;
    goto LAB_003aa27f;
  }
  if (uVar108 < 0x20) {
    uVar105 = 0;
  }
  else {
    uVar105 = uVar108 & 0xffffffffffffffe0;
    uVar109 = (uVar105 - 0x20 >> 5) + 1;
    if (uVar105 - 0x20 == 0) {
      lVar102 = 0;
LAB_003aa3b9:
      pcVar3 = pcVar103 + lVar102;
      cVar8 = pcVar3[1];
      cVar9 = pcVar3[2];
      cVar10 = pcVar3[3];
      cVar11 = pcVar3[4];
      cVar12 = pcVar3[5];
      cVar13 = pcVar3[6];
      cVar14 = pcVar3[7];
      cVar15 = pcVar3[8];
      cVar16 = pcVar3[9];
      cVar17 = pcVar3[10];
      cVar18 = pcVar3[0xb];
      cVar19 = pcVar3[0xc];
      cVar20 = pcVar3[0xd];
      cVar21 = pcVar3[0xe];
      cVar22 = pcVar3[0xf];
      pcVar2 = pcVar103 + lVar102 + 0x10;
      cVar23 = *pcVar2;
      cVar24 = pcVar2[1];
      cVar25 = pcVar2[2];
      cVar26 = pcVar2[3];
      cVar27 = pcVar2[4];
      cVar28 = pcVar2[5];
      cVar29 = pcVar2[6];
      cVar30 = pcVar2[7];
      cVar31 = pcVar2[8];
      cVar32 = pcVar2[9];
      cVar33 = pcVar2[10];
      cVar34 = pcVar2[0xb];
      cVar35 = pcVar2[0xc];
      cVar36 = pcVar2[0xd];
      cVar37 = pcVar2[0xe];
      cVar38 = pcVar2[0xf];
      pcVar2 = pcVar103 + lVar110 + lVar102;
      cVar39 = pcVar2[1];
      cVar40 = pcVar2[2];
      cVar41 = pcVar2[3];
      cVar42 = pcVar2[4];
      cVar43 = pcVar2[5];
      cVar44 = pcVar2[6];
      cVar45 = pcVar2[7];
      cVar46 = pcVar2[8];
      cVar47 = pcVar2[9];
      cVar48 = pcVar2[10];
      cVar49 = pcVar2[0xb];
      cVar50 = pcVar2[0xc];
      cVar51 = pcVar2[0xd];
      cVar52 = pcVar2[0xe];
      cVar53 = pcVar2[0xf];
      pcVar4 = pcVar103 + lVar110 + 0x10 + lVar102;
      cVar54 = *pcVar4;
      cVar55 = pcVar4[1];
      cVar56 = pcVar4[2];
      cVar57 = pcVar4[3];
      cVar58 = pcVar4[4];
      cVar59 = pcVar4[5];
      cVar60 = pcVar4[6];
      cVar61 = pcVar4[7];
      cVar62 = pcVar4[8];
      cVar63 = pcVar4[9];
      cVar64 = pcVar4[10];
      cVar65 = pcVar4[0xb];
      cVar66 = pcVar4[0xc];
      cVar67 = pcVar4[0xd];
      cVar68 = pcVar4[0xe];
      cVar69 = pcVar4[0xf];
      pcVar4 = pcVar103 + lVar102;
      *pcVar4 = *pcVar2 + *pcVar3;
      pcVar4[1] = cVar39 + cVar8;
      pcVar4[2] = cVar40 + cVar9;
      pcVar4[3] = cVar41 + cVar10;
      pcVar4[4] = cVar42 + cVar11;
      pcVar4[5] = cVar43 + cVar12;
      pcVar4[6] = cVar44 + cVar13;
      pcVar4[7] = cVar45 + cVar14;
      pcVar4[8] = cVar46 + cVar15;
      pcVar4[9] = cVar47 + cVar16;
      pcVar4[10] = cVar48 + cVar17;
      pcVar4[0xb] = cVar49 + cVar18;
      pcVar4[0xc] = cVar50 + cVar19;
      pcVar4[0xd] = cVar51 + cVar20;
      pcVar4[0xe] = cVar52 + cVar21;
      pcVar4[0xf] = cVar53 + cVar22;
      pcVar3 = pcVar103 + lVar102 + 0x10;
      *pcVar3 = cVar54 + cVar23;
      pcVar3[1] = cVar55 + cVar24;
      pcVar3[2] = cVar56 + cVar25;
      pcVar3[3] = cVar57 + cVar26;
      pcVar3[4] = cVar58 + cVar27;
      pcVar3[5] = cVar59 + cVar28;
      pcVar3[6] = cVar60 + cVar29;
      pcVar3[7] = cVar61 + cVar30;
      pcVar3[8] = cVar62 + cVar31;
      pcVar3[9] = cVar63 + cVar32;
      pcVar3[10] = cVar64 + cVar33;
      pcVar3[0xb] = cVar65 + cVar34;
      pcVar3[0xc] = cVar66 + cVar35;
      pcVar3[0xd] = cVar67 + cVar36;
      pcVar3[0xe] = cVar68 + cVar37;
      pcVar3[0xf] = cVar69 + cVar38;
    }
    else {
      uVar106 = uVar109 & 0xfffffffffffffffe;
      lVar1 = param_2 + uVar111;
      lVar102 = 0;
      do {
        pcVar2 = (char *)(param_2 + lVar102);
        cVar8 = pcVar2[1];
        cVar9 = pcVar2[2];
        cVar10 = pcVar2[3];
        cVar11 = pcVar2[4];
        cVar12 = pcVar2[5];
        cVar13 = pcVar2[6];
        cVar14 = pcVar2[7];
        cVar15 = pcVar2[8];
        cVar16 = pcVar2[9];
        cVar17 = pcVar2[10];
        cVar18 = pcVar2[0xb];
        cVar19 = pcVar2[0xc];
        cVar20 = pcVar2[0xd];
        cVar21 = pcVar2[0xe];
        cVar22 = pcVar2[0xf];
        pcVar3 = (char *)(param_2 + 0x10 + lVar102);
        cVar23 = *pcVar3;
        cVar24 = pcVar3[1];
        cVar25 = pcVar3[2];
        cVar26 = pcVar3[3];
        cVar27 = pcVar3[4];
        cVar28 = pcVar3[5];
        cVar29 = pcVar3[6];
        cVar30 = pcVar3[7];
        cVar31 = pcVar3[8];
        cVar32 = pcVar3[9];
        cVar33 = pcVar3[10];
        cVar34 = pcVar3[0xb];
        cVar35 = pcVar3[0xc];
        cVar36 = pcVar3[0xd];
        cVar37 = pcVar3[0xe];
        cVar38 = pcVar3[0xf];
        pcVar4 = (char *)(lVar1 + lVar102);
        cVar39 = pcVar4[1];
        cVar40 = pcVar4[2];
        cVar41 = pcVar4[3];
        cVar42 = pcVar4[4];
        cVar43 = pcVar4[5];
        cVar44 = pcVar4[6];
        cVar45 = pcVar4[7];
        cVar46 = pcVar4[8];
        cVar47 = pcVar4[9];
        cVar48 = pcVar4[10];
        cVar49 = pcVar4[0xb];
        cVar50 = pcVar4[0xc];
        cVar51 = pcVar4[0xd];
        cVar52 = pcVar4[0xe];
        cVar53 = pcVar4[0xf];
        pcVar3 = (char *)(lVar1 + 0x10 + lVar102);
        cVar54 = *pcVar3;
        cVar55 = pcVar3[1];
        cVar56 = pcVar3[2];
        cVar57 = pcVar3[3];
        cVar58 = pcVar3[4];
        cVar59 = pcVar3[5];
        cVar60 = pcVar3[6];
        cVar61 = pcVar3[7];
        cVar62 = pcVar3[8];
        cVar63 = pcVar3[9];
        cVar64 = pcVar3[10];
        cVar65 = pcVar3[0xb];
        cVar66 = pcVar3[0xc];
        cVar67 = pcVar3[0xd];
        cVar68 = pcVar3[0xe];
        cVar69 = pcVar3[0xf];
        pcVar3 = (char *)(lVar1 + 0x20 + lVar102);
        cVar70 = *pcVar3;
        cVar71 = pcVar3[1];
        cVar72 = pcVar3[2];
        cVar73 = pcVar3[3];
        cVar74 = pcVar3[4];
        cVar75 = pcVar3[5];
        cVar76 = pcVar3[6];
        cVar77 = pcVar3[7];
        cVar78 = pcVar3[8];
        cVar79 = pcVar3[9];
        cVar80 = pcVar3[10];
        cVar81 = pcVar3[0xb];
        cVar82 = pcVar3[0xc];
        cVar83 = pcVar3[0xd];
        cVar84 = pcVar3[0xe];
        cVar85 = pcVar3[0xf];
        pcVar3 = (char *)(lVar1 + 0x30 + lVar102);
        cVar86 = *pcVar3;
        cVar87 = pcVar3[1];
        cVar88 = pcVar3[2];
        cVar89 = pcVar3[3];
        cVar90 = pcVar3[4];
        cVar91 = pcVar3[5];
        cVar92 = pcVar3[6];
        cVar93 = pcVar3[7];
        cVar94 = pcVar3[8];
        cVar95 = pcVar3[9];
        cVar96 = pcVar3[10];
        cVar97 = pcVar3[0xb];
        cVar98 = pcVar3[0xc];
        cVar99 = pcVar3[0xd];
        cVar100 = pcVar3[0xe];
        cVar101 = pcVar3[0xf];
        pcVar3 = (char *)(lVar1 + lVar102);
        *pcVar3 = *pcVar4 + *pcVar2;
        pcVar3[1] = cVar39 + cVar8;
        pcVar3[2] = cVar40 + cVar9;
        pcVar3[3] = cVar41 + cVar10;
        pcVar3[4] = cVar42 + cVar11;
        pcVar3[5] = cVar43 + cVar12;
        pcVar3[6] = cVar44 + cVar13;
        pcVar3[7] = cVar45 + cVar14;
        pcVar3[8] = cVar46 + cVar15;
        pcVar3[9] = cVar47 + cVar16;
        pcVar3[10] = cVar48 + cVar17;
        pcVar3[0xb] = cVar49 + cVar18;
        pcVar3[0xc] = cVar50 + cVar19;
        pcVar3[0xd] = cVar51 + cVar20;
        pcVar3[0xe] = cVar52 + cVar21;
        pcVar3[0xf] = cVar53 + cVar22;
        pcVar3 = (char *)(lVar1 + 0x10 + lVar102);
        *pcVar3 = cVar54 + cVar23;
        pcVar3[1] = cVar55 + cVar24;
        pcVar3[2] = cVar56 + cVar25;
        pcVar3[3] = cVar57 + cVar26;
        pcVar3[4] = cVar58 + cVar27;
        pcVar3[5] = cVar59 + cVar28;
        pcVar3[6] = cVar60 + cVar29;
        pcVar3[7] = cVar61 + cVar30;
        pcVar3[8] = cVar62 + cVar31;
        pcVar3[9] = cVar63 + cVar32;
        pcVar3[10] = cVar64 + cVar33;
        pcVar3[0xb] = cVar65 + cVar34;
        pcVar3[0xc] = cVar66 + cVar35;
        pcVar3[0xd] = cVar67 + cVar36;
        pcVar3[0xe] = cVar68 + cVar37;
        pcVar3[0xf] = cVar69 + cVar38;
        pcVar2 = (char *)(param_2 + 0x20 + lVar102);
        cVar8 = pcVar2[1];
        cVar9 = pcVar2[2];
        cVar10 = pcVar2[3];
        cVar11 = pcVar2[4];
        cVar12 = pcVar2[5];
        cVar13 = pcVar2[6];
        cVar14 = pcVar2[7];
        cVar15 = pcVar2[8];
        cVar16 = pcVar2[9];
        cVar17 = pcVar2[10];
        cVar18 = pcVar2[0xb];
        cVar19 = pcVar2[0xc];
        cVar20 = pcVar2[0xd];
        cVar21 = pcVar2[0xe];
        cVar22 = pcVar2[0xf];
        pcVar3 = (char *)(param_2 + 0x30 + lVar102);
        cVar23 = *pcVar3;
        cVar24 = pcVar3[1];
        cVar25 = pcVar3[2];
        cVar26 = pcVar3[3];
        cVar27 = pcVar3[4];
        cVar28 = pcVar3[5];
        cVar29 = pcVar3[6];
        cVar30 = pcVar3[7];
        cVar31 = pcVar3[8];
        cVar32 = pcVar3[9];
        cVar33 = pcVar3[10];
        cVar34 = pcVar3[0xb];
        cVar35 = pcVar3[0xc];
        cVar36 = pcVar3[0xd];
        cVar37 = pcVar3[0xe];
        cVar38 = pcVar3[0xf];
        pcVar3 = (char *)(lVar1 + 0x20 + lVar102);
        *pcVar3 = *pcVar2 + cVar70;
        pcVar3[1] = cVar8 + cVar71;
        pcVar3[2] = cVar9 + cVar72;
        pcVar3[3] = cVar10 + cVar73;
        pcVar3[4] = cVar11 + cVar74;
        pcVar3[5] = cVar12 + cVar75;
        pcVar3[6] = cVar13 + cVar76;
        pcVar3[7] = cVar14 + cVar77;
        pcVar3[8] = cVar15 + cVar78;
        pcVar3[9] = cVar16 + cVar79;
        pcVar3[10] = cVar17 + cVar80;
        pcVar3[0xb] = cVar18 + cVar81;
        pcVar3[0xc] = cVar19 + cVar82;
        pcVar3[0xd] = cVar20 + cVar83;
        pcVar3[0xe] = cVar21 + cVar84;
        pcVar3[0xf] = cVar22 + cVar85;
        pcVar3 = (char *)(lVar1 + 0x30 + lVar102);
        *pcVar3 = cVar23 + cVar86;
        pcVar3[1] = cVar24 + cVar87;
        pcVar3[2] = cVar25 + cVar88;
        pcVar3[3] = cVar26 + cVar89;
        pcVar3[4] = cVar27 + cVar90;
        pcVar3[5] = cVar28 + cVar91;
        pcVar3[6] = cVar29 + cVar92;
        pcVar3[7] = cVar30 + cVar93;
        pcVar3[8] = cVar31 + cVar94;
        pcVar3[9] = cVar32 + cVar95;
        pcVar3[10] = cVar33 + cVar96;
        pcVar3[0xb] = cVar34 + cVar97;
        pcVar3[0xc] = cVar35 + cVar98;
        pcVar3[0xd] = cVar36 + cVar99;
        pcVar3[0xe] = cVar37 + cVar100;
        pcVar3[0xf] = cVar38 + cVar101;
        lVar102 = lVar102 + 0x40;
        uVar106 = uVar106 - 2;
      } while (uVar106 != 0);
      if ((uVar109 & 1) != 0) goto LAB_003aa3b9;
    }
    if (uVar108 == uVar105) {
      return;
    }
    if ((uVar108 & 0x18) == 0) {
      uVar109 = uVar111 + uVar105;
      pcVar103 = pcVar103 + uVar105;
      goto LAB_003aa27f;
    }
  }
  uVar109 = uVar108 & 0xfffffffffffffff8;
  pcVar103 = pcVar103 + uVar109;
  puVar107 = (undefined8 *)(param_2 + uVar105);
  lVar102 = uVar105 - uVar109;
  do {
    uVar5 = *(undefined8 *)((long)puVar107 + uVar111);
    uVar6 = *puVar107;
    *(ulong *)((long)puVar107 + uVar111) =
         CONCAT17((char)((ulong)uVar6 >> 0x38) + (char)((ulong)uVar5 >> 0x38),
                  CONCAT16((char)((ulong)uVar6 >> 0x30) + (char)((ulong)uVar5 >> 0x30),
                           CONCAT15((char)((ulong)uVar6 >> 0x28) + (char)((ulong)uVar5 >> 0x28),
                                    CONCAT14((char)((ulong)uVar6 >> 0x20) +
                                             (char)((ulong)uVar5 >> 0x20),
                                             CONCAT13((char)((ulong)uVar6 >> 0x18) +
                                                      (char)((ulong)uVar5 >> 0x18),
                                                      CONCAT12((char)((ulong)uVar6 >> 0x10) +
                                                               (char)((ulong)uVar5 >> 0x10),
                                                               CONCAT11((char)((ulong)uVar6 >> 8) +
                                                                        (char)((ulong)uVar5 >> 8),
                                                                        (char)uVar6 + (char)uVar5)))
                                            ))));
    puVar107 = puVar107 + 1;
    lVar102 = lVar102 + 8;
  } while (lVar102 != 0);
  if (uVar108 == uVar109) {
    return;
  }
  uVar109 = uVar109 + uVar111;
LAB_003aa27f:
  uVar104 = (int)uVar7 - (int)uVar109;
  uVar108 = ~uVar109;
  uVar105 = (ulong)uVar104 & 3;
  if ((uVar104 & 3) != 0) {
    uVar106 = uVar105;
    do {
      *pcVar103 = *pcVar103 + pcVar103[lVar110];
      pcVar103 = pcVar103 + 1;
      uVar106 = uVar106 - 1;
    } while (uVar106 != 0);
    uVar109 = uVar109 + uVar105;
  }
  if (2 < uVar108 + uVar7) {
    lVar110 = 0;
    do {
      pcVar103[lVar110] = pcVar103[lVar110] + pcVar103[lVar110 - uVar111];
      pcVar103[lVar110 + 1] = pcVar103[lVar110 + 1] + pcVar103[lVar110 + (1 - uVar111)];
      pcVar103[lVar110 + 2] = pcVar103[lVar110 + 2] + pcVar103[lVar110 + (2 - uVar111)];
      pcVar103[lVar110 + 3] = pcVar103[lVar110 + 3] + pcVar103[lVar110 + (3 - uVar111)];
      lVar110 = lVar110 + 4;
    } while (uVar7 - uVar109 != lVar110);
  }
  return;
}


