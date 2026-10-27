// Function : makeHexString
// Namespace: Steinberg:Buffer
// Entry    : 001771d0
// Prototype: bool makeHexString(Buffer * this, long * param_1)
// Body     : 001771d0 - 001773d2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Steinberg::Buffer::makeHexString(Steinberg::String&) */

bool __thiscall Steinberg::Buffer::makeHexString(Buffer *this,long *param_1)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  undefined1 auVar17 [16];
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
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  void *pvVar50;
  ulong uVar51;
  char *pcVar52;
  uint uVar53;
  char cVar54;
  ulong uVar55;
  byte bVar56;
  long lVar57;
  ulong uVar58;
  char cVar59;
  ulong uVar60;
  ulong uVar61;
  int iVar62;
  byte bVar63;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  byte bVar81;
  undefined1 auVar66 [16];
  undefined1 auVar82 [15];
  undefined1 auVar83 [15];
  undefined1 auVar91 [16];
  undefined1 auVar90 [16];
  undefined1 auVar89 [16];
  undefined1 auVar88 [16];
  undefined1 auVar87 [16];
  undefined1 auVar86 [16];
  undefined1 auVar85 [16];
  undefined1 auVar84 [16];
  undefined1 auVar92 [16];
  
  uVar3 = *(ulong *)(this + 8);
  if (uVar3 == 0) {
    return false;
  }
  iVar62 = *(int *)(this + 0x10);
  if (iVar62 == 0) {
    return false;
  }
  pvVar50 = malloc((ulong)(iVar62 * 2 + 1));
  bVar49 = UNK_005d99df;
  bVar48 = UNK_005d99de;
  bVar47 = UNK_005d99dd;
  bVar46 = UNK_005d99dc;
  bVar45 = UNK_005d99db;
  bVar44 = UNK_005d99da;
  bVar43 = UNK_005d99d9;
  cVar42 = s__005d99d0[8];
  cVar41 = s__005d99d0[7];
  cVar40 = s__005d99d0[6];
  cVar39 = s__005d99d0[5];
  cVar38 = s__005d99d0[4];
  cVar37 = s__005d99d0[3];
  cVar36 = s__005d99d0[2];
  cVar35 = s__005d99d0[1];
  cVar34 = s__005d99d0[0];
  cVar33 = UNK_005d99cf;
  cVar32 = UNK_005d99ce;
  cVar31 = UNK_005d99cd;
  cVar30 = UNK_005d99cc;
  cVar29 = UNK_005d99cb;
  cVar28 = UNK_005d99ca;
  cVar27 = UNK_005d99c9;
  cVar26 = s_77777777_005d99c0[8];
  cVar25 = s_77777777_005d99c0[7];
  cVar24 = s_77777777_005d99c0[6];
  cVar23 = s_77777777_005d99c0[5];
  cVar22 = s_77777777_005d99c0[4];
  cVar21 = s_77777777_005d99c0[3];
  cVar20 = s_77777777_005d99c0[2];
  cVar19 = s_77777777_005d99c0[1];
  cVar18 = s_77777777_005d99c0[0];
  auVar17 = _s_00000000_005d99b0;
  cVar16 = UNK_005d99ae;
  cVar15 = UNK_005d99ad;
  cVar14 = UNK_005d99ac;
  cVar13 = UNK_005d99ab;
  cVar12 = UNK_005d99aa;
  cVar59 = UNK_005d99a9;
  cVar54 = UNK_005d99a8;
  bVar11 = UNK_005d99a7;
  bVar10 = UNK_005d99a6;
  bVar9 = UNK_005d99a5;
  bVar8 = UNK_005d99a4;
  bVar7 = UNK_005d99a3;
  bVar6 = UNK_005d99a2;
  bVar56 = UNK_005d99a1;
  bVar2 = DAT_005d99a0;
  auVar5 = _DAT_005d9990;
  auVar4 = _DAT_005d9980;
  if (pvVar50 == (void *)0x0) goto LAB_001772f1;
  uVar55 = (ulong)(iVar62 - 1U);
  if ((iVar62 - 1U < 7) ||
     ((pvVar50 < (void *)(uVar55 + uVar3 + 1) && (uVar3 < uVar55 * 2 + 2 + (long)pvVar50)))) {
    uVar51 = 0;
    uVar61 = uVar3;
LAB_00177243:
    lVar57 = 0;
    do {
      bVar2 = *(byte *)(uVar61 + lVar57);
      bVar56 = bVar2 & 0xf;
      cVar54 = (bVar2 >> 4) + 0x37;
      if (bVar2 < 0xa0) {
        cVar54 = (bVar2 >> 4) + 0x30;
      }
      cVar59 = bVar56 + 0x37;
      if (bVar56 < 10) {
        cVar59 = bVar56 + 0x30;
      }
      *(char *)((long)pvVar50 + uVar51) = cVar54;
      *(char *)((long)pvVar50 + uVar51 + 1) = cVar59;
      uVar51 = uVar51 + 2;
      lVar57 = lVar57 + 1;
    } while (iVar62 != (int)lVar57);
  }
  else {
    uVar58 = uVar55 + 1 & 0xfffffffffffffff8;
    uVar51 = uVar58 * 2;
    iVar62 = iVar62 - (int)uVar58;
    uVar61 = uVar3 + uVar58;
    uVar60 = 0;
    do {
      uVar1 = *(ulong *)(uVar3 + uVar60);
      auVar64._8_8_ = 0;
      auVar64._0_8_ = uVar1;
      bVar67 = (byte)uVar1;
      bVar68 = (byte)(uVar1 >> 8);
      bVar69 = (byte)(uVar1 >> 0x10);
      bVar70 = (byte)(uVar1 >> 0x18);
      bVar71 = (byte)(uVar1 >> 0x20);
      bVar72 = (byte)(uVar1 >> 0x28);
      bVar73 = (byte)(uVar1 >> 0x30);
      bVar63 = (byte)(uVar1 >> 0x38);
      auVar82[0] = -((byte)((bVar67 < bVar2) * bVar2 | (bVar67 >= bVar2) * bVar67) == bVar67);
      auVar82[1] = -((byte)((bVar68 < bVar56) * bVar56 | (bVar68 >= bVar56) * bVar68) == bVar68);
      auVar82[2] = -((byte)((bVar69 < bVar6) * bVar6 | (bVar69 >= bVar6) * bVar69) == bVar69);
      auVar82[3] = -((byte)((bVar70 < bVar7) * bVar7 | (bVar70 >= bVar7) * bVar70) == bVar70);
      auVar82[4] = -((byte)((bVar71 < bVar8) * bVar8 | (bVar71 >= bVar8) * bVar71) == bVar71);
      auVar82[5] = -((byte)((bVar72 < bVar9) * bVar9 | (bVar72 >= bVar9) * bVar72) == bVar72);
      auVar82[6] = -((byte)((bVar73 < bVar10) * bVar10 | (bVar73 >= bVar10) * bVar73) == bVar73);
      auVar82[7] = -((byte)((bVar63 < bVar11) * bVar11 | (bVar63 >= bVar11) * bVar63) == bVar63);
      auVar82[8] = -((char)((cVar54 != '\0') * cVar54) == '\0');
      auVar82[9] = -((char)((cVar59 != '\0') * cVar59) == '\0');
      auVar82[10] = -((char)((cVar12 != '\0') * cVar12) == '\0');
      auVar82[0xb] = -((char)((cVar13 != '\0') * cVar13) == '\0');
      auVar82[0xc] = -((char)((cVar14 != '\0') * cVar14) == '\0');
      auVar82[0xd] = -((char)((cVar15 != '\0') * cVar15) == '\0');
      auVar82[0xe] = -((char)((cVar16 != '\0') * cVar16) == '\0');
      auVar65._0_2_ = (ushort)uVar1 >> 4;
      auVar65._2_2_ = (ushort)(uVar1 >> 0x10) >> 4;
      auVar65._4_2_ = (ushort)(uVar1 >> 0x20) >> 4;
      auVar65._6_2_ = (ushort)(uVar1 >> 0x34);
      auVar65._8_8_ = 0;
      auVar65 = auVar65 & auVar4;
      auVar64 = auVar64 & auVar5;
      auVar83[0] = auVar65[0] + cVar18;
      auVar83[1] = auVar65[1] + cVar19;
      auVar83[2] = auVar65[2] + cVar20;
      auVar83[3] = auVar65[3] + cVar21;
      auVar83[4] = auVar65[4] + cVar22;
      auVar83[5] = auVar65[5] + cVar23;
      auVar83[6] = auVar65[6] + cVar24;
      auVar83[7] = auVar65[7] + cVar25;
      auVar83[8] = auVar65[8] + cVar26;
      auVar83[9] = auVar65[9] + cVar27;
      auVar83[10] = auVar65[10] + cVar28;
      auVar83[0xb] = auVar65[0xb] + cVar29;
      auVar83[0xc] = auVar65[0xc] + cVar30;
      auVar83[0xd] = auVar65[0xd] + cVar31;
      auVar83[0xe] = auVar65[0xe] + cVar32;
      auVar83 = ~auVar82 & (auVar65._0_15_ | auVar17._0_15_) | auVar83 & auVar82;
      bVar63 = auVar64[0];
      bVar67 = auVar64[1];
      bVar68 = auVar64[2];
      bVar69 = auVar64[3];
      bVar70 = auVar64[4];
      bVar71 = auVar64[5];
      bVar72 = auVar64[6];
      bVar73 = auVar64[7];
      bVar74 = auVar64[8];
      bVar75 = auVar64[9];
      bVar76 = auVar64[10];
      bVar77 = auVar64[0xb];
      bVar78 = auVar64[0xc];
      bVar79 = auVar64[0xd];
      bVar80 = auVar64[0xe];
      bVar81 = auVar64[0xf];
      auVar66[0] = -((byte)((bVar63 < (byte)cVar34) * cVar34 | (bVar63 >= (byte)cVar34) * bVar63) ==
                    bVar63);
      auVar66[1] = -((byte)((bVar67 < (byte)cVar35) * cVar35 | (bVar67 >= (byte)cVar35) * bVar67) ==
                    bVar67);
      auVar66[2] = -((byte)((bVar68 < (byte)cVar36) * cVar36 | (bVar68 >= (byte)cVar36) * bVar68) ==
                    bVar68);
      auVar66[3] = -((byte)((bVar69 < (byte)cVar37) * cVar37 | (bVar69 >= (byte)cVar37) * bVar69) ==
                    bVar69);
      auVar66[4] = -((byte)((bVar70 < (byte)cVar38) * cVar38 | (bVar70 >= (byte)cVar38) * bVar70) ==
                    bVar70);
      auVar66[5] = -((byte)((bVar71 < (byte)cVar39) * cVar39 | (bVar71 >= (byte)cVar39) * bVar71) ==
                    bVar71);
      auVar66[6] = -((byte)((bVar72 < (byte)cVar40) * cVar40 | (bVar72 >= (byte)cVar40) * bVar72) ==
                    bVar72);
      auVar66[7] = -((byte)((bVar73 < (byte)cVar41) * cVar41 | (bVar73 >= (byte)cVar41) * bVar73) ==
                    bVar73);
      auVar66[8] = -((byte)((bVar74 < (byte)cVar42) * cVar42 | (bVar74 >= (byte)cVar42) * bVar74) ==
                    bVar74);
      auVar66[9] = -((byte)((bVar75 < bVar43) * bVar43 | (bVar75 >= bVar43) * bVar75) == bVar75);
      auVar66[10] = -((byte)((bVar76 < bVar44) * bVar44 | (bVar76 >= bVar44) * bVar76) == bVar76);
      auVar66[0xb] = -((byte)((bVar77 < bVar45) * bVar45 | (bVar77 >= bVar45) * bVar77) == bVar77);
      auVar66[0xc] = -((byte)((bVar78 < bVar46) * bVar46 | (bVar78 >= bVar46) * bVar78) == bVar78);
      auVar66[0xd] = -((byte)((bVar79 < bVar47) * bVar47 | (bVar79 >= bVar47) * bVar79) == bVar79);
      auVar66[0xe] = -((byte)((bVar80 < bVar48) * bVar48 | (bVar80 >= bVar48) * bVar80) == bVar80);
      auVar66[0xf] = -((byte)((bVar81 < bVar49) * bVar49 | (bVar81 >= bVar49) * bVar81) == bVar81);
      auVar92[0] = bVar63 + cVar18;
      auVar92[1] = bVar67 + cVar19;
      auVar92[2] = bVar68 + cVar20;
      auVar92[3] = bVar69 + cVar21;
      auVar92[4] = bVar70 + cVar22;
      auVar92[5] = bVar71 + cVar23;
      auVar92[6] = bVar72 + cVar24;
      auVar92[7] = bVar73 + cVar25;
      auVar92[8] = bVar74 + cVar26;
      auVar92[9] = bVar75 + cVar27;
      auVar92[10] = bVar76 + cVar28;
      auVar92[0xb] = bVar77 + cVar29;
      auVar92[0xc] = bVar78 + cVar30;
      auVar92[0xd] = bVar79 + cVar31;
      auVar92[0xe] = bVar80 + cVar32;
      auVar92[0xf] = bVar81 + cVar33;
      auVar64 = ~auVar66 & (auVar64 | auVar17) | auVar92 & auVar66;
      auVar91._0_14_ = auVar83._0_14_;
      auVar91[0xe] = auVar83[7];
      auVar91[0xf] = auVar64[7];
      auVar90._14_2_ = auVar91._14_2_;
      auVar90._0_13_ = auVar83._0_13_;
      auVar90[0xd] = auVar64[6];
      auVar89._13_3_ = auVar90._13_3_;
      auVar89._0_12_ = auVar83._0_12_;
      auVar89[0xc] = auVar83[6];
      auVar88._12_4_ = auVar89._12_4_;
      auVar88._0_11_ = auVar83._0_11_;
      auVar88[0xb] = auVar64[5];
      auVar87._11_5_ = auVar88._11_5_;
      auVar87._0_10_ = auVar83._0_10_;
      auVar87[10] = auVar83[5];
      auVar86._10_6_ = auVar87._10_6_;
      auVar86._0_9_ = auVar83._0_9_;
      auVar86[9] = auVar64[4];
      auVar85._9_7_ = auVar86._9_7_;
      auVar85._0_8_ = auVar83._0_8_;
      auVar85[8] = auVar83[4];
      auVar84._8_8_ = auVar85._8_8_;
      auVar84[7] = auVar64[3];
      auVar84[6] = auVar83[3];
      auVar84[5] = auVar64[2];
      auVar84[4] = auVar83[2];
      auVar84[3] = auVar64[1];
      auVar84[2] = auVar83[1];
      auVar84[0] = auVar83[0];
      auVar84[1] = auVar64[0];
      *(undefined1 (*) [16])((long)pvVar50 + uVar60 * 2) = auVar84;
      uVar60 = uVar60 + 8;
    } while (uVar58 != uVar60);
    if (uVar55 + 1 != uVar58) goto LAB_00177243;
  }
  *(undefined1 *)((long)pvVar50 + (uVar51 & 0xffffffff)) = 0;
  if ((void *)param_1[1] != (void *)0x0) {
    free((void *)param_1[1]);
  }
  param_1[1] = (long)pvVar50;
  *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0x80000000;
  pcVar52 = (char *)(**(code **)(*param_1 + 0x18))(param_1);
  uVar53 = 0xffffffff;
  do {
    uVar53 = uVar53 + 1;
    cVar54 = *pcVar52;
    pcVar52 = pcVar52 + 1;
  } while (cVar54 != '\0');
  *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xc0000000 | uVar53 & 0x3fffffff;
LAB_001772f1:
  return pvVar50 != (void *)0x0;
}


