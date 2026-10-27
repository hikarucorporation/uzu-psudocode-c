// Function : hasWriteAccess
// Namespace: juce:File
// Entry    : 004a04b0
// Prototype: ulong hasWriteAccess(File * this)
// Body     : 004a04b0 - 004a06cf


/* WARNING: Removing unreachable block (ram,0x004a0643) */
/* WARNING: Removing unreachable block (ram,0x004a0650) */
/* juce::File::hasWriteAccess() const */

ulong __thiscall juce::File::hasWriteAccess(File *this)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  byte *pbVar5;
  int iVar6;
  __uid_t _Var7;
  ulong uVar8;
  uint uVar9;
  byte *pbVar10;
  undefined8 unaff_RBX;
  undefined7 uVar11;
  uint uVar12;
  long lVar13;
  int *piVar14;
  __dev_t local_a8;
  stat64 local_a0;
  
  if (**(char **)this != '\0') {
    iVar6 = access(*(char **)this,0);
    uVar11 = (undefined7)((ulong)unaff_RBX >> 8);
    if (iVar6 == 0) {
      _Var7 = geteuid();
      if (_Var7 == 0) {
        uVar8 = CONCAT71(uVar11,1);
      }
      else {
        iVar6 = access(*(char **)this,2);
        uVar8 = CONCAT71(uVar11,iVar6 == 0);
      }
      goto LAB_004a06a2;
    }
    if ((**(char **)this != '\0') &&
       ((iVar6 = stat64(*(char **)this,&local_a0), iVar6 != 0 || ((local_a0.st_mode & 0x4000) == 0))
       )) {
      bVar2 = **(byte **)this;
      uVar8 = CONCAT71(uVar11,bVar2);
      pbVar5 = *(byte **)this;
      while (bVar2 != 0) {
        pbVar1 = pbVar5 + 1;
        uVar9 = (uint)uVar8 & 0xff;
        if ((char)uVar8 < '\0') {
          if ((uVar8 & 0x40) == 0) {
            uVar9 = (uint)uVar8 & 0x7f;
          }
          else {
            if ((uVar8 & 0x20) == 0) {
              uVar12 = 0x3f;
              lVar13 = 0;
              bVar3 = false;
              bVar4 = false;
            }
            else {
              bVar3 = true;
              if ((uVar8 & 0x10) == 0) {
                uVar12 = 0x1f;
                lVar13 = 1;
                bVar4 = false;
              }
              else {
                uVar12 = 0xf;
                lVar13 = 2;
                bVar4 = true;
              }
            }
            uVar9 = uVar9 & uVar12;
            if ((pbVar5[1] & 0xffffffc0) == 0x80) {
              pbVar10 = pbVar5 + lVar13 + 2;
              uVar9 = pbVar5[1] & 0x3f | uVar9 << 6;
              pbVar1 = pbVar10;
              if (bVar3) {
                pbVar1 = pbVar5 + 2;
                if (((*pbVar1 & 0xffffffc0) == 0x80) &&
                   (uVar9 = *pbVar1 & 0x3f | uVar9 << 6, pbVar1 = pbVar10, bVar4)) {
                  uVar12 = (uint)pbVar5[3];
                  pbVar1 = pbVar5 + 3;
                  if ((uVar12 & 0xffffffc0) == 0x80) {
                    uVar9 = uVar9 << 6 | uVar12 & 0x3f;
                    pbVar1 = pbVar10;
                  }
                }
              }
            }
          }
        }
        if (uVar9 == 0x2f) {
          getPathUpToLastSlash(&local_a0.st_dev,(undefined8 *)this);
          piVar14 = (int *)(local_a0.st_dev - 0x10);
          if (piVar14 != &emptyString) {
            LOCK();
            *piVar14 = *piVar14 + 1;
            UNLOCK();
          }
          LOCK();
          UNLOCK();
          local_a8 = local_a0.st_dev;
          piVar14 = (int *)(local_a0.st_dev - 0x10);
          if (piVar14 != &emptyString) {
            LOCK();
            iVar6 = *piVar14;
            *piVar14 = *piVar14 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              operator_delete__(piVar14);
            }
          }
                    /* try { // try from 004a0675 to 004a067c has its CatchHandler @ 004a06d0 */
          uVar8 = hasWriteAccess((File *)&local_a8);
          uVar8 = uVar8 & 0xffffffff;
          piVar14 = (int *)(local_a8 - 0x10);
          if (piVar14 != &emptyString) {
            LOCK();
            iVar6 = *piVar14;
            *piVar14 = *piVar14 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              operator_delete__(piVar14);
            }
          }
          goto LAB_004a06a2;
        }
        bVar2 = *pbVar1;
        uVar8 = (ulong)bVar2;
        pbVar5 = pbVar1;
      }
    }
  }
  uVar8 = 0;
LAB_004a06a2:
  return uVar8 & 0xffffffff;
}


