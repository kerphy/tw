
from django.conf.urls import patterns, url
from models import *
from views import *

urlpatterns = patterns('',

    url(r'moneyflow/create/$', create_moneyflow, name='create'),
    url(r'moneyflow/list/$', list_moneyflow , name='list'),
    url(r'^$', index , name='index'),
    url(r'moneyflow/edit/(?P<id>[^/]+)/$', edit_moneyflow, name='edit'),
    url(r'moneyflow/view/(?P<id>[^/]+)/$', view_moneyflow, name='view'),
    url(r'moneyflow/test/$', test_moneyflow , name='test'),
    
)
