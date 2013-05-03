
from django import forms
from models import *



class MoneyFlowForm(forms.ModelForm):
	
    class Meta:
        model = MoneyFlow	
        # exclude = [] # uncomment this line and specify any field to exclude it from the form

    def __init__(self, *args, **kwargs):
        super(MoneyFlowForm, self).__init__(*args, **kwargs)

