﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/codecommit/model/CreateApprovalRuleTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateApprovalRuleTemplateRequest::CreateApprovalRuleTemplateRequest() : 
    m_approvalRuleTemplateNameHasBeenSet(false),
    m_approvalRuleTemplateContentHasBeenSet(false),
    m_approvalRuleTemplateDescriptionHasBeenSet(false)
{
}

Aws::String CreateApprovalRuleTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_approvalRuleTemplateNameHasBeenSet)
  {
   payload.WithString("approvalRuleTemplateName", m_approvalRuleTemplateName);

  }

  if(m_approvalRuleTemplateContentHasBeenSet)
  {
   payload.WithString("approvalRuleTemplateContent", m_approvalRuleTemplateContent);

  }

  if(m_approvalRuleTemplateDescriptionHasBeenSet)
  {
   payload.WithString("approvalRuleTemplateDescription", m_approvalRuleTemplateDescription);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateApprovalRuleTemplateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.CreateApprovalRuleTemplate"));
  return headers;

}




