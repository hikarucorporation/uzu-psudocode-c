// Function : png_warning
// Namespace: juce:pnglibNamespace
// Entry    : 003961c0
// Prototype: undefined png_warning(long param_1, char * param_2)
// Body     : 003961c0 - 003962b5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_warning(juce::pnglibNamespace::png_struct_def const*, char const*) */

void __cdecl juce::pnglibNamespace::png_warning(long param_1,char *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR_stderr_00715948;
  if (param_1 != 0) {
    if (*param_2 == '#') {
      uVar2 = 1;
      if (((((param_2[1] != ' ') && (uVar2 = 2, param_2[2] != ' ')) &&
           (uVar2 = 3, param_2[3] != ' ')) &&
          (((uVar2 = 4, param_2[4] != ' ' && (uVar2 = 5, param_2[5] != ' ')) &&
           ((uVar2 = 6, param_2[6] != ' ' &&
            ((uVar2 = 7, param_2[7] != ' ' && (uVar2 = 8, param_2[8] != ' ')))))))) &&
         ((uVar2 = 9, param_2[9] != ' ' &&
          ((((uVar2 = 10, param_2[10] != ' ' && (uVar2 = 0xb, param_2[0xb] != ' ')) &&
            (uVar2 = 0xc, param_2[0xc] != ' ')) && (uVar2 = 0xd, param_2[0xd] != ' ')))))) {
        uVar2 = (ulong)(param_2[0xe] == ' ') ^ 0xf;
      }
    }
    else {
      uVar2 = 0;
    }
    param_2 = param_2 + uVar2;
    if (*(code **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0039628e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 8))(param_1,param_2);
      return;
    }
  }
  fprintf(*(FILE **)PTR_stderr_00715948,"libpng warning: %s",param_2);
  fputc(10,*(FILE **)puVar1);
  return;
}


