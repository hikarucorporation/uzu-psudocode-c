// Function : writeString
// Namespace: juce:JSONFormatter
// Entry    : 004ae2c0
// Prototype: undefined writeString(long * param_1, byte * param_2, int param_3)
// Body     : 004ae2c0 - 004ae924


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JSONFormatter::writeString(juce::OutputStream&, juce::CharPointer_UTF8,
   juce::JSON::Encoding) */

void __cdecl juce::JSONFormatter::writeString(long *param_1,byte *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  byte *pbVar5;
  int *piVar6;
  byte bVar7;
  sbyte sVar8;
  int *piVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  
LAB_004ae300:
  pbVar5 = param_2 + 1;
  bVar7 = *param_2;
  uVar16 = (ulong)bVar7;
  if ((char)bVar7 < '\0') {
    if ((bVar7 & 0x40) == 0) {
      uVar16 = (ulong)(bVar7 & 0x7f);
      goto LAB_004ae3e0;
    }
    if ((bVar7 & 0x20) == 0) {
      uVar12 = 0x3f;
      lVar10 = 0;
      bVar3 = false;
      bVar4 = false;
    }
    else {
      bVar3 = true;
      if ((bVar7 & 0x10) == 0) {
        uVar12 = 0x1f;
        lVar10 = 1;
        bVar4 = false;
      }
      else {
        uVar12 = 0xf;
        lVar10 = 2;
        bVar4 = true;
      }
    }
    uVar12 = bVar7 & uVar12;
    uVar16 = (ulong)uVar12;
    if ((param_2[1] & 0xffffffc0) != 0x80) goto LAB_004ae3e0;
    pbVar5 = param_2 + lVar10 + 2;
    uVar12 = param_2[1] & 0x3f | uVar12 << 6;
    uVar16 = (ulong)uVar12;
    if (!bVar3) goto LAB_004ae3e0;
    uVar11 = (uint)param_2[2];
    pbVar15 = param_2 + 2;
    if ((uVar11 & 0xffffffc0) == 0x80) {
      uVar12 = uVar11 & 0x3f | uVar12 << 6;
      uVar16 = (ulong)uVar12;
      if (!bVar4) goto LAB_004ae3e0;
      pbVar15 = param_2 + 3;
      if ((*pbVar15 & 0xffffffc0) == 0x80) {
        uVar16 = (ulong)(uVar12 << 6 | *pbVar15 & 0x3f);
        goto LAB_004ae3e0;
      }
      goto LAB_004ae3e3;
    }
  }
  else {
LAB_004ae3e0:
    pbVar15 = pbVar5;
LAB_004ae3e3:
    uVar12 = (uint)uVar16;
  }
  param_2 = pbVar15;
  if (uVar12 < 0x23) {
                    /* WARNING: Could not recover jumptable at 0x004ae3f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_005e2090 + *(int *)(&DAT_005e2090 + uVar16 * 4)))();
    return;
  }
  uVar12 = (uint)uVar16;
  if (uVar12 == 0x5c) goto code_r0x004ae48e;
  if (0x1f < uVar12) {
    if (param_3 != 1) {
      if (param_3 == 0) {
        piVar6 = operator_new__((ulong)(0xffff < uVar12) * 4 + 0x1b);
        LOCK();
        *piVar6 = 0;
        UNLOCK();
        *(ulong *)(piVar6 + 2) = (ulong)(0xffff < uVar12) * 4 + 4;
        if (uVar12 < 0x80) {
          piVar9 = (int *)((long)piVar6 + 0x11);
          *(char *)(piVar6 + 4) = (char)uVar16;
        }
        else {
          uVar11 = 0xffff < uVar12 | 2;
          if (uVar12 < 0x800) {
            uVar11 = 1;
          }
          bVar7 = (byte)uVar11;
          sVar8 = bVar7 * '\x06';
          *(byte *)(piVar6 + 4) = (byte)(uVar12 >> sVar8) | (byte)(0xff << (bVar7 ^ 7));
          *(byte *)((long)piVar6 + 0x11) =
               (byte)(uVar12 >> ((bVar7 * '\x02' + -2) * '\x03' & 0x1f)) & 0x3f | 0x80;
          if (uVar12 < 0x800) {
            piVar9 = (int *)((long)piVar6 + 0x12);
          }
          else {
            *(byte *)((long)piVar6 + 0x12) = (byte)(uVar12 >> (sVar8 - 0xcU & 0x1f)) & 0x3f | 0x80;
            if (uVar11 - 1 < 2) {
              piVar9 = (int *)((long)piVar6 + 0x13);
            }
            else {
              piVar9 = piVar6 + 5;
              *(byte *)((long)piVar6 + 0x13) =
                   (byte)(uVar12 >> (sVar8 - 0x12U & 0x1f)) & 0x3f | 0x80;
            }
          }
        }
        *(undefined1 *)piVar9 = 0;
        lVar10 = 0;
        pbVar5 = (byte *)(piVar6 + 4);
LAB_004ae7b3:
        pbVar15 = pbVar5 + 1;
        bVar7 = *pbVar5;
        uVar12 = (uint)bVar7;
        if (-1 < (char)bVar7) goto joined_r0x004ae7c4;
        if ((bVar7 & 0x40) == 0) {
          uVar12 = uVar12 & 0x7f;
          if ((bVar7 & 0x7f) == 0) goto LAB_004ae8e1;
          goto LAB_004ae8a4;
        }
        if ((bVar7 & 0x20) == 0) {
          uVar11 = 0x3f;
          lVar13 = 0;
          bVar3 = false;
          bVar4 = false;
        }
        else {
          bVar3 = true;
          if ((bVar7 & 0x10) == 0) {
            uVar11 = 0x1f;
            lVar13 = 1;
            bVar4 = false;
          }
          else {
            uVar11 = 0xf;
            lVar13 = 2;
            bVar4 = true;
          }
        }
        uVar12 = uVar12 & uVar11;
        if ((pbVar5[1] & 0xc0) != 0x80) {
joined_r0x004ae7c4:
          if (uVar12 == 0) goto LAB_004ae8e1;
LAB_004ae8a4:
          lVar13 = 1;
          if ((0x7f < uVar12) && (lVar13 = 2, 0x7ff < uVar12)) {
            lVar13 = 4 - (ulong)(uVar12 < 0x10000);
          }
          lVar10 = lVar10 + lVar13;
          pbVar5 = pbVar15;
          goto LAB_004ae7b3;
        }
        pbVar14 = pbVar5 + lVar13 + 2;
        uVar12 = pbVar5[1] & 0x3f | uVar12 << 6;
        pbVar15 = pbVar14;
        if (!bVar3) goto joined_r0x004ae7c4;
        pbVar15 = pbVar5 + 2;
        if ((*pbVar15 & 0xc0) == 0x80) {
          uVar12 = *pbVar15 & 0x3f | uVar12 << 6;
          pbVar15 = pbVar14;
          if (bVar4) {
            uVar11 = (uint)pbVar5[3];
            pbVar15 = pbVar5 + 3;
            if ((uVar11 & 0xffffffc0) == 0x80) {
              uVar12 = uVar12 << 6 | uVar11 & 0x3f;
              pbVar15 = pbVar14;
            }
          }
          goto joined_r0x004ae7c4;
        }
        if (uVar12 != 0) goto LAB_004ae8a4;
LAB_004ae8e1:
                    /* try { // try from 004ae8e7 to 004ae8ef has its CatchHandler @ 004ae936 */
        (**(code **)(*param_1 + 0x28))(param_1,piVar6 + 4,lVar10);
        goto LAB_004ae8f0;
      }
      goto LAB_004ae300;
    }
    if (uVar12 < 0x80) {
      piVar6 = operator_new__(0x1b);
      LOCK();
      *piVar6 = 0;
      UNLOCK();
      piVar6[2] = 4;
      piVar6[3] = 0;
      *(char *)(piVar6 + 4) = (char)uVar16;
      *(undefined1 *)((long)piVar6 + 0x11) = 0;
      lVar10 = 0;
      pbVar5 = (byte *)(piVar6 + 4);
      do {
        pbVar15 = pbVar5 + 1;
        uVar2 = uVar16 & 0xff;
        uVar12 = (uint)uVar16 & 0xff;
        if ((char)uVar16 < '\0') {
          if ((uVar16 & 0x40) == 0) {
            uVar2 = uVar16 & 0x7f;
            uVar12 = (uint)uVar16 & 0x7f;
            goto joined_r0x004ae609;
          }
          if ((uVar16 & 0x20) == 0) {
            uVar11 = 0x3f;
            lVar13 = 0;
            bVar3 = false;
            bVar4 = false;
          }
          else {
            bVar3 = true;
            if ((uVar16 & 0x10) == 0) {
              uVar11 = 0x1f;
              lVar13 = 1;
              bVar4 = false;
            }
            else {
              uVar11 = 0xf;
              lVar13 = 2;
              bVar4 = true;
            }
          }
          uVar12 = uVar12 & uVar11;
          if ((pbVar5[1] & 0xc0) == 0x80) {
            pbVar14 = pbVar5 + lVar13 + 2;
            uVar12 = pbVar5[1] & 0x3f | uVar12 << 6;
            pbVar15 = pbVar14;
            if (bVar3) {
              pbVar15 = pbVar5 + 2;
              if (((*pbVar15 & 0xc0) == 0x80) &&
                 (uVar12 = *pbVar15 & 0x3f | uVar12 << 6, pbVar15 = pbVar14, bVar4)) {
                uVar11 = (uint)pbVar5[3];
                pbVar15 = pbVar5 + 3;
                if ((uVar11 & 0xffffffc0) == 0x80) {
                  uVar12 = uVar12 << 6 | uVar11 & 0x3f;
                  pbVar15 = pbVar14;
                }
              }
            }
          }
          if (uVar12 == 0) goto LAB_004ae731;
        }
        else {
joined_r0x004ae609:
          if (uVar2 == 0) goto LAB_004ae731;
        }
        lVar13 = 1;
        if ((0x7f < uVar12) && (lVar13 = 2, 0x7ff < uVar12)) {
          lVar13 = 4 - (ulong)(uVar12 < 0x10000);
        }
        lVar10 = lVar10 + lVar13;
        uVar16 = (ulong)*pbVar15;
        pbVar5 = pbVar15;
      } while( true );
    }
    if (0xffff < uVar12) {
      if (uVar12 < 0x10000) {
        uVar11 = 0;
      }
      else {
        uVar11 = uVar12 & 0x3ff | 0xdc00;
        uVar12 = (uVar12 + 0x3ff0000 >> 10) - 0x2800;
      }
      writeEscapedChar(param_1,uVar12 & 0xffff);
      uVar12 = uVar11;
      goto LAB_004ae4ae;
    }
    if ((uVar12 & 0xfff800) == 0xd800) goto LAB_004ae300;
  }
LAB_004ae4ae:
  writeEscapedChar(param_1,uVar12 & 0xffff);
  goto LAB_004ae300;
code_r0x004ae48e:
  (**(code **)(*param_1 + 0x28))(param_1,&DAT_005e626e,2);
  goto LAB_004ae300;
LAB_004ae731:
                    /* try { // try from 004ae737 to 004ae73c has its CatchHandler @ 004ae934 */
  (**(code **)(*param_1 + 0x28))(param_1,piVar6 + 4,lVar10);
LAB_004ae8f0:
  LOCK();
  iVar1 = *piVar6;
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (iVar1 == 0) {
    operator_delete__(piVar6);
  }
  goto LAB_004ae300;
}


