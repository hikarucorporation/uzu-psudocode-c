// Function : writeText
// Namespace: juce:OutputStream
// Entry    : 0048d050
// Prototype: undefined8 writeText(OutputStream * this, undefined8 * param_1, char param_2, char param_3, char * param_4)
// Body     : 0048d050 - 0048d4fd


/* juce::OutputStream::writeText(juce::String const&, bool, bool, char const*) */

undefined8 __thiscall
juce::OutputStream::writeText
          (OutputStream *this,undefined8 *param_1,char param_2,char param_3,char *param_4)

{
  byte bVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined8 in_RAX;
  byte *pbVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 unaff_RBX;
  ulong uVar9;
  byte *pbVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  byte *pbVar18;
  bool bVar19;
  undefined1 local_3c [4];
  uint local_38;
  uint local_34;
  
  if (param_4 == (char *)0x0) {
LAB_0048d146:
    bVar19 = false;
  }
  else {
    cVar5 = *param_4;
    in_RAX = CONCAT71((int7)((ulong)in_RAX >> 8),cVar5);
    if (cVar5 != '\r') {
      if (cVar5 == '\n') {
        uVar9 = CONCAT71((int7)((ulong)unaff_RBX >> 8),param_4[1] == '\0');
        bVar19 = false;
        goto joined_r0x0048d0a8;
      }
      goto LAB_0048d146;
    }
    if (param_4[1] != '\n') goto LAB_0048d146;
    bVar19 = param_4[2] == '\0';
  }
  uVar9 = 0;
joined_r0x0048d0a8:
  if (param_2 != '\0') {
    if (param_3 != '\0') {
      (**(code **)(*(long *)this + 0x28))(this,&DAT_005e5e63,2);
    }
    pbVar18 = (byte *)*param_1;
    uVar16 = 0;
LAB_0048d180:
    pbVar6 = pbVar18 + 1;
    bVar1 = *pbVar18;
    uVar17 = (uint)bVar1;
    pbVar10 = pbVar6;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) == 0) {
        uVar17 = bVar1 & 0x7f;
      }
      else {
        if ((bVar1 & 0x20) == 0) {
          uVar17 = 0x3f;
          lVar13 = 0;
          bVar3 = false;
          bVar4 = false;
        }
        else {
          bVar3 = true;
          if ((bVar1 & 0x10) == 0) {
            uVar17 = 0x1f;
            lVar13 = 1;
            bVar4 = false;
          }
          else {
            uVar17 = 0xf;
            lVar13 = 2;
            bVar4 = true;
          }
        }
        uVar17 = bVar1 & uVar17;
        if ((pbVar18[1] & 0xffffffc0) == 0x80) {
          pbVar6 = pbVar18 + lVar13 + 2;
          uVar17 = pbVar18[1] & 0x3f | uVar17 << 6;
          pbVar10 = pbVar6;
          if (bVar3) {
            uVar8 = (uint)pbVar18[2];
            pbVar10 = pbVar18 + 2;
            if (((uVar8 & 0xffffffc0) == 0x80) &&
               (uVar17 = uVar8 & 0x3f | uVar17 << 6, pbVar10 = pbVar6, bVar4)) {
              uVar8 = (uint)pbVar18[3];
              pbVar10 = pbVar18 + 3;
              if ((uVar8 & 0xffffffc0) == 0x80) {
                uVar17 = uVar17 << 6 | uVar8 & 0x3f;
                pbVar10 = pbVar6;
              }
            }
          }
        }
      }
    }
    pbVar18 = pbVar10;
    if (uVar17 != 0) {
      if (!bVar19) goto code_r0x0048d271;
      if ((uVar17 == 10) && (uVar2 = uVar16 & 1, uVar16 = uVar16 & 0xffffffffffffff01, uVar2 == 0))
      {
        (**(code **)(*(long *)this + 0x40))(this,0xd);
      }
      uVar8 = (uint)CONCAT71((int7)(uVar16 >> 8),uVar17 == 0xd);
      goto LAB_0048d2a4;
    }
    goto LAB_0048d4e9;
  }
  pbVar18 = (byte *)*param_1;
  if (bVar19) {
    bVar1 = *pbVar18;
    pbVar6 = (byte *)CONCAT71((int7)((ulong)in_RAX >> 8),bVar1);
    pbVar10 = pbVar18;
    do {
      while (bVar1 == 10) {
        if ((pbVar18 < pbVar10) &&
           (cVar5 = (**(code **)(*(long *)this + 0x28))(this,pbVar18), cVar5 == '\0')) {
          return 0;
        }
        cVar5 = (**(code **)(*(long *)this + 0x28))(this,&DAT_005e50db,2);
        if (cVar5 == '\0') {
          return 0;
        }
        pbVar18 = pbVar10 + 1;
        bVar1 = pbVar10[1];
        pbVar6 = (byte *)(ulong)bVar1;
        pbVar10 = pbVar18;
      }
      if ((char)pbVar6 == '\r') {
        if (pbVar10[1] == 10) {
          pbVar10 = pbVar10 + 1;
        }
      }
      else if ((char)pbVar6 == '\0') {
        if ((pbVar18 <= pbVar10 && (long)pbVar10 - (long)pbVar18 != 0) &&
           (pbVar6 = (byte *)(**(code **)(*(long *)this + 0x28))
                                       (this,pbVar18,(long)pbVar10 - (long)pbVar18),
           (char)pbVar6 == '\0')) {
          return 0;
        }
        goto LAB_0048d4e9;
      }
      bVar1 = pbVar10[1];
      pbVar6 = (byte *)(ulong)bVar1;
      pbVar10 = pbVar10 + 1;
    } while( true );
  }
  if ((char)uVar9 == '\0') {
    lVar13 = 0;
    pbVar6 = pbVar18;
    while( true ) {
      pbVar10 = pbVar6 + 1;
      bVar1 = *pbVar6;
      uVar17 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        if ((bVar1 & 0x40) == 0) {
          uVar17 = bVar1 & 0x7f;
        }
        else {
          if ((bVar1 & 0x20) == 0) {
            uVar17 = 0x3f;
            lVar15 = 0;
            bVar19 = false;
            bVar3 = false;
          }
          else {
            bVar19 = true;
            if ((bVar1 & 0x10) == 0) {
              uVar17 = 0x1f;
              lVar15 = 1;
              bVar3 = false;
            }
            else {
              uVar17 = 0xf;
              lVar15 = 2;
              bVar3 = true;
            }
          }
          uVar17 = bVar1 & uVar17;
          if ((pbVar6[1] & 0xffffffc0) == 0x80) {
            pbVar14 = pbVar6 + lVar15 + 2;
            uVar17 = pbVar6[1] & 0x3f | uVar17 << 6;
            pbVar10 = pbVar14;
            if (bVar19) {
              uVar8 = (uint)pbVar6[2];
              pbVar10 = pbVar6 + 2;
              if (((uVar8 & 0xffffffc0) == 0x80) &&
                 (uVar17 = uVar8 & 0x3f | uVar17 << 6, pbVar10 = pbVar14, bVar3)) {
                uVar8 = (uint)pbVar6[3];
                pbVar10 = pbVar6 + 3;
                if ((uVar8 & 0xffffffc0) == 0x80) {
                  uVar17 = uVar17 << 6 | uVar8 & 0x3f;
                  pbVar10 = pbVar14;
                }
              }
            }
          }
        }
      }
      pbVar6 = pbVar10;
      if (uVar17 == 0) break;
      lVar15 = 1;
      if ((0x7f < uVar17) && (lVar15 = 2, 0x7ff < uVar17)) {
        lVar15 = 4 - (ulong)(uVar17 < 0x10000);
      }
      lVar13 = lVar13 + lVar15;
    }
                    /* WARNING: Could not recover jumptable at 0x0048d4cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(*(long *)this + 0x28))(this,pbVar18,lVar13);
    return uVar7;
  }
  while( true ) {
    do {
      bVar1 = *pbVar18;
      pbVar6 = (byte *)0x0;
      pbVar18 = pbVar18 + 1;
    } while (bVar1 == 0xd);
    if (bVar1 == 0) break;
    cVar5 = (**(code **)(*(long *)this + 0x30))(this,(int)(char)bVar1);
    if (cVar5 == '\0') {
      return 0;
    }
  }
LAB_0048d4e9:
  return CONCAT71((int7)((ulong)pbVar6 >> 8),1);
code_r0x0048d271:
  uVar8 = (uint)uVar16;
  if (((byte)uVar9 & uVar17 == 0xd) == 0) {
LAB_0048d2a4:
    local_38 = uVar8;
    local_34 = (uint)uVar9;
    if (uVar17 < 0x10000) {
      local_3c = (undefined1  [4])(uVar17 & 0xffff);
      puVar11 = (uint *)(local_3c + 2);
    }
    else {
      local_3c = (undefined1  [4])
                 (CONCAT22((short)uVar17,(short)(uVar17 + 0x3ff0000 >> 10) + -0x2800) & 0x3ffffff |
                 0xdc000000);
      puVar11 = &local_38;
    }
    cVar5 = (**(code **)(*(long *)this + 0x40))(this);
    if (cVar5 == '\0') {
      return 0;
    }
    puVar12 = (uint *)local_3c;
    while (puVar12 = (uint *)((long)puVar12 + 2), puVar12 != puVar11) {
      cVar5 = (**(code **)(*(long *)this + 0x40))(this);
      if (cVar5 == '\0') {
        return 0;
      }
    }
    uVar9 = (ulong)local_34;
    uVar16 = (ulong)local_38;
  }
  goto LAB_0048d180;
}


