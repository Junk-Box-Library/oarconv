﻿/*    
*/

#include "oarconv_help.h"


void  oarconv_help(FILE* fp)
{
    fprintf(fp, "\n");
    fprintf(fp, " oarconv ");
    fprintf(fp, "[-i OAR_directory] [-o output_directory] [-a adding_assets_directories_that_separated_by_':'] [-f object_xml_file]\n");
    fprintf(fp, "         [-t terrain_texture_scale] [-c external_convert_command_of_jp2]\n");
    fprintf(fp, "         [-s start_no.] [-e end_no.]\n");
    fprintf(fp, "         [-l | -w] [-r]\n");
    fprintf(fp, "         [-x shift_of_x_direction] [-y shift_of_y_direction] [-z shift_of_z_direction]\n");
    fprintf(fp, "         [-b] [-d] [-v] [-h]\n");
    fprintf(fp, "\n");

    fprintf(fp, "   -i : specify OAR directory. default is %s\n", OART_DEFAULT_INP_DIR);
    fprintf(fp, "   -o : specify output directory. default is %s\n", OART_DEFAULT_DAE_DIR);
    fprintf(fp, "   -f : specify object xml file. only specified file is converted.\n");
    fprintf(fp, "   -a : specify adding assets directories that separated by ':'. default is %s\n", OART_DEFAULT_AST_DIR);
    fprintf(fp, "   -t : specify Terrain texture scale. default is %f\n", TRNT_DEFAULT_TEX_SCALE);
    fprintf(fp, "   -c : specify external convert command from jp2 to other image. default is \"%s\"\n", OART_JP2_DECOMP_COM);
    fprintf(fp, "   -s : specify start number of xml file. default is 0.\n");
    fprintf(fp, "   -e : specify end number of xml file. default is -1 (minus number means infinity).\n");
    fprintf(fp, "   -x : specify shift of x direction of all objects. default is 0.0\n");
    fprintf(fp, "   -y : specify shift of y direction of all objects. default is 0.0\n");
    fprintf(fp, "   -z : specify shift of z direction of all objects. default is 0.0\n");
    fprintf(fp, "   -r : for Unreal Engine.\n");
    fprintf(fp, "   -l : output STL file(s) using BREP.\n");
    fprintf(fp, "   -w : output Wavefront OBJ file(s) using BREP.\n");
    fprintf(fp, "   -d : debug mode. display debug information. \n");
    fprintf(fp, "   -v : display version information. \n");
    fprintf(fp, "   -h : display this help messages. \n");
    fprintf(fp, "\n");
    fprintf(fp, " ex.) oarconv -i OAR -a /usr/local/opensim/bin/assets/TexturesAssetSet:./assets -d\n");
    fprintf(fp, "\n");

    fflush(fp);
    return;
}

