// Function : readChildElements
// Namespace: juce:XmlDocument
// Entry    : 0048f530
// Prototype: undefined readChildElements(XmlDocument * this, long param_1)
// Body     : 0048f530 - 004915ab


/* WARNING: Type propagation algorithm not settling */
/* juce::XmlDocument::readChildElements(juce::XmlElement&) */

void __thiscall juce::XmlDocument::readChildElements(XmlDocument *this,long param_1)

{
  XmlDocument *pXVar1;
  byte bVar2;
  XmlDocument XVar3;
  undefined8 uVar4;
  char *__src;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  XmlElement *pXVar9;
  void *pvVar10;
  long *plVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  byte bVar14;
  sbyte sVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 extraout_RDX;
  ulong uVar20;
  long lVar21;
  bool bVar22;
  byte *pbVar23;
  ulong uVar24;
  uint uVar25;
  wint_t __wc;
  int *piVar26;
  byte *pbVar27;
  byte *pbVar28;
  size_t __n;
  long lVar29;
  undefined **ppuVar30;
  bool bVar31;
  byte bVar32;
  XmlElement *local_98;
  byte *local_90;
  undefined **local_88;
  long local_80;
  long *local_78;
  void *local_70;
  long local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  XmlDocument *local_38;
  
  pXVar1 = this + 8;
  local_98 = (XmlElement *)(param_1 + 8);
  local_38 = this;
LAB_0048f590:
  do {
    uVar4 = *(undefined8 *)(this + 8);
    skipNextWhiteSpace(this);
    if (this[0x10] != (XmlDocument)0x0) {
      piVar8 = operator_new__(0x27);
      LOCK();
      *piVar8 = 0;
      UNLOCK();
      piVar8[2] = 0x10;
      piVar8[3] = 0;
      piVar8[4] = 0x616d6e75;
      piVar8[5] = 0x65686374;
      piVar8[6] = 0x61742064;
      *(undefined2 *)(piVar8 + 7) = 0x7367;
      *(undefined1 *)((long)piVar8 + 0x1e) = 0;
      LOCK();
      *piVar8 = *piVar8 + 1;
      UNLOCK();
      LOCK();
      lVar21 = *(long *)(this + 0x18);
      *(int **)(this + 0x18) = piVar8 + 4;
      UNLOCK();
      piVar26 = (int *)(lVar21 + -0x10);
      if (piVar26 != &emptyString) {
        LOCK();
        iVar17 = *piVar26;
        *piVar26 = *piVar26 + -1;
        UNLOCK();
        if (iVar17 == 0) {
          operator_delete__(piVar26);
        }
      }
      this[0x11] = (XmlDocument)0x1;
      LOCK();
      iVar17 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar17 == 0) {
        operator_delete__(piVar8);
        return;
      }
      return;
    }
    pbVar28 = *(byte **)pXVar1;
    bVar32 = *pbVar28;
    uVar20 = CONCAT71((int7)((ulong)extraout_RDX >> 8),bVar32);
    uVar16 = (uint)bVar32;
    if ((char)bVar32 < '\0') {
      if ((bVar32 & 0x40) == 0) {
        uVar16 = bVar32 & 0x7f;
      }
      else {
        uVar16 = bVar32 & 0x10 ^ 0x1f;
        if ((bVar32 & 0x20) == 0) {
          uVar16 = 0x3f;
        }
        uVar16 = uVar16 & bVar32;
        if (((((pbVar28[1] & 0xffffffc0) == 0x80) &&
             (uVar16 = pbVar28[1] & 0x3f | uVar16 << 6, (bVar32 & 0x20) != 0)) &&
            ((pbVar28[2] & 0xffffffc0) == 0x80)) &&
           ((uVar16 = pbVar28[2] & 0x3f | uVar16 << 6,
            ((byte)((uVar20 & 0xffffffff) >> 5) & 7 & (bVar32 & 0x10) == 0) == 0 &&
            ((pbVar28[3] & 0xffffffc0) == 0x80)))) {
          uVar16 = uVar16 << 6 | pbVar28[3] & 0x3f;
        }
      }
    }
    if (uVar16 != 0x3c) {
      *(undefined8 *)(this + 8) = uVar4;
      MemoryOutputStream::MemoryOutputStream((MemoryOutputStream *)&local_88,0x100);
      bVar32 = (byte)this[0x39] ^ 1;
      do {
        pbVar28 = *(byte **)pXVar1;
LAB_00490170:
        uVar20 = local_50;
        bVar14 = *pbVar28;
        uVar16 = (uint)bVar14;
        if ((char)bVar14 < '\0') {
          if ((bVar14 & 0x40) == 0) {
            uVar16 = bVar14 & 0x7f;
          }
          else {
            uVar16 = bVar14 & 0x10 ^ 0x1f;
            if ((bVar14 & 0x20) == 0) {
              uVar16 = 0x3f;
            }
            uVar16 = uVar16 & bVar14;
            if ((((pbVar28[1] & 0xffffffc0) == 0x80) &&
                (uVar16 = pbVar28[1] & 0x3f | uVar16 << 6, (bVar14 & 0x20) != 0)) &&
               (((pbVar28[2] & 0xffffffc0) == 0x80 &&
                ((uVar16 = pbVar28[2] & 0x3f | uVar16 << 6,
                 (bVar14 >> 5 & (bVar14 & 0x10) == 0) == 0 && ((pbVar28[3] & 0xffffffc0) == 0x80))))
               )) {
              uVar16 = uVar16 << 6 | pbVar28[3] & 0x3f;
            }
          }
        }
        if (uVar16 == 0x3c) {
          pbVar27 = pbVar28 + 1;
          bVar22 = (bVar14 & 0x40) == 0 || -1 < (char)bVar14;
          pbVar23 = pbVar27;
          if (bVar22) {
LAB_00490238:
            bVar2 = *pbVar23;
            uVar16 = (uint)bVar2;
            if (-1 < (char)bVar2) goto joined_r0x00490c4c;
LAB_00490244:
            uVar25 = (uint)bVar2;
            if ((bVar2 & 0x40) == 0) {
              uVar25 = uVar25 & 0x7f;
            }
            else {
              uVar16 = uVar25 & 0x10 ^ 0x1f;
              if ((bVar2 & 0x20) == 0) {
                uVar16 = 0x3f;
              }
              uVar16 = uVar16 & uVar25;
              if (((((pbVar23[1] & 0xc0) != 0x80) ||
                   (uVar16 = pbVar23[1] & 0x3f | uVar16 << 6, (bVar2 & 0x20) == 0)) ||
                  ((pbVar23[2] & 0xc0) != 0x80)) ||
                 ((uVar16 = pbVar23[2] & 0x3f | uVar16 << 6, (bVar2 >> 5 & (bVar2 & 0x10) == 0) != 0
                  || ((pbVar23[3] & 0xffffffc0) != 0x80)))) goto joined_r0x00490c4c;
              uVar25 = uVar16 << 6 | pbVar23[3] & 0x3f;
            }
            if (uVar25 == 0x21) goto LAB_00490839;
LAB_004910df:
            bVar22 = true;
            if ((bVar32 & 1) != 0) {
              plVar19 = &local_60;
              if (local_78 != (long *)0x0) {
                if (local_50 < (ulong)local_78[1]) {
                  *(undefined1 *)(*local_78 + local_50) = 0;
                }
                plVar19 = local_78;
              }
              __src = (char *)*plVar19;
              pbVar28 = &DAT_0061ac58;
              if ((__src != (char *)0x0) && (pbVar28 = &DAT_0061ac58, *__src != '\0')) {
                uVar24 = local_50 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 00491143 to 00491147 has its CatchHandler @ 004915ae */
                puVar7 = operator_new__(uVar24 + 0x17);
                LOCK();
                *puVar7 = 0;
                UNLOCK();
                *(ulong *)(puVar7 + 2) = uVar24;
                pbVar28 = (byte *)(puVar7 + 4);
                memcpy(pbVar28,__src,uVar20);
                *(undefined1 *)((long)puVar7 + uVar20 + 0x10) = 0;
              }
                    /* try { // try from 0049117b to 00491184 has its CatchHandler @ 004915b4 */
              local_90 = pbVar28;
              pXVar9 = XmlElement::createTextElement((long *)&local_90);
              *(XmlElement **)local_98 = pXVar9;
              pbVar28 = local_90 + -0x10;
              if (pbVar28 != (byte *)&emptyString) {
                LOCK();
                iVar17 = *(int *)pbVar28;
                *(int *)pbVar28 = *(int *)pbVar28 + -1;
                UNLOCK();
                if (iVar17 == 0) {
                  operator_delete__(pbVar28);
                }
              }
              bVar22 = true;
              local_98 = pXVar9;
            }
            goto LAB_00491297;
          }
          if ((bVar14 & 0x20) == 0) {
            pbVar23 = pbVar28 + 2;
            goto LAB_00490238;
          }
          pbVar23 = pbVar28 + (4 - (ulong)((bVar14 & 0x10) == 0));
          bVar2 = *pbVar23;
          uVar16 = (uint)bVar2;
          if ((char)bVar2 < '\0') goto LAB_00490244;
joined_r0x00490c4c:
          if (uVar16 != 0x21) goto LAB_004910df;
LAB_00490839:
          pbVar23 = pbVar27;
          if (bVar22) {
LAB_00490849:
            pbVar12 = pbVar23 + 1;
            bVar2 = *pbVar23;
            if (-1 < (char)bVar2) goto LAB_00490890;
LAB_00490855:
            if ((bVar2 & 0x40) == 0) goto LAB_00490890;
            if ((bVar2 & 0x20) == 0) {
              pbVar12 = pbVar23 + 2;
            }
            else {
              pbVar12 = pbVar23 + (4 - (ulong)((bVar2 & 0x10) == 0));
            }
            bVar2 = *pbVar12;
          }
          else {
            if ((bVar14 & 0x20) == 0) {
              pbVar23 = pbVar28 + 2;
              goto LAB_00490849;
            }
            bVar31 = (bVar14 & 0x10) == 0;
            pbVar23 = pbVar28 + (4 - (ulong)bVar31);
            pbVar12 = pbVar28 + (5 - (ulong)bVar31);
            bVar2 = *pbVar23;
            if ((char)bVar2 < '\0') goto LAB_00490855;
LAB_00490890:
            bVar2 = *pbVar12;
          }
          uVar16 = (uint)bVar2;
          if ((char)bVar2 < '\0') {
            uVar16 = (uint)bVar2;
            if ((bVar2 & 0x40) == 0) {
              uVar16 = uVar16 & 0x7f;
            }
            else {
              uVar25 = uVar16 & 0x10 ^ 0x1f;
              if ((bVar2 & 0x20) == 0) {
                uVar25 = 0x3f;
              }
              uVar16 = uVar25 & uVar16;
              if ((((*(byte *)((long)pbVar12 + 1) & 0xc0) == 0x80) &&
                  (uVar16 = *(byte *)((long)pbVar12 + 1) & 0x3f | uVar16 << 6, (bVar2 & 0x20) != 0))
                 && (((*(byte *)((long)pbVar12 + 2) & 0xc0) == 0x80 &&
                     ((uVar16 = *(byte *)((long)pbVar12 + 2) & 0x3f | uVar16 << 6,
                      (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0 &&
                      ((*(byte *)((long)pbVar12 + 3) & 0xffffffc0) == 0x80)))))) {
                uVar16 = uVar16 << 6 | *(byte *)((long)pbVar12 + 3) & 0x3f;
              }
            }
          }
          if (uVar16 != 0x2d) goto LAB_004910df;
          pbVar23 = pbVar27;
          if (bVar22) {
LAB_00490989:
            pbVar12 = pbVar23 + 1;
            bVar14 = *pbVar23;
            if (-1 < (char)bVar14) goto LAB_004909d0;
LAB_00490994:
            if ((bVar14 & 0x40) == 0) goto LAB_004909d0;
            if ((bVar14 & 0x20) == 0) {
              pbVar12 = pbVar23 + 2;
            }
            else {
              pbVar12 = pbVar23 + (4 - (ulong)((bVar14 & 0x10) == 0));
            }
            pbVar23 = pbVar12 + 1;
            bVar14 = *pbVar12;
            if ((char)bVar14 < '\0') goto LAB_004909db;
LAB_00490a10:
            bVar14 = *pbVar23;
          }
          else {
            if ((bVar14 & 0x20) == 0) {
              pbVar23 = pbVar28 + 2;
              goto LAB_00490989;
            }
            bVar22 = (bVar14 & 0x10) == 0;
            pbVar23 = pbVar28 + (4 - (ulong)bVar22);
            pbVar12 = pbVar28 + (5 - (ulong)bVar22);
            bVar14 = *pbVar23;
            if ((char)bVar14 < '\0') goto LAB_00490994;
LAB_004909d0:
            pbVar23 = pbVar12 + 1;
            bVar14 = *pbVar12;
            if (-1 < (char)bVar14) goto LAB_00490a10;
LAB_004909db:
            if ((bVar14 & 0x40) == 0) goto LAB_00490a10;
            if ((bVar14 & 0x20) == 0) {
              pbVar23 = pbVar12 + 2;
            }
            else {
              pbVar23 = pbVar12 + (4 - (ulong)((bVar14 & 0x10) == 0));
            }
            bVar14 = *pbVar23;
          }
          uVar16 = (uint)bVar14;
          if ((char)bVar14 < '\0') {
            uVar16 = (uint)bVar14;
            if ((bVar14 & 0x40) == 0) {
              uVar16 = uVar16 & 0x7f;
            }
            else {
              uVar25 = uVar16 & 0x10 ^ 0x1f;
              if ((bVar14 & 0x20) == 0) {
                uVar25 = 0x3f;
              }
              uVar16 = uVar25 & uVar16;
              if (((((*(byte *)((long)pbVar23 + 1) & 0xc0) == 0x80) &&
                   (uVar16 = *(byte *)((long)pbVar23 + 1) & 0x3f | uVar16 << 6, (bVar14 & 0x20) != 0
                   )) && ((*(byte *)((long)pbVar23 + 2) & 0xc0) == 0x80)) &&
                 ((uVar16 = *(byte *)((long)pbVar23 + 2) & 0x3f | uVar16 << 6,
                  (bVar14 >> 5 & (bVar14 & 0x10) == 0) == 0 &&
                  ((*(byte *)((long)pbVar23 + 3) & 0xffffffc0) == 0x80)))) {
                uVar16 = uVar16 << 6 | *(byte *)((long)pbVar23 + 3) & 0x3f;
              }
            }
          }
          if (uVar16 != 0x2d) goto LAB_004910df;
          *(byte **)pXVar1 = pbVar27;
          bVar14 = *pbVar28;
          if (((char)bVar14 < '\0') && ((bVar14 & 0x40) != 0)) {
            lVar21 = 4 - (ulong)((bVar14 & 0x10) == 0);
            if ((bVar14 & 0x20) == 0) {
              lVar21 = 2;
            }
            pbVar27 = pbVar28 + lVar21;
            *(byte **)pXVar1 = pbVar27;
          }
          pbVar28 = pbVar27 + 1;
          *(byte **)pXVar1 = pbVar28;
          bVar14 = *pbVar27;
          if (((char)bVar14 < '\0') && ((bVar14 & 0x40) != 0)) {
            lVar21 = 4 - (ulong)((bVar14 & 0x10) == 0);
            if ((bVar14 & 0x20) == 0) {
              lVar21 = 2;
            }
            pbVar28 = pbVar27 + lVar21;
            *(byte **)pXVar1 = pbVar28;
          }
          pbVar27 = pbVar28 + 1;
          *(byte **)pXVar1 = pbVar27;
          bVar14 = *pbVar28;
          if (((char)bVar14 < '\0') && ((bVar14 & 0x40) != 0)) {
            lVar21 = 4 - (ulong)((bVar14 & 0x10) == 0);
            if ((bVar14 & 0x20) == 0) {
              lVar21 = 2;
            }
            pbVar27 = pbVar28 + lVar21;
            *(byte **)pXVar1 = pbVar27;
          }
          pbVar23 = pbVar27 + 1;
          *(byte **)pXVar1 = pbVar23;
          bVar14 = *pbVar27;
          if (((char)bVar14 < '\0') && ((bVar14 & 0x40) != 0)) {
            lVar21 = 4 - (ulong)((bVar14 & 0x10) == 0);
            if ((bVar14 & 0x20) == 0) {
              lVar21 = 2;
            }
            pbVar23 = pbVar27 + lVar21;
            *(byte **)pXVar1 = pbVar23;
          }
          iVar17 = CharacterFunctions::indexOf<juce::CharPointer_UTF8,juce::CharPointer_ASCII>
                             (pbVar23,&DAT_005e5ea6);
          if (iVar17 < 0) {
                    /* try { // try from 004911d5 to 004911de has its CatchHandler @ 004915b0 */
            piVar8 = operator_new__(0x2f);
            LOCK();
            *piVar8 = 0;
            UNLOCK();
            piVar8[2] = 0x18;
            uVar4 = s_malformed_headernot_enough_input_005de290._72_8_;
            piVar8[3] = 0;
            *(undefined8 *)(piVar8 + 4) = s_malformed_headernot_enough_input_005de290._64_8_;
            *(undefined8 *)(piVar8 + 6) = uVar4;
            piVar8[8] = 0x746e656d;
            *(undefined1 *)(piVar8 + 9) = 0;
            goto LAB_00491246;
          }
          iVar17 = iVar17 + 4;
          do {
            pbVar28 = pbVar23 + 1;
            *(byte **)pXVar1 = pbVar28;
            bVar14 = *pbVar23;
            if (((char)bVar14 < '\0') && ((bVar14 & 0x40) != 0)) {
              lVar21 = 4 - (ulong)((bVar14 & 0x10) == 0);
              if ((bVar14 & 0x20) == 0) {
                lVar21 = 2;
              }
              pbVar28 = pbVar23 + lVar21;
              *(byte **)pXVar1 = pbVar28;
            }
            iVar17 = iVar17 + -1;
            pbVar23 = pbVar28;
          } while (1 < iVar17);
          goto LAB_00490170;
        }
        if (uVar16 == 0) {
                    /* try { // try from 004911c9 to 004911d2 has its CatchHandler @ 004915b2 */
          piVar8 = operator_new__(0x27);
LAB_00491214:
          LOCK();
          *piVar8 = 0;
          UNLOCK();
          piVar8[2] = 0x10;
          piVar8[3] = 0;
          piVar8[4] = 0x616d6e75;
          piVar8[5] = 0x65686374;
          piVar8[6] = 0x61742064;
          *(undefined2 *)(piVar8 + 7) = 0x7367;
          *(undefined1 *)((long)piVar8 + 0x1e) = 0;
LAB_00491246:
          LOCK();
          *piVar8 = *piVar8 + 1;
          UNLOCK();
          LOCK();
          lVar21 = *(long *)(this + 0x18);
          *(int **)(this + 0x18) = piVar8 + 4;
          UNLOCK();
          piVar26 = (int *)(lVar21 + -0x10);
          if (piVar26 != &emptyString) {
            LOCK();
            iVar17 = *piVar26;
            *piVar26 = *piVar26 + -1;
            UNLOCK();
            if (iVar17 == 0) {
              operator_delete__(piVar26);
            }
          }
          this[0x11] = (XmlDocument)0x1;
          LOCK();
          iVar17 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar17 == 0) {
            operator_delete__(piVar8);
          }
          this[0x10] = (XmlDocument)0x1;
          bVar22 = false;
LAB_00491297:
          local_88 = &PTR__MemoryOutputStream_00713378;
                    /* try { // try from 004912a3 to 004912ac has its CatchHandler @ 004915e0 */
          MemoryOutputStream::trimExternalBlockSize((MemoryOutputStream *)&local_88);
          free(local_70);
          local_88 = &PTR__OutputStream_00713440;
          piVar8 = (int *)(local_80 + -0x10);
          if (piVar8 != &emptyString) {
            LOCK();
            iVar17 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar17 == 0) {
              operator_delete__(piVar8);
            }
          }
          if (!bVar22) {
            s_malformed_headernot_enough_input_005de290[0x40] =
                 s_malformed_headernot_enough_input_005de290[0x40];
            s_malformed_headernot_enough_input_005de290[0x41] =
                 s_malformed_headernot_enough_input_005de290[0x41];
            s_malformed_headernot_enough_input_005de290[0x42] =
                 s_malformed_headernot_enough_input_005de290[0x42];
            s_malformed_headernot_enough_input_005de290[0x43] =
                 s_malformed_headernot_enough_input_005de290[0x43];
            s_malformed_headernot_enough_input_005de290[0x44] =
                 s_malformed_headernot_enough_input_005de290[0x44];
            s_malformed_headernot_enough_input_005de290[0x45] =
                 s_malformed_headernot_enough_input_005de290[0x45];
            s_malformed_headernot_enough_input_005de290[0x46] =
                 s_malformed_headernot_enough_input_005de290[0x46];
            s_malformed_headernot_enough_input_005de290[0x47] =
                 s_malformed_headernot_enough_input_005de290[0x47];
            s_malformed_headernot_enough_input_005de290[0x48] =
                 s_malformed_headernot_enough_input_005de290[0x48];
            s_malformed_headernot_enough_input_005de290[0x49] =
                 s_malformed_headernot_enough_input_005de290[0x49];
            s_malformed_headernot_enough_input_005de290[0x4a] =
                 s_malformed_headernot_enough_input_005de290[0x4a];
            s_malformed_headernot_enough_input_005de290[0x4b] =
                 s_malformed_headernot_enough_input_005de290[0x4b];
            s_malformed_headernot_enough_input_005de290[0x4c] =
                 s_malformed_headernot_enough_input_005de290[0x4c];
            s_malformed_headernot_enough_input_005de290[0x4d] =
                 s_malformed_headernot_enough_input_005de290[0x4d];
            s_malformed_headernot_enough_input_005de290[0x4e] =
                 s_malformed_headernot_enough_input_005de290[0x4e];
            s_malformed_headernot_enough_input_005de290[0x4f] =
                 s_malformed_headernot_enough_input_005de290[0x4f];
            return;
          }
          goto LAB_0048f590;
        }
        if (uVar16 != 0x26) {
          do {
            uVar20 = local_58;
            plVar19 = local_78;
            uVar16 = (uint)bVar14;
            if ((char)bVar14 < '\0') {
              if ((bVar14 & 0x40) == 0) {
                uVar16 = uVar16 & 0x7f;
              }
              else {
                uVar16 = uVar16 & 0x10 ^ 0x1f;
                if ((bVar14 & 0x20) == 0) {
                  uVar16 = 0x3f;
                }
                uVar16 = uVar16 & bVar14;
                if (((((pbVar28[1] & 0xffffffc0) == 0x80) &&
                     (uVar16 = pbVar28[1] & 0x3f | uVar16 << 6, (bVar14 & 0x20) != 0)) &&
                    ((pbVar28[2] & 0xffffffc0) == 0x80)) &&
                   ((uVar16 = pbVar28[2] & 0x3f | uVar16 << 6,
                    (bVar14 >> 5 & (bVar14 & 0x10) == 0) == 0 && ((pbVar28[3] & 0xffffffc0) == 0x80)
                    ))) {
                  uVar16 = uVar16 << 6 | pbVar28[3] & 0x3f;
                }
              }
            }
            if (uVar16 < 0x26) {
              if (uVar16 != 0xd) {
                if (uVar16 != 0) goto LAB_00490458;
                    /* try { // try from 0049120a to 00491213 has its CatchHandler @ 004915ac */
                piVar8 = operator_new__(0x27);
                goto LAB_00491214;
              }
              pbVar27 = pbVar28 + 1;
              if (((char)bVar14 < '\0') && ((bVar14 & 0x40) != 0)) {
                if ((bVar14 & 0x20) == 0) {
                  pbVar27 = pbVar28 + 2;
                  goto LAB_00490406;
                }
                pbVar27 = pbVar28 + (4 - (ulong)((bVar14 & 0x10) == 0));
                uVar6 = (uint)*pbVar27;
                uVar25 = uVar6;
                if ((char)*pbVar27 < '\0') goto LAB_00490411;
joined_r0x004905df:
                uVar16 = 10;
                if (uVar25 == 10) goto LAB_004907e9;
                goto LAB_004905f0;
              }
LAB_00490406:
              uVar6 = (uint)*pbVar27;
              uVar25 = uVar6;
              if (-1 < (char)*pbVar27) goto joined_r0x004905df;
LAB_00490411:
              if ((uVar6 & 0x40) != 0) {
                uVar25 = uVar6 & 0x10 ^ 0x1f;
                if ((uVar6 & 0x20) == 0) {
                  uVar25 = 0x3f;
                }
                uVar25 = uVar25 & uVar6;
                if ((((pbVar27[1] & 0xc0) == 0x80) &&
                    (uVar25 = pbVar27[1] & 0x3f | uVar25 << 6, (uVar6 & 0x20) != 0)) &&
                   ((pbVar27[2] & 0xc0) == 0x80)) {
                  uVar25 = pbVar27[2] & 0x3f | uVar25 << 6;
                  if (((byte)uVar6 >> 5 & (uVar6 & 0x10) == 0) == 0) {
                    if ((pbVar27[3] & 0xffffffc0) == 0x80) {
                      uVar6 = uVar25 << 6 | pbVar27[3] & 0x3f;
                      goto joined_r0x00490424;
                    }
                  }
                }
                goto joined_r0x004905df;
              }
              uVar6 = uVar6 & 0x7f;
joined_r0x00490424:
              uVar16 = 10;
              if (uVar6 != 10) goto LAB_004905f0;
            }
            else {
              if ((uVar16 == 0x26) || (uVar16 == 0x3c)) goto LAB_00490170;
LAB_00490458:
              if (uVar16 < 0x80) {
LAB_004905f0:
                uVar24 = local_58 + 1;
                if (local_78 == (long *)0x0) {
                  plVar11 = &local_60;
                  if (local_48 < uVar24) goto LAB_004907cd;
                }
                else {
                  plVar11 = local_78;
                  if ((ulong)local_78[1] <= uVar24) {
                    uVar18 = uVar24 >> 1;
                    if (0xfffff < uVar18) {
                      uVar18 = 0x100000;
                    }
                    uVar18 = uVar18 + local_58 + 0x21 & 0xffffffffffffffe0;
                    if ((ulong)local_78[1] < uVar18) {
                      local_40 = uVar18;
                      if ((void *)*local_78 == (void *)0x0) {
                        pvVar10 = malloc(uVar18);
                        if (pvVar10 == (void *)0x0) {
                          puVar13 = (undefined8 *)__cxa_allocate_exception(8);
                          *puVar13 = PTR_vtable_00715738 + 0x10;
                    /* try { // try from 0049153a to 0049154f has its CatchHandler @ 004915db */
                    /* WARNING: Subroutine does not return */
                          __cxa_throw(puVar13,PTR_typeinfo_00715888,PTR__bad_alloc_00715478);
                        }
                        *plVar19 = (long)pvVar10;
                        plVar11 = plVar19;
                      }
                      else {
                        pvVar10 = realloc((void *)*local_78,uVar18);
                        if (pvVar10 == (void *)0x0) {
                          puVar13 = (undefined8 *)__cxa_allocate_exception(8);
                          *puVar13 = PTR_vtable_00715738 + 0x10;
                    /* try { // try from 0049150c to 00491521 has its CatchHandler @ 004915db */
                    /* WARNING: Subroutine does not return */
                          __cxa_throw(puVar13,PTR_typeinfo_00715888,PTR__bad_alloc_00715478);
                        }
                        *plVar19 = (long)pvVar10;
                        uVar24 = local_58 + 1;
                        plVar11 = local_78;
                        uVar20 = local_58;
                      }
                      plVar19[1] = local_40;
                    }
                  }
                }
                local_58 = uVar24;
                if (local_50 < uVar24) {
                  local_50 = uVar24;
                }
                if (*plVar11 != 0) {
                  *(char *)(*plVar11 + uVar20) = (char)uVar16;
                }
              }
              else {
                lVar21 = 4 - (ulong)(uVar16 < 0x10000);
                if (uVar16 < 0x800) {
                  lVar21 = 2;
                }
                uVar24 = local_58 + lVar21;
                if (local_78 == (long *)0x0) {
                  plVar11 = &local_60;
                  if (local_48 < uVar24) goto LAB_004907cd;
                }
                else {
                  plVar11 = local_78;
                  if ((ulong)local_78[1] <= uVar24) {
                    uVar18 = uVar24 >> 1;
                    if (0xfffff < uVar18) {
                      uVar18 = 0x100000;
                    }
                    uVar18 = uVar18 + uVar24 + 0x20 & 0xffffffffffffffe0;
                    if ((ulong)local_78[1] < uVar18) {
                      local_40 = uVar18;
                      if ((void *)*local_78 == (void *)0x0) {
                        pvVar10 = malloc(uVar18);
                        if (pvVar10 == (void *)0x0) {
                          puVar13 = (undefined8 *)__cxa_allocate_exception(8);
                          *puVar13 = PTR_vtable_00715738 + 0x10;
                    /* try { // try from 00491596 to 004915ab has its CatchHandler @ 004915db */
                    /* WARNING: Subroutine does not return */
                          __cxa_throw(puVar13,PTR_typeinfo_00715888,PTR__bad_alloc_00715478);
                        }
                        *plVar19 = (long)pvVar10;
                        plVar11 = plVar19;
                      }
                      else {
                        pvVar10 = realloc((void *)*local_78,uVar18);
                        if (pvVar10 == (void *)0x0) {
                          puVar13 = (undefined8 *)__cxa_allocate_exception(8);
                          *puVar13 = PTR_vtable_00715738 + 0x10;
                    /* try { // try from 00491568 to 0049157d has its CatchHandler @ 004915db */
                    /* WARNING: Subroutine does not return */
                          __cxa_throw(puVar13,PTR_typeinfo_00715888,PTR__bad_alloc_00715478);
                        }
                        *plVar19 = (long)pvVar10;
                        uVar24 = lVar21 + local_58;
                        plVar11 = local_78;
                        uVar20 = local_58;
                      }
                      plVar19[1] = local_40;
                    }
                  }
                }
                lVar21 = *plVar11;
                local_58 = uVar24;
                if (local_50 < uVar24) {
                  local_50 = uVar24;
                }
                if (lVar21 != 0) {
                  uVar25 = 0xffff < uVar16 | 2;
                  if (uVar16 < 0x800) {
                    uVar25 = 1;
                  }
                  bVar14 = (byte)uVar25;
                  sVar15 = bVar14 * '\x06';
                  *(byte *)(lVar21 + uVar20) =
                       (byte)(uVar16 >> sVar15) | (byte)(0xff << (bVar14 ^ 7));
                  *(byte *)(lVar21 + 1 + uVar20) =
                       (byte)(uVar16 >> ((bVar14 * '\x02' + -2) * '\x03' & 0x1f)) & 0x3f | 0x80;
                  if ((0x7ff < uVar16) &&
                     (*(byte *)(lVar21 + 2 + uVar20) =
                           (byte)(uVar16 >> (sVar15 - 0xcU & 0x1f)) & 0x3f | 0x80, 1 < uVar25 - 1))
                  {
                    *(byte *)(lVar21 + 3 + uVar20) =
                         (byte)(uVar16 >> (sVar15 - 0x12U & 0x1f)) & 0x3f | 0x80;
                  }
                }
              }
LAB_004907cd:
              bVar14 = bVar32 & 1;
              bVar32 = true;
              if (bVar14 == 0) {
                iVar17 = iswspace(uVar16);
                bVar32 = iVar17 == 0;
              }
              pbVar28 = *(byte **)pXVar1;
            }
LAB_004907e9:
            pbVar27 = pbVar28 + 1;
            *(byte **)pXVar1 = pbVar27;
            bVar14 = *pbVar28;
            if (((char)bVar14 < '\0') && ((bVar14 & 0x40) != 0)) {
              lVar21 = 4 - (ulong)((bVar14 & 0x10) == 0);
              if ((bVar14 & 0x20) == 0) {
                lVar21 = 2;
              }
              pbVar27 = pbVar28 + lVar21;
              *(byte **)pXVar1 = pbVar27;
            }
            bVar14 = *pbVar27;
            pbVar28 = pbVar27;
          } while( true );
        }
        local_90 = &DAT_0061ac58;
                    /* try { // try from 00490c84 to 00490c90 has its CatchHandler @ 004915d9 */
        readEntity(this,(String *)&local_90);
        bVar14 = *local_90;
        uVar16 = (uint)bVar14;
        if ((char)bVar14 < '\0') {
          if ((bVar14 & 0x40) == 0) {
            uVar16 = uVar16 & 0x7f;
          }
          else {
            uVar16 = uVar16 & 0x10 ^ 0x1f;
            if ((bVar14 & 0x20) == 0) {
              uVar16 = 0x3f;
            }
            uVar16 = uVar16 & bVar14;
            if (((((local_90[1] & 0xffffffc0) == 0x80) &&
                 (uVar16 = local_90[1] & 0x3f | uVar16 << 6, (bVar14 & 0x20) != 0)) &&
                ((local_90[2] & 0xffffffc0) == 0x80)) &&
               ((uVar16 = local_90[2] & 0x3f | uVar16 << 6,
                (bVar14 >> 5 & (bVar14 & 0x10) == 0) == 0 && ((local_90[3] & 0xffffffc0) == 0x80))))
            {
              uVar16 = uVar16 << 6 | local_90[3] & 0x3f;
            }
          }
        }
        if (uVar16 != 0x3c) {
LAB_00490e30:
          lVar21 = 0;
          pbVar28 = local_90;
          do {
            pbVar27 = pbVar28 + 1;
            uVar16 = (uint)bVar14;
            if ((char)bVar14 < '\0') {
              uVar16 = (uint)bVar14;
              if ((bVar14 & 0x40) == 0) {
                bVar14 = bVar14 & 0x7f;
                uVar16 = uVar16 & 0x7f;
                goto joined_r0x00490e57;
              }
              if ((bVar14 & 0x20) == 0) {
                uVar25 = 0x3f;
                lVar29 = 0;
                bVar22 = false;
                bVar31 = false;
              }
              else {
                bVar22 = true;
                if ((bVar14 & 0x10) == 0) {
                  uVar25 = 0x1f;
                  lVar29 = 1;
                  bVar31 = false;
                }
                else {
                  uVar25 = 0xf;
                  lVar29 = 2;
                  bVar31 = true;
                }
              }
              uVar16 = uVar16 & uVar25;
              pbVar23 = pbVar27;
              if ((pbVar28[1] & 0xffffffc0) != 0x80) {
joined_r0x00490f7f:
                pbVar27 = pbVar23;
                if (uVar16 != 0) goto LAB_00490f44;
                goto LAB_00490f81;
              }
              pbVar27 = pbVar28 + lVar29 + 2;
              uVar16 = pbVar28[1] & 0x3f | uVar16 << 6;
              if (bVar22) {
                bVar14 = pbVar28[2];
                pbVar23 = pbVar28 + 2;
                if ((bVar14 & 0xc0) != 0x80) goto joined_r0x00490f7f;
                uVar16 = bVar14 & 0x3f | uVar16 << 6;
                if (bVar31) {
                  uVar25 = (uint)pbVar28[3];
                  pbVar23 = pbVar28 + 3;
                  if ((uVar25 & 0xffffffc0) != 0x80) goto joined_r0x00490f7f;
                  uVar16 = uVar16 << 6 | uVar25 & 0x3f;
                }
              }
              if (uVar16 == 0) goto LAB_00490f81;
            }
            else {
joined_r0x00490e57:
              if (bVar14 == 0) {
LAB_00490f81:
                    /* try { // try from 00490f86 to 00490f8d has its CatchHandler @ 004915d9 */
                (*(code *)local_88[5])(&local_88,local_90,lVar21);
                if ((bVar32 & 1) == 0) {
                  bVar32 = *local_90;
                  pbVar28 = local_90;
                  while( true ) {
                    if (bVar32 == 0) {
                      bVar32 = 0;
                      goto LAB_004910ab;
                    }
                    __wc = (wint_t)bVar32;
                    if ((char)bVar32 < '\0') {
                      if ((bVar32 & 0x40) == 0) {
                        __wc = bVar32 & 0x7f;
                      }
                      else {
                        uVar16 = __wc & 0x10 ^ 0x1f;
                        if ((bVar32 & 0x20) == 0) {
                          uVar16 = 0x3f;
                        }
                        __wc = __wc & uVar16;
                        if ((((pbVar28[1] & 0xffffffc0) == 0x80) &&
                            (__wc = pbVar28[1] & 0x3f | __wc << 6, (bVar32 & 0x20) != 0)) &&
                           (((pbVar28[2] & 0xffffffc0) == 0x80 &&
                            ((__wc = pbVar28[2] & 0x3f | __wc << 6,
                             (bVar32 >> 5 & (bVar32 & 0x10) == 0) == 0 &&
                             ((pbVar28[3] & 0xffffffc0) == 0x80)))))) {
                          __wc = __wc << 6 | pbVar28[3] & 0x3f;
                        }
                      }
                    }
                    iVar17 = iswspace(__wc);
                    if (iVar17 == 0) break;
                    pbVar27 = pbVar28 + 1;
                    bVar32 = *pbVar28;
                    if (((char)bVar32 < '\0') && ((bVar32 & 0x40) != 0)) {
                      if ((bVar32 & 0x20) == 0) {
                        pbVar27 = pbVar28 + 2;
                      }
                      else {
                        pbVar27 = pbVar28 + (4 - (ulong)((bVar32 & 0x10) == 0));
                      }
                    }
                    bVar32 = *pbVar27;
                    pbVar28 = pbVar27;
                  }
                }
                bVar32 = 1;
                goto LAB_004910ab;
              }
            }
LAB_00490f44:
            lVar29 = 1;
            if ((0x7f < uVar16) && (lVar29 = 2, 0x7ff < uVar16)) {
              lVar29 = 4 - (ulong)(uVar16 < 0x10000);
            }
            lVar21 = lVar21 + lVar29;
            bVar14 = *pbVar27;
            pbVar28 = pbVar27;
          } while( true );
        }
        pbVar28 = local_90 + 1;
        if (((char)bVar14 < '\0') && ((bVar14 & 0x40) != 0)) {
          if ((bVar14 & 0x20) == 0) {
            pbVar28 = local_90 + 2;
          }
          else {
            pbVar28 = local_90 + (4 - (ulong)((bVar14 & 0x10) == 0));
          }
        }
        bVar2 = *pbVar28;
        uVar16 = (uint)bVar2;
        if ((char)bVar2 < '\0') {
          uVar16 = (uint)bVar2;
          if ((bVar2 & 0x40) == 0) {
            uVar16 = uVar16 & 0x7f;
          }
          else {
            uVar25 = uVar16 & 0x10 ^ 0x1f;
            if ((bVar2 & 0x20) == 0) {
              uVar25 = 0x3f;
            }
            uVar16 = uVar25 & uVar16;
            if (((((pbVar28[1] & 0xffffffc0) == 0x80) &&
                 (uVar16 = pbVar28[1] & 0x3f | uVar16 << 6, (bVar2 & 0x20) != 0)) &&
                ((pbVar28[2] & 0xffffffc0) == 0x80)) &&
               ((uVar16 = pbVar28[2] & 0x3f | uVar16 << 6, (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0
                && ((pbVar28[3] & 0xffffffc0) == 0x80)))) {
              uVar16 = uVar16 << 6 | pbVar28[3] & 0x3f;
            }
          }
        }
        if (uVar16 == 0) goto LAB_00490e30;
        uVar4 = *(undefined8 *)(this + 8);
        XVar3 = this[0x10];
        *(byte **)(this + 8) = local_90;
        this[0x10] = (XmlDocument)0x0;
                    /* try { // try from 00490e10 to 00490e17 has its CatchHandler @ 004915ff */
        while (pXVar9 = (XmlElement *)readNextElement(this), pXVar9 != (XmlElement *)0x0) {
          *(XmlElement **)local_98 = pXVar9;
          local_98 = pXVar9;
        }
        *(undefined8 *)(this + 8) = uVar4;
        this[0x10] = XVar3;
LAB_004910ab:
        pbVar28 = local_90 + -0x10;
        if (pbVar28 != (byte *)&emptyString) {
          LOCK();
          iVar17 = *(int *)pbVar28;
          *(int *)pbVar28 = *(int *)pbVar28 + -1;
          UNLOCK();
          if (iVar17 == 0) {
            operator_delete__(pbVar28);
          }
        }
      } while( true );
    }
    pbVar27 = pbVar28 + 1;
    bVar22 = (bVar32 & 0x40) == 0 || -1 < (char)bVar32;
    pbVar23 = pbVar27;
    if (bVar22) {
LAB_0048f688:
      bVar14 = *pbVar23;
      uVar16 = (uint)bVar14;
      if (-1 < (char)bVar14) goto joined_r0x0048f69d;
LAB_0048f693:
      uVar16 = (uint)bVar14;
      if ((bVar14 & 0x40) == 0) {
        uVar16 = uVar16 & 0x7f;
        goto joined_r0x0048f69d;
      }
      uVar25 = uVar16 & 0x10 ^ 0x1f;
      if ((bVar14 & 0x20) == 0) {
        uVar25 = 0x3f;
      }
      uVar16 = uVar25 & uVar16;
      if (((((pbVar23[1] & 0xc0) != 0x80) ||
           (uVar16 = pbVar23[1] & 0x3f | uVar16 << 6, (bVar14 & 0x20) == 0)) ||
          ((pbVar23[2] & 0xc0) != 0x80)) ||
         ((uVar16 = pbVar23[2] & 0x3f | uVar16 << 6, (bVar14 >> 5 & (bVar14 & 0x10) == 0) != 0 ||
          ((pbVar23[3] & 0xffffffc0) != 0x80)))) goto joined_r0x0048f69d;
      uVar16 = uVar16 << 6 | pbVar23[3] & 0x3f;
      if (uVar16 != 0x21) goto LAB_00490117;
LAB_0048f769:
      pbVar23 = pbVar27;
      if (bVar22) {
LAB_0048f779:
        pbVar12 = pbVar23 + 1;
        bVar32 = *pbVar23;
      }
      else {
        if ((bVar32 & 0x20) == 0) {
          pbVar23 = pbVar28 + 2;
          goto LAB_0048f779;
        }
        bVar22 = (bVar32 & 0x10) == 0;
        pbVar23 = pbVar28 + (4 - (ulong)bVar22);
        pbVar12 = pbVar28 + (5 - (ulong)bVar22);
        bVar32 = *pbVar23;
      }
      if (((char)bVar32 < '\0') && ((bVar32 & 0x40) != 0)) {
        if ((bVar32 & 0x20) == 0) {
          pbVar12 = pbVar23 + 2;
        }
        else {
          pbVar12 = pbVar23 + (4 - (ulong)((bVar32 & 0x10) == 0));
        }
      }
      lVar21 = 0;
      do {
        if ((int)lVar21 == 7) goto LAB_0048f92d;
        pbVar23 = pbVar12 + 1;
        bVar32 = *pbVar12;
        uVar16 = (uint)bVar32;
        if ((char)bVar32 < '\0') {
          if ((bVar32 & 0x40) == 0) {
            uVar16 = uVar16 & 0x7f;
          }
          else {
            if ((bVar32 & 0x20) == 0) {
              uVar25 = 0x3f;
              lVar29 = 0;
              bVar22 = false;
              bVar31 = false;
            }
            else {
              bVar22 = true;
              if ((bVar32 & 0x10) == 0) {
                uVar25 = 0x1f;
                lVar29 = 1;
                bVar31 = false;
              }
              else {
                uVar25 = 0xf;
                lVar29 = 2;
                bVar31 = true;
              }
            }
            uVar16 = uVar16 & uVar25;
            if ((pbVar12[1] & 0xc0) == 0x80) {
              pbVar23 = pbVar12 + lVar29 + 2;
              uVar16 = pbVar12[1] & 0x3f | uVar16 << 6;
              if (bVar22) {
                bVar32 = pbVar12[2];
                if ((bVar32 & 0xc0) == 0x80) {
                  uVar16 = bVar32 & 0x3f | uVar16 << 6;
                  if (bVar31) {
                    uVar25 = (uint)pbVar12[3];
                    if ((uVar25 & 0xffffffc0) == 0x80) {
                      uVar16 = uVar16 << 6 | uVar25 & 0x3f;
                    }
                    else {
                      pbVar23 = pbVar12 + 3;
                    }
                  }
                }
                else {
                  pbVar23 = pbVar12 + 2;
                }
              }
            }
          }
        }
        iVar17 = uVar16 - (byte)(&DAT_005e5ee5)[lVar21];
        uVar20 = uVar20 & 0xffffffff;
        if (iVar17 != 0) {
          uVar20 = (ulong)(iVar17 >> 0x1f | 1);
        }
        cVar5 = (uVar16 == 0) * '\x03';
        if (iVar17 != 0) {
          cVar5 = '\x01';
        }
        lVar21 = lVar21 + 1;
        pbVar12 = pbVar23;
      } while (cVar5 == '\0');
      if ((cVar5 != '\x01') || ((int)uVar20 == 0)) {
LAB_0048f92d:
        *(byte **)pXVar1 = pbVar27;
        bVar32 = *pbVar28;
        if (((char)bVar32 < '\0') && ((bVar32 & 0x40) != 0)) {
          lVar21 = 4 - (ulong)((bVar32 & 0x10) == 0);
          if ((bVar32 & 0x20) == 0) {
            lVar21 = 2;
          }
          pbVar27 = pbVar28 + lVar21;
          *(byte **)pXVar1 = pbVar27;
        }
        pbVar28 = pbVar27 + 1;
        *(byte **)pXVar1 = pbVar28;
        bVar32 = *pbVar27;
        if (((char)bVar32 < '\0') && ((bVar32 & 0x40) != 0)) {
          lVar21 = 4 - (ulong)((bVar32 & 0x10) == 0);
          if ((bVar32 & 0x20) == 0) {
            lVar21 = 2;
          }
          pbVar28 = pbVar27 + lVar21;
          *(byte **)pXVar1 = pbVar28;
        }
        pbVar27 = pbVar28 + 1;
        *(byte **)pXVar1 = pbVar27;
        bVar32 = *pbVar28;
        if (((char)bVar32 < '\0') && ((bVar32 & 0x40) != 0)) {
          lVar21 = 4 - (ulong)((bVar32 & 0x10) == 0);
          if ((bVar32 & 0x20) == 0) {
            lVar21 = 2;
          }
          pbVar27 = pbVar28 + lVar21;
          *(byte **)pXVar1 = pbVar27;
        }
        pbVar28 = pbVar27 + 1;
        *(byte **)pXVar1 = pbVar28;
        bVar32 = *pbVar27;
        if (((char)bVar32 < '\0') && ((bVar32 & 0x40) != 0)) {
          lVar21 = 4 - (ulong)((bVar32 & 0x10) == 0);
          if ((bVar32 & 0x20) == 0) {
            lVar21 = 2;
          }
          pbVar28 = pbVar27 + lVar21;
          *(byte **)pXVar1 = pbVar28;
        }
        pbVar27 = pbVar28 + 1;
        *(byte **)pXVar1 = pbVar27;
        bVar32 = *pbVar28;
        if (((char)bVar32 < '\0') && ((bVar32 & 0x40) != 0)) {
          lVar21 = 4 - (ulong)((bVar32 & 0x10) == 0);
          if ((bVar32 & 0x20) == 0) {
            lVar21 = 2;
          }
          pbVar27 = pbVar28 + lVar21;
          *(byte **)pXVar1 = pbVar27;
        }
        pbVar28 = pbVar27 + 1;
        *(byte **)pXVar1 = pbVar28;
        bVar32 = *pbVar27;
        if (((char)bVar32 < '\0') && ((bVar32 & 0x40) != 0)) {
          lVar21 = 4 - (ulong)((bVar32 & 0x10) == 0);
          if ((bVar32 & 0x20) == 0) {
            lVar21 = 2;
          }
          pbVar28 = pbVar27 + lVar21;
          *(byte **)pXVar1 = pbVar28;
        }
        pbVar27 = pbVar28 + 1;
        *(byte **)pXVar1 = pbVar27;
        bVar32 = *pbVar28;
        if (((char)bVar32 < '\0') && ((bVar32 & 0x40) != 0)) {
          lVar21 = 4 - (ulong)((bVar32 & 0x10) == 0);
          if ((bVar32 & 0x20) == 0) {
            lVar21 = 2;
          }
          pbVar27 = pbVar28 + lVar21;
          *(byte **)pXVar1 = pbVar27;
        }
        pbVar28 = pbVar27 + 1;
        *(byte **)pXVar1 = pbVar28;
        bVar32 = *pbVar27;
        if (((char)bVar32 < '\0') && ((bVar32 & 0x40) != 0)) {
          lVar21 = 4 - (ulong)((bVar32 & 0x10) == 0);
          if ((bVar32 & 0x20) == 0) {
            lVar21 = 2;
          }
          pbVar28 = pbVar27 + lVar21;
          *(byte **)pXVar1 = pbVar28;
        }
        pbVar27 = pbVar28 + 1;
        *(byte **)pXVar1 = pbVar27;
        bVar32 = *pbVar28;
        if (((char)bVar32 < '\0') && ((bVar32 & 0x40) != 0)) {
          lVar21 = 4 - (ulong)((bVar32 & 0x10) == 0);
          if ((bVar32 & 0x20) == 0) {
            lVar21 = 2;
          }
          pbVar27 = pbVar28 + lVar21;
          *(byte **)pXVar1 = pbVar27;
        }
        pbVar28 = pbVar27;
        while( true ) {
          pbVar23 = pbVar28;
          bVar32 = *pbVar23;
          uVar16 = (uint)bVar32;
          if ((char)bVar32 < '\0') {
            if ((bVar32 & 0x40) == 0) {
              uVar16 = uVar16 & 0x7f;
            }
            else {
              uVar16 = uVar16 & 0x10 ^ 0x1f;
              if ((bVar32 & 0x20) == 0) {
                uVar16 = 0x3f;
              }
              uVar16 = uVar16 & bVar32;
              if (((((pbVar23[1] & 0xffffffc0) == 0x80) &&
                   (uVar16 = pbVar23[1] & 0x3f | uVar16 << 6, (bVar32 & 0x20) != 0)) &&
                  ((pbVar23[2] & 0xffffffc0) == 0x80)) &&
                 ((uVar16 = pbVar23[2] & 0x3f | uVar16 << 6,
                  (bVar32 >> 5 & (bVar32 & 0x10) == 0) == 0 && ((pbVar23[3] & 0xffffffc0) == 0x80)))
                 ) {
                uVar16 = uVar16 << 6 | pbVar23[3] & 0x3f;
              }
            }
          }
          if (uVar16 != 0x5d) break;
          pbVar28 = pbVar23 + 1;
          pbVar12 = pbVar28;
          if (((char)bVar32 < '\0') && ((bVar32 & 0x40) != 0)) {
            if ((bVar32 & 0x20) == 0) {
              pbVar12 = pbVar23 + 2;
              goto LAB_0048fc51;
            }
            pbVar12 = pbVar23 + (4 - (ulong)((bVar32 & 0x10) == 0));
            bVar14 = *pbVar12;
            uVar16 = (uint)bVar14;
            if ((char)bVar14 < '\0') goto LAB_0048fcba;
joined_r0x0048fe41:
            if (uVar16 == 0x5d) {
LAB_0048fc62:
              if (((char)bVar32 < '\0') && ((bVar32 & 0x40) != 0)) {
                if ((bVar32 & 0x20) == 0) {
                  pbVar28 = pbVar23 + 2;
                  goto LAB_0048fc77;
                }
                bVar22 = (bVar32 & 0x10) == 0;
                pbVar28 = pbVar23 + (4 - (ulong)bVar22);
                pbVar12 = pbVar23 + (5 - (ulong)bVar22);
                bVar32 = *pbVar28;
                if ((char)bVar32 < '\0') goto LAB_0048fc86;
LAB_0048fd90:
                bVar32 = *pbVar12;
              }
              else {
LAB_0048fc77:
                pbVar12 = pbVar28 + 1;
                bVar32 = *pbVar28;
                if (-1 < (char)bVar32) goto LAB_0048fd90;
LAB_0048fc86:
                if ((bVar32 & 0x40) == 0) goto LAB_0048fd90;
                if ((bVar32 & 0x20) == 0) {
                  pbVar12 = pbVar28 + 2;
                }
                else {
                  pbVar12 = pbVar28 + (4 - (ulong)((bVar32 & 0x10) == 0));
                }
                bVar32 = *pbVar12;
              }
              uVar16 = (uint)bVar32;
              if ((char)bVar32 < '\0') {
                uVar16 = (uint)bVar32;
                if ((bVar32 & 0x40) == 0) {
                  uVar16 = uVar16 & 0x7f;
                }
                else {
                  uVar25 = uVar16 & 0x10 ^ 0x1f;
                  if ((bVar32 & 0x20) == 0) {
                    uVar25 = 0x3f;
                  }
                  uVar16 = uVar25 & uVar16;
                  if ((((*(byte *)((long)pbVar12 + 1) & 0xffffffc0) == 0x80) &&
                      (uVar16 = *(byte *)((long)pbVar12 + 1) & 0x3f | uVar16 << 6,
                      (bVar32 & 0x20) != 0)) &&
                     (((*(byte *)((long)pbVar12 + 2) & 0xffffffc0) == 0x80 &&
                      ((uVar16 = *(byte *)((long)pbVar12 + 2) & 0x3f | uVar16 << 6,
                       (bVar32 >> 5 & (bVar32 & 0x10) == 0) == 0 &&
                       ((*(byte *)((long)pbVar12 + 3) & 0xffffffc0) == 0x80)))))) {
                    uVar16 = uVar16 << 6 | *(byte *)((long)pbVar12 + 3) & 0x3f;
                  }
                }
              }
              if (uVar16 == 0x3e) {
                ppuVar30 = (undefined **)&DAT_0061ac58;
                if (*pbVar27 != 0) {
                  __n = (long)pbVar23 - (long)pbVar27;
                  uVar20 = __n + 4 & 0xfffffffffffffffc;
                  puVar7 = operator_new__(uVar20 + 0x17);
                  LOCK();
                  *puVar7 = 0;
                  UNLOCK();
                  *(ulong *)(puVar7 + 2) = uVar20;
                  ppuVar30 = (undefined **)(puVar7 + 4);
                  memcpy(ppuVar30,pbVar27,__n);
                  *(undefined1 *)((long)puVar7 + __n + 0x10) = 0;
                }
                    /* try { // try from 0048ff0b to 0048ff14 has its CatchHandler @ 00491635 */
                local_88 = ppuVar30;
                pXVar9 = XmlElement::createTextElement((long *)&local_88);
                this = local_38;
                *(XmlElement **)local_98 = pXVar9;
                ppuVar30 = local_88 + -2;
                if (ppuVar30 != (undefined **)&emptyString) {
                  LOCK();
                  iVar17 = *(int *)ppuVar30;
                  *(int *)ppuVar30 = *(int *)ppuVar30 + -1;
                  UNLOCK();
                  if (iVar17 == 0) {
                    operator_delete__(ppuVar30);
                  }
                }
                pbVar27 = *(byte **)pXVar1;
                pbVar28 = pbVar27 + 1;
                *(byte **)pXVar1 = pbVar28;
                bVar32 = *pbVar27;
                if (((char)bVar32 < '\0') && ((bVar32 & 0x40) != 0)) {
                  lVar21 = 4 - (ulong)((bVar32 & 0x10) == 0);
                  if ((bVar32 & 0x20) == 0) {
                    lVar21 = 2;
                  }
                  pbVar28 = pbVar27 + lVar21;
                  *(byte **)pXVar1 = pbVar28;
                }
                pbVar27 = pbVar28 + 1;
                *(byte **)pXVar1 = pbVar27;
                bVar32 = *pbVar28;
                if (((char)bVar32 < '\0') && ((bVar32 & 0x40) != 0)) {
                  lVar21 = 4 - (ulong)((bVar32 & 0x10) == 0);
                  if ((bVar32 & 0x20) == 0) {
                    lVar21 = 2;
                  }
                  pbVar27 = pbVar28 + lVar21;
                  *(byte **)pXVar1 = pbVar27;
                }
                *(byte **)pXVar1 = pbVar27 + 1;
                bVar32 = *pbVar27;
                local_98 = pXVar9;
                if (((char)bVar32 < '\0') && ((bVar32 & 0x40) != 0)) {
                  lVar21 = 4 - (ulong)((bVar32 & 0x10) == 0);
                  if ((bVar32 & 0x20) == 0) {
                    lVar21 = 2;
                  }
                  *(byte **)pXVar1 = pbVar27 + lVar21;
                }
                goto LAB_0048f590;
              }
            }
          }
          else {
LAB_0048fc51:
            bVar14 = *pbVar12;
            uVar16 = (uint)bVar14;
            if (-1 < (char)bVar14) goto joined_r0x0048fe41;
LAB_0048fcba:
            uVar16 = (uint)bVar14;
            if ((bVar14 & 0x40) == 0) {
              if ((uVar16 & 0x7f) != 0x5d) goto LAB_0048fe75;
              goto LAB_0048fc62;
            }
            if ((pbVar12[1] & 0xc0) == 0x80) {
              uVar25 = uVar16 & 0x10 ^ 0x1f;
              if ((bVar14 & 0x20) == 0) {
                uVar25 = 0x3f;
              }
              uVar16 = pbVar12[1] & 0x3f | (uVar25 & uVar16) << 6;
              if (((((bVar14 & 0x20) != 0) && ((pbVar12[2] & 0xffffffc0) == 0x80)) &&
                  (uVar16 = pbVar12[2] & 0x3f | uVar16 << 6,
                  (bVar14 >> 5 & (bVar14 & 0x10) == 0) == 0)) && ((pbVar12[3] & 0xffffffc0) == 0x80)
                 ) {
                uVar16 = uVar16 << 6 | pbVar12[3] & 0x3f;
              }
              goto joined_r0x0048fe41;
            }
          }
LAB_0048fe75:
          pbVar28 = pbVar23 + 1;
          *(byte **)pXVar1 = pbVar28;
          bVar32 = *pbVar23;
          if (((char)bVar32 < '\0') && ((bVar32 & 0x40) != 0)) {
            lVar21 = 4 - (ulong)((bVar32 & 0x10) == 0);
            if ((bVar32 & 0x20) == 0) {
              lVar21 = 2;
            }
            *(byte **)pXVar1 = pbVar23 + lVar21;
            pbVar28 = pbVar23 + lVar21;
          }
        }
        if (uVar16 != 0) goto LAB_0048fe75;
        piVar8 = operator_new__(0x33);
        this = local_38;
        LOCK();
        *piVar8 = 0;
        UNLOCK();
        piVar8[2] = 0x1c;
        piVar8[3] = 0;
        bVar32 = 0x75;
        lVar21 = 2;
        pbVar28 = (byte *)(piVar8 + 4);
        do {
          if ((char)bVar32 < '\0') {
            *pbVar28 = bVar32 >> 6 | 0xc0;
            pbVar28[1] = bVar32 & 0x3f | 0x80;
            pbVar23 = pbVar28 + 1;
            pbVar27 = pbVar28 + 2;
            bVar32 = "CDATA["[lVar21 + 6];
            pbVar28 = pbVar23;
            if ((char)bVar32 < '\0') goto LAB_004900ab;
LAB_00490084:
            *pbVar27 = bVar32;
          }
          else {
            *pbVar28 = bVar32;
            pbVar27 = pbVar28 + 1;
            bVar32 = "CDATA["[lVar21 + 6];
            pbVar23 = pbVar28;
            if (-1 < (char)bVar32) goto LAB_00490084;
LAB_004900ab:
            pbVar23 = pbVar27;
            pbVar28[1] = bVar32 >> 6 | 0xc0;
            pbVar28[2] = bVar32 & 0x3f | 0x80;
          }
          pbVar28 = pbVar23 + 2;
          bVar32 = "unterminated CDATA section"[lVar21];
          lVar21 = lVar21 + 2;
        } while (lVar21 != 0x1c);
        *pbVar28 = 0;
        LOCK();
        *piVar8 = *piVar8 + 1;
        UNLOCK();
        LOCK();
        lVar21 = *(long *)(local_38 + 0x18);
        *(int **)(local_38 + 0x18) = piVar8 + 4;
        UNLOCK();
        piVar26 = (int *)(lVar21 + -0x10);
        if (piVar26 != &emptyString) {
          LOCK();
          iVar17 = *piVar26;
          *piVar26 = *piVar26 + -1;
          UNLOCK();
          if (iVar17 == 0) {
            operator_delete__(piVar26);
          }
        }
        this[0x11] = (XmlDocument)0x1;
        LOCK();
        iVar17 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar17 == 0) {
          operator_delete__(piVar8);
        }
        this[0x10] = (XmlDocument)0x1;
        goto LAB_0048f590;
      }
    }
    else {
      if ((bVar32 & 0x20) == 0) {
        pbVar23 = pbVar28 + 2;
        goto LAB_0048f688;
      }
      pbVar23 = pbVar28 + (4 - (ulong)((bVar32 & 0x10) == 0));
      bVar14 = *pbVar23;
      uVar16 = (uint)bVar14;
      if ((char)bVar14 < '\0') goto LAB_0048f693;
joined_r0x0048f69d:
      if (uVar16 == 0x21) goto LAB_0048f769;
LAB_00490117:
      if (uVar16 == 0x2f) {
        if (bVar32 == 0) {
          return;
        }
        iVar17 = 2;
        pbVar27 = pbVar28;
        while( true ) {
          pbVar23 = pbVar27 + 1;
          uVar16 = (uint)uVar20 & 0xff;
          if ((char)uVar20 < '\0') {
            if ((uVar20 & 0x40) == 0) {
              uVar16 = (uint)uVar20 & 0x7f;
            }
            else {
              if ((uVar20 & 0x20) == 0) {
                uVar25 = 0x3f;
                lVar21 = 0;
                bVar22 = false;
                bVar31 = false;
              }
              else {
                bVar22 = true;
                if ((uVar20 & 0x10) == 0) {
                  uVar25 = 0x1f;
                  lVar21 = 1;
                  bVar31 = false;
                }
                else {
                  uVar25 = 0xf;
                  lVar21 = 2;
                  bVar31 = true;
                }
              }
              uVar16 = uVar16 & uVar25;
              if ((pbVar27[1] & 0xc0) == 0x80) {
                pbVar12 = pbVar27 + lVar21 + 2;
                uVar16 = pbVar27[1] & 0x3f | uVar16 << 6;
                pbVar23 = pbVar12;
                if (bVar22) {
                  bVar32 = pbVar27[2];
                  pbVar23 = pbVar27 + 2;
                  if ((bVar32 & 0xc0) == 0x80) {
                    uVar16 = bVar32 & 0x3f | uVar16 << 6;
                    pbVar23 = pbVar12;
                    if (bVar31) {
                      bVar32 = pbVar27[3];
                      pbVar23 = pbVar27 + 3;
                      if ((bVar32 & 0xc0) == 0x80) {
                        uVar16 = uVar16 << 6 | bVar32 & 0x3f;
                        pbVar23 = pbVar12;
                      }
                    }
                  }
                }
              }
            }
          }
          pbVar27 = pbVar23;
          if (uVar16 == 0x3e) break;
          uVar20 = (ulong)*pbVar27;
          iVar17 = iVar17 + 1;
          if (*pbVar27 == 0) {
            return;
          }
        }
        do {
          pbVar27 = pbVar28 + 1;
          *(byte **)pXVar1 = pbVar27;
          bVar32 = *pbVar28;
          if (((char)bVar32 < '\0') && ((bVar32 & 0x40) != 0)) {
            lVar21 = 4 - (ulong)((bVar32 & 0x10) == 0);
            if ((bVar32 & 0x20) == 0) {
              lVar21 = 2;
            }
            pbVar27 = pbVar28 + lVar21;
            *(byte **)pXVar1 = pbVar27;
          }
          iVar17 = iVar17 + -1;
          pbVar28 = pbVar27;
        } while (1 < iVar17);
        return;
      }
    }
    pXVar9 = (XmlElement *)readNextElement(this);
    if (pXVar9 == (XmlElement *)0x0) {
      return;
    }
    *(XmlElement **)local_98 = pXVar9;
    local_98 = pXVar9;
  } while( true );
}


