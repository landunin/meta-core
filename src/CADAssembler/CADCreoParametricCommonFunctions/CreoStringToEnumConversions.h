
// WARNING - DO NOT EDIT THIS FILE
// This file was auto generated by src\CADAssembler\CodeGenerationTools\enums\CreateCADEnums.bat.
// To edit, modify src\CADAssembler\CodeGenerationTools\enums\CreateCADEnums_InputFile.txt and run CreateCADEnums.bat.

/*! \file CreoStringToEnumConversions.h
   \brief  Functions to convert between strings and enums.

	The input/output XML files that are used by the CAD applications
	do not persist enums for known values.  They instead persist strings,
	which for efficiency reasons are converted to enums.  This file provides
	the conversion routines.
 */
#ifndef CREO_STRING_TO_ENUM_CONVERSIONS_H
#define CREO_STRING_TO_ENUM_CONVERSIONS_H

#pragma warning( disable : 4290 )  // a future feature : exception specification, i.e. throw

#include <isis_application_exception.h>
#include <isis_include_ptc_headers.h>
#include <string>
#include <iostream>
#include <CADStringToEnumConversions.h>

using namespace std;

namespace isis
{

	////////////////////////////////////////////////////////////////////////////////////////

	ProBoolean ProBoolean_enum( const std::string &in_String)
										throw (isis::application_exception);

	std::string ProBoolean_string( ProBoolean in_Enum )
										throw (isis::application_exception);

	////////////////////////////////////////////////////////////////////////////////////////

	ProMdlType ProMdlType_enum( const std::string &in_String)
										throw (isis::application_exception);

	std::string ProMdlType_string( ProMdlType in_Enum )
										throw (isis::application_exception);

	ProMdlType ProMdlType_enum( e_CADMdlType in_Enum )
										throw (isis::application_exception);

	std::string ProMdlType_string( e_CADMdlType in_Enum )
										throw (isis::application_exception);

	////////////////////////////////////////////////////////////////////////////////////////

	ProType FeatureGeometryType_enum( const std::string &in_String)
										throw (isis::application_exception);

	std::string FeatureGeometryType_string( ProType in_Enum )
										throw (isis::application_exception);

	ProType FeatureGeometryType_enum( e_CADFeatureGeometryType in_Enum )
										throw (isis::application_exception);

	std::string FeatureGeometryType_string( e_CADFeatureGeometryType in_Enum )
										throw (isis::application_exception);

	////////////////////////////////////////////////////////////////////////////////////////

	ProAsmcompConstrType ProAsmcompConstrType_enum( const std::string &in_String)
										throw (isis::application_exception);

	std::string ProAsmcompConstrType_string( ProAsmcompConstrType in_Enum )
										throw (isis::application_exception);

	ProAsmcompConstrType ProAsmcompConstrType_enum( e_CADAssemblyConstraintType in_Enum )
										throw (isis::application_exception);

	std::string ProAsmcompConstrType_string( e_CADAssemblyConstraintType in_Enum )
										throw (isis::application_exception);

	////////////////////////////////////////////////////////////////////////////////////////

	ProDatumside ProDatumside_enum( const std::string &in_String)
										throw (isis::application_exception);

	std::string ProDatumside_string( ProDatumside in_Enum )
										throw (isis::application_exception);

	ProDatumside ProDatumside_enum( e_CADDatumside in_Enum )
										throw (isis::application_exception);

	std::string ProDatumside_string( e_CADDatumside in_Enum )
										throw (isis::application_exception);

	////////////////////////////////////////////////////////////////////////////////////////

	pro_fem_solver_type ProAnalysisSolverType_enum( const std::string &in_String)
										throw (isis::application_exception);

	std::string ProAnalysisSolverType_string( pro_fem_solver_type in_Enum )
										throw (isis::application_exception);

	pro_fem_solver_type ProAnalysisSolverType_enum( e_CADAnalysisSolverType in_Enum )
										throw (isis::application_exception);

	std::string ProAnalysisSolverType_string( e_CADAnalysisSolverType in_Enum )
										throw (isis::application_exception);

	////////////////////////////////////////////////////////////////////////////////////////

	pro_fem_mesh_type ProAnalysisMeshType_enum( const std::string &in_String)
										throw (isis::application_exception);

	std::string ProAnalysisMeshType_string( pro_fem_mesh_type in_Enum )
										throw (isis::application_exception);

	pro_fem_mesh_type ProAnalysisMeshType_enum( e_CADAnalysisMeshType in_Enum )
										throw (isis::application_exception);

	std::string ProAnalysisMeshType_string( e_CADAnalysisMeshType in_Enum )
										throw (isis::application_exception);

	////////////////////////////////////////////////////////////////////////////////////////

	pro_fem_shell_mesh_type ProAnalysisShellElementType_enum( const std::string &in_String)
										throw (isis::application_exception);

	std::string ProAnalysisShellElementType_string( pro_fem_shell_mesh_type in_Enum )
										throw (isis::application_exception);

	pro_fem_shell_mesh_type ProAnalysisShellElementType_enum( e_CADAnalysisShellElementType in_Enum )
										throw (isis::application_exception);

	std::string ProAnalysisShellElementType_string( e_CADAnalysisShellElementType in_Enum )
										throw (isis::application_exception);

	////////////////////////////////////////////////////////////////////////////////////////

	pro_fem_elem_shape_type ProAnalysisElementShapeType_enum( const std::string &in_String)
										throw (isis::application_exception);

	std::string ProAnalysisElementShapeType_string( pro_fem_elem_shape_type in_Enum )
										throw (isis::application_exception);

	pro_fem_elem_shape_type ProAnalysisElementShapeType_enum( e_CADAnalysisElementShapeType in_Enum )
										throw (isis::application_exception);

	std::string ProAnalysisElementShapeType_string( e_CADAnalysisElementShapeType in_Enum )
										throw (isis::application_exception);

	////////////////////////////////////////////////////////////////////////////////////////

	ProDtmplnConstrType CoordinatePlaneAlignment_enum( const std::string &in_String)
										throw (isis::application_exception);

	std::string CoordinatePlaneAlignment_string( ProDtmplnConstrType in_Enum )
										throw (isis::application_exception);

	////////////////////////////////////////////////////////////////////////////////////////

	ProType CoordinateAxisAlignment_enum( const std::string &in_String)
										throw (isis::application_exception);

	std::string CoordinateAxisAlignment_string( ProType in_Enum )
										throw (isis::application_exception);

	////////////////////////////////////////////////////////////////////////////////////////

	ProAsmcompSetType ProAsmcompSetType_enum( const std::string &in_String)
										throw (isis::application_exception);

	std::string ProAsmcompSetType_string( ProAsmcompSetType in_Enum )
										throw (isis::application_exception);

} // End Namespace
#endif