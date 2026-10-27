// Function : createDirectory
// Namespace: juce:File
// Entry    : 004a1120
// Prototype: undefined8 * createDirectory(undefined8 * param_1, undefined8 * param_2)
// Body     : 004a1120 - 004a1444


/* WARNING: Removing unreachable block (ram,0x004a11ab) */
/* WARNING: Removing unreachable block (ram,0x004a11b8) */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::File::createDirectory() const */

undefined8 * __cdecl juce::File::createDirectory(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *piVar9;
  byte *pbVar10;
  byte *local_d0;
  char *local_c8;
  byte *local_c0;
  stat64 local_b8;
  
  if (((*(char *)*param_2 != '\0') && (iVar1 = stat64((char *)*param_2,&local_b8), iVar1 == 0)) &&
     ((local_b8.st_mode & 0x4000) != 0)) {
    *param_1 = &DAT_0061ac58;
    return param_1;
  }
  getPathUpToLastSlash(&local_b8.st_dev,param_2);
  pbVar8 = (byte *)(local_b8.st_dev + -0x10);
  if (pbVar8 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar8 = *(int *)pbVar8 + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  local_d0 = (byte *)local_b8.st_dev;
  pbVar8 = (byte *)(local_b8.st_dev + -0x10);
  if (pbVar8 == (byte *)&emptyString) {
LAB_004a11dc:
    pbVar8 = (byte *)*param_2;
    if ((byte *)local_b8.st_dev != pbVar8) {
LAB_004a11ed:
      uVar2 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (local_d0,pbVar8);
      if (uVar2 != 0) {
                    /* try { // try from 004a11fd to 004a120b has its CatchHandler @ 004a149a */
        createDirectory(&local_b8.st_dev,&local_d0);
        if (*(byte *)local_b8.st_dev == 0) {
                    /* try { // try from 004a121e to 004a122e has its CatchHandler @ 004a1468 */
          juce::String::trimCharactersAtEnd(&local_c8,(byte *)*param_2,&DAT_0065be94);
          iVar1 = mkdir(local_c8,0x1ff);
          pbVar8 = &DAT_0061ac58;
          if (iVar1 == -1) {
                    /* try { // try from 004a1246 to 004a124f has its CatchHandler @ 004a1445 */
            (anonymous_namespace)::getResultForErrno((_anonymous_namespace_ *)&local_c0);
            pbVar8 = local_c0;
          }
          local_c0 = (byte *)local_b8.st_dev;
          pbVar10 = (byte *)(local_b8.st_dev + -0x10);
          local_b8.st_dev = (__dev_t)pbVar8;
          if (pbVar10 != (byte *)&emptyString) {
            LOCK();
            iVar1 = *(int *)pbVar10;
            *(int *)pbVar10 = *(int *)pbVar10 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              operator_delete__(pbVar10);
            }
          }
          piVar9 = (int *)(local_c8 + -0x10);
          if (piVar9 != &emptyString) {
            LOCK();
            iVar1 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              operator_delete__(piVar9);
            }
          }
        }
        *param_1 = local_b8.st_dev;
        local_d0 = local_d0 + -0x10;
        if (local_d0 == (byte *)&emptyString) {
          return param_1;
        }
        goto LAB_004a13f4;
      }
    }
  }
  else {
    LOCK();
    iVar1 = *(int *)pbVar8;
    *(int *)pbVar8 = *(int *)pbVar8 + -1;
    UNLOCK();
    if (iVar1 != 0) goto LAB_004a11dc;
    operator_delete__(pbVar8);
    pbVar8 = (byte *)*param_2;
    if (local_d0 != pbVar8) goto LAB_004a11ed;
  }
                    /* try { // try from 004a12d3 to 004a12dc has its CatchHandler @ 004a14a4 */
  piVar9 = operator_new__(0x37);
  LOCK();
  *piVar9 = 0;
  UNLOCK();
  piVar9[2] = 0x20;
  piVar9[3] = 0;
  pbVar10 = (byte *)(piVar9 + 4);
  bVar6 = 0x43;
  lVar3 = 2;
  pbVar8 = pbVar10;
  do {
    if ((char)bVar6 < '\0') {
      *pbVar8 = bVar6 >> 6 | 0xc0;
      pbVar8[1] = bVar6 & 0x3f | 0x80;
      pbVar5 = pbVar8 + 1;
      pbVar7 = pbVar8 + 2;
      bVar6 = (&UNK_005e5e32)[lVar3];
      pbVar8 = pbVar5;
      if (-1 < (char)bVar6) goto LAB_004a1375;
LAB_004a1310:
      pbVar5 = pbVar7;
      pbVar8[1] = bVar6 >> 6 | 0xc0;
      pbVar8[2] = bVar6 & 0x3f | 0x80;
    }
    else {
      *pbVar8 = bVar6;
      pbVar7 = pbVar8 + 1;
      bVar6 = (&UNK_005e5e32)[lVar3];
      pbVar5 = pbVar8;
      if ((char)bVar6 < '\0') goto LAB_004a1310;
LAB_004a1375:
      *pbVar7 = bVar6;
    }
    pbVar8 = pbVar5 + 2;
    bVar6 = "Cannot create parent directory"[lVar3];
    lVar3 = lVar3 + 2;
  } while (lVar3 != 0x20);
  *pbVar8 = 0;
  if (*pbVar10 == 0) {
                    /* try { // try from 004a1389 to 004a1392 has its CatchHandler @ 004a1492 */
    puVar4 = operator_new__(0x27);
    LOCK();
    *puVar4 = 0;
    UNLOCK();
    *(undefined8 *)(puVar4 + 2) = 0x10;
    pbVar10 = (byte *)(puVar4 + 4);
    *(undefined8 *)(puVar4 + 4) = 0x206e776f6e6b6e55;
    puVar4[6] = 0x6f727245;
    *(undefined2 *)(puVar4 + 7) = 0x72;
  }
  else {
    LOCK();
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  *param_1 = pbVar10;
  LOCK();
  *(int *)(pbVar10 + -0x10) = *(int *)(pbVar10 + -0x10) + 1;
  UNLOCK();
  LOCK();
  pbVar8 = pbVar10 + -0x10;
  iVar1 = *(int *)pbVar8;
  *(int *)pbVar8 = *(int *)pbVar8 + -1;
  UNLOCK();
  if (iVar1 == 0) {
    operator_delete__(pbVar10 + -0x10);
    LOCK();
    iVar1 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    iVar1 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
  }
  if (iVar1 == 0) {
    operator_delete__(piVar9);
  }
  local_d0 = local_d0 + -0x10;
  if (local_d0 == (byte *)&emptyString) {
    return param_1;
  }
LAB_004a13f4:
  LOCK();
  iVar1 = *(int *)local_d0;
  *(int *)local_d0 = *(int *)local_d0 + -1;
  UNLOCK();
  if (iVar1 == 0) {
    operator_delete__(local_d0);
  }
  return param_1;
}


