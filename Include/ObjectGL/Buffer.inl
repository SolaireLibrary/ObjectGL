#ifndef OBJECT_GL_BUFFER_INL
#define OBJECT_GL_BUFFER_INL

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
	\file Buffer.inl
	\brief
	\author Adam Smith
	\date 4th November 2015
*/

namespace ObjectGL{
	
	// Object

	Buffer::Buffer(Context& aContext) :
		Object(aContext)
	{}

	Buffer::~Buffer(){
		if(IsCreated()) Destroy();
	}

	GLuint Buffer::Size() const{
		return mSize;
	}

	void Buffer::Bind(const Target aTarget){
		glBindBuffer(
			static_cast<GLenum>(aTarget), 
			static_cast<GLint>(GetID())
		);
	}

	void Buffer::Unbind(const Target aTarget){
		glBindBuffer(
			static_cast<GLenum>(aTarget),
			0
		);
	}
	
	bool Buffer::IsBound(const Target aTarget) const{
		//! \todo Implement Buffer::IsBound
		return false;
	}

	void Buffer::Create(){
		if(IsCreated()) throw std::runtime_error("ObjectGL::Buffer : Buffer has already been created");
		glGenBuffers(1, &mID);
		if(mID == Object::INVALID_ID) throw std::runtime_error("ObjectGL::Buffer : glGenBuffers returned invalid ID");
	}

	void Buffer::Destroy(){
		if(! IsCreated()) throw std::runtime_error("ObjectGL::Buffer : Buffer has not been created");
		glDeleteBuffers(1, &mID);
		mID = INVALID_ID;
	}

	void Buffer::OnContextCreated(){
		//! \todo Rebind buffer if current
	}

}

#endif
