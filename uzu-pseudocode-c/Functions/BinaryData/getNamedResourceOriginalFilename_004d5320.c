// Function : getNamedResourceOriginalFilename
// Namespace: BinaryData
// Entry    : 004d5320
// Prototype: undefined * getNamedResourceOriginalFilename(char * param_1)
// Body     : 004d5320 - 004d542c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* BinaryData::getNamedResourceOriginalFilename(char const*) */

undefined * __cdecl BinaryData::getNamedResourceOriginalFilename(char *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  puVar1 = PTR_namedResourceList_00715e50;
  iVar2 = strcmp(*(char **)PTR_namedResourceList_00715e50,param_1);
  if (iVar2 == 0) {
    lVar3 = 0;
  }
  else {
    iVar2 = strcmp(*(char **)(puVar1 + 8),param_1);
    if (iVar2 == 0) {
      lVar3 = 1;
    }
    else {
      iVar2 = strcmp(*(char **)(puVar1 + 0x10),param_1);
      if (iVar2 == 0) {
        lVar3 = 2;
      }
      else {
        iVar2 = strcmp(*(char **)(puVar1 + 0x18),param_1);
        if (iVar2 == 0) {
          lVar3 = 3;
        }
        else {
          iVar2 = strcmp(*(char **)(puVar1 + 0x20),param_1);
          if (iVar2 == 0) {
            lVar3 = 4;
          }
          else {
            iVar2 = strcmp(*(char **)(puVar1 + 0x28),param_1);
            if (iVar2 == 0) {
              lVar3 = 5;
            }
            else {
              iVar2 = strcmp(*(char **)(puVar1 + 0x30),param_1);
              if (iVar2 == 0) {
                lVar3 = 6;
              }
              else {
                iVar2 = strcmp(*(char **)(puVar1 + 0x38),param_1);
                if (iVar2 == 0) {
                  lVar3 = 7;
                }
                else {
                  iVar2 = strcmp(*(char **)(puVar1 + 0x40),param_1);
                  if (iVar2 == 0) {
                    lVar3 = 8;
                  }
                  else {
                    iVar2 = strcmp(*(char **)(puVar1 + 0x48),param_1);
                    if (iVar2 != 0) {
                      return (undefined *)0x0;
                    }
                    lVar3 = 9;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return *(undefined **)(PTR_originalFilenames_00715b10 + lVar3 * 8);
}


