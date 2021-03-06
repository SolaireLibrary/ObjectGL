#ifndef OBJECT_GL_FRAGMENT_SHADER_INL
#define OBJECT_GL_FRAGMENT_SHADER_INL

//Copyright 2015 Adam Smith
//
//Licensed under the Apache License, Version 2.0 (the "License");
//you may not use this file except in compliance with the License.
//You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
//Unless required by applicable law or agreed to in writing, software
//distributed under the License is distributed on an "AS IS" BASIS,
//WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//See the License for the specific language governing permissions and
//limitations under the License.

// Contact :
// Email             : $objectgl_email
// GitHub repository : $objectgl_git

/*!
	\file ShaderFragment.inl
	\brief
	\author Adam Smith
	\date 6th November 2015
*/

namespace ObjectGL{

	// ShaderFragment

	FragmentShader::FragmentShader(Context& aContext, SourceFactory& aSource) :
		Shader(aContext, aSource)
	{}

	FragmentShader::~FragmentShader(){

	}

	Shader::Type FragmentShader::GetType() const{
		return Shader::Type::FRAGMENT;
	}

	GLuint FragmentShader::GetMaxUniformComponents() const{
		return GL_MAX_FRAGMENT_UNIFORM_COMPONENTS;
	}

	GLuint FragmentShader::GetMaxUniformBlocks() const{
		return GL_MAX_FRAGMENT_UNIFORM_BLOCKS;
	}

	GLuint FragmentShader::GetMaxInputComponents() const{
		return GL_MAX_FRAGMENT_INPUT_COMPONENTS;
	}

	GLuint FragmentShader::GetMaxOutputComponents() const{
		return 0;
	}

	GLuint FragmentShader::GetMaxTextureImageUnits() const{
		return 0;
	}


}

#endif
