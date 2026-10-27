// Function : png_default_error
// Namespace: juce:pnglibNamespace
// Entry    : 0039b620
// Prototype: undefined png_default_error(void)
// Body     : 0039b620 - 0039b651


/* juce::pnglibNamespace::png_default_error(juce::pnglibNamespace::png_struct_def const*, char
   const*) */

void juce::pnglibNamespace::png_default_error(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_stderr_00715948;
  fprintf(*(FILE **)PTR_stderr_00715948,"libpng error: %s","");
  fputc(10,*(FILE **)puVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


