// Function : isSymbolicLink
// Namespace: juce:File
// Entry    : 004986f0
// Prototype: bool isSymbolicLink(File * this)
// Body     : 004986f0 - 004987ac


/* juce::File::isSymbolicLink() const */

bool __thiscall juce::File::isSymbolicLink(File *this)

{
  int iVar1;
  char cVar2;
  char *__buf;
  ulong uVar3;
  undefined4 *puVar4;
  char *__dest;
  int *piVar5;
  size_t __n;
  
  __buf = malloc(0x2002);
  uVar3 = readlink((char *)this,__buf,0x2000);
  __dest = "";
  if (((__buf != (char *)0x0) && (0 < (int)uVar3)) && (*__buf != '\0')) {
    __n = uVar3 & 0xffffffff;
    if ((int)uVar3 < 1) {
      __n = 0;
    }
    uVar3 = __n + 4 & 0xfffffffffffffffc;
                    /* try { // try from 00498745 to 00498749 has its CatchHandler @ 004987ad */
    puVar4 = operator_new__(uVar3 + 0x17);
    LOCK();
    *puVar4 = 0;
    UNLOCK();
    *(ulong *)(puVar4 + 2) = uVar3;
    __dest = (char *)(puVar4 + 4);
    memcpy(__dest,__buf,__n);
    *(undefined1 *)((long)puVar4 + __n + 0x10) = 0;
  }
  free(__buf);
  cVar2 = *__dest;
  piVar5 = (int *)(__dest + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar5);
    }
  }
  return cVar2 != '\0';
}


